#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
typedef int Status;
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define OVERFLOW -2
#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10

typedef struct LNode
{
    ElemType data;
    struct LNode *next;
} LNode, *LinkList;

typedef struct
{
    LinkList head;
    int Length;
} List;

Status InitList(List *L);
void Union(List *a, List b);
Status CreatNewNode(LinkList *p, ElemType e);
int equal(ElemType a, ElemType b);
Status ListInsert(List *L, int i, ElemType e);
int ListLength(List L);
Status GetElem(List b, int i, ElemType *e);
Status LocateElem(List L, ElemType e, int (*compare)(ElemType, ElemType));

int main(void)
{
    List La, Lb;
    InitList(&La);
    InitList(&Lb);
    ElemType e;
    int tmp;

    
    while (scanf("%d", &tmp) && tmp != -1)
    {
        ListInsert(&La, ListLength(La) + 1, tmp);
    }

    
    while (scanf("%d", &tmp) && tmp != -1)
    {
        ListInsert(&Lb, ListLength(Lb) + 1, tmp);
    }

    if (ListLength(La) == 0 && ListLength(Lb) == 0)
    {
        printf("NULL\n");
        return 0;
    }

    Union(&La, Lb);
    for (int i = 1; i <= ListLength(La); i++)
    {
        GetElem(La, i, &e);
        printf("%d", e);
        if (i < ListLength(La))
            printf(" ");
    }
    printf("\n");
    return 0;
}

Status InitList(List *L)
{
    L->head = (LinkList)malloc(sizeof(LNode));
    if (!L->head)
        exit(OVERFLOW);
    L->head->next = NULL;
    L->Length = 0;
    return OK;
}

Status CreatNewNode(LinkList *p, ElemType e)
{
    *p = (LinkList)malloc(sizeof(LNode));
    if (!*p)
        exit(OVERFLOW);
    (*p)->data = e;
    (*p)->next = NULL;
    return OK;
}

void Union(List *a, List b)
{
    int la_len = ListLength(*a);
    int lb_len = ListLength(b);
    ElemType e;
    for (int i = 1; i <= lb_len; i++)
    {
        GetElem(b, i, &e);
        if (!LocateElem(*a, e, equal))
            ListInsert(a, ++la_len, e);
    }
}

int equal(ElemType a, ElemType b)
{
    return a == b;
}

Status GetElem(List b, int i, ElemType *e)
{
    LinkList p = b.head->next;
    int j = 1;
    while (p && j < i)
    {
        p = p->next;
        j++;
    }
    if (!p || j != i)
        return ERROR;
    *e = p->data;
    return OK;
}

Status LocateElem(List L, ElemType e, int (*compare)(ElemType, ElemType))
{
    LinkList p = L.head->next;
    while (p && !compare(p->data, e))
        p = p->next;
    return p ? TRUE : FALSE;
}

Status ListInsert(List *L, int i, ElemType e)
{
    LinkList p = L->head;
    int j = 0;
    while (p && j < i - 1)
    {
        p = p->next;
        j++;
    }
    if (!p || j > i - 1)
        return ERROR;
    LinkList s;
    CreatNewNode(&s, e);
    s->next = p->next;
    p->next = s;
    L->Length++;
    return OK;
}

int ListLength(List L)
{
    LinkList p = L.head->next;
    int len = 0;
    while (p)
    {
        len++;
        p = p->next;
    }
    return len;
}
