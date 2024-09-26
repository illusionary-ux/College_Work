# include<stdio.h>
# include<stdlib.h>


typedef int ElemType;
typedef int Status;
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define OVERFLOW -2
#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10


typedef struct
{
    ElemType *elem;
    int length;
    int listsize;
} List;

Status ListLength(List La);
void Union(List *a, List b);
Status equal(ElemType e1, ElemType e2);
Status InitList(List *L);
Status ListInsert(List *La, int pos, ElemType e);
Status LocateElem(List La, ElemType e, int (*compare)(ElemType, ElemType));
void GetElem(List L, int i, ElemType *e);

int main(void)
{
    List La, Lb;
    InitList(&La);
    InitList(&Lb);
    int tmp = 0;
    while (tmp != -1)
    {
        scanf("%d", &tmp);
        if (tmp != -1)
        {
            ListInsert(&La, ListLength(La) + 1, tmp);
        }
    }
    tmp = 0;
    while (tmp != -1)
    {
        scanf("%d", &tmp);
        if (tmp != -1)
        {
            ListInsert(&Lb, ListLength(Lb) + 1, tmp);
        }
    }
    Union(&La, Lb);
    for (int i = 0; i < ListLength(La); i++)
    {
        ElemType e;
        GetElem(La, i + 1, &e);
        printf("%d ", e);
    }
    return 0;
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

Status equal(ElemType e1, ElemType e2)
{
    return e1 == e2 ? TRUE : FALSE;
}

Status InitList(List *L)
{
    L->elem = (ElemType *)malloc(LIST_INIT_SIZE * sizeof(ElemType));
    if (!L->elem)
        exit(OVERFLOW);
    L->length = 0;
    L->listsize = LIST_INIT_SIZE;
    return OK;
}

void GetElem(List L, int i, ElemType *e)
{
    *e = L.elem[i - 1];
}

Status ListInsert(List *La, int pos,ElemType e)
{
    if (pos < 1 || pos > La->length + 1)
    {
        return ERROR;
    }
    if (La->length == La->listsize)
    {
        ElemType *newbase = (ElemType *)realloc(La->elem, (La->listsize + LISTINCREMENT) * sizeof(ElemType));
        if (!newbase)
        {
            return (OVERFLOW);
        }
        La->elem = newbase;
        La->listsize += LISTINCREMENT;
    }
    for (int i = La->length; i > pos; i--)
    {
        La->elem[i] = La->elem[i-1];
    }
    La->elem[pos - 1] = e;
    La->length++;
    return OK;
}

Status LocateElem(List La, ElemType e, int (*compare)(ElemType, ElemType))
{
    for (int i = 0; i < La.length; i++)
    {
        if (equal(La.elem[i],e))
        {
            return TRUE;
        }
    }
    return ERROR;
}
Status ListLength(List La)
{
    return La.length;
}