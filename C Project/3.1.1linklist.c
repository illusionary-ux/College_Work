#include <stdio.h>
#include <stdlib.h>
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 20

typedef int Status;
typedef int ElemType;
struct LNode
{
    ElemType data;
    struct LNode *next;
};
typedef struct LNode *LinkList; /* 用typedef为struct LNode *定义了一个新的类型名LinkList */
void Union(LinkList La, LinkList Lb);
int equal(ElemType a, ElemType b);
Status ListInsert(LinkList *L, int i, ElemType e);
int LocateElem(LinkList L, ElemType e, int (*compare)(ElemType, ElemType));
int ListLength(LinkList L);
Status GetElem(LinkList L, int i, ElemType *e);

int main(void)
{
    int tmp;
    scanf("%d", &tmp);
    LinkList p, L1_head = NULL, L1_tail = NULL, L2_head = NULL, L2_tail = NULL;
    while (tmp != -1)
    {
        p = (LinkList)malloc(sizeof(LinkList));
        p->data = tmp;
        p->next = NULL;
        if (L1_head == NULL)
        {
            L1_head = p;
        }
        if (L1_tail != NULL)
        {
            L1_tail->next = p;
        }
        L1_tail = p;
        scanf("%d", &tmp);
    } /*L1赋值*/

    scanf("%d", &tmp);
    while (tmp != -1)
    {
        p = (LinkList)malloc(sizeof(LinkList));
        p->data = tmp;
        p->next = NULL;
        if (L2_head == NULL)
        {
            L2_head = p;
        }
        if (L2_tail != NULL)
        {
            L2_tail->next = p;
        }
        L2_tail = p;
        scanf("%d", &tmp);
    } /*L2赋值*/
    Union(L1_head, L2_head);
    p = L1_head;
    for (int i = 0; i < ListLength(L1_head); i++)
    {
        printf("%d ", p->data);
        p = p->next;
    }

    return 0;
}

void Union(LinkList La, LinkList Lb)
{
    int La_len = ListLength(La);
    int Lb_len = ListLength(Lb);
    ElemType e;
    for (int i = 1; i <= Lb_len; i++)
    {
        GetElem(Lb, i, &e);
        if (!LocateElem(La, e, equal))
        {
            ListInsert(&La, ++La_len, e);
        }
    }
}

int equal(ElemType a, ElemType b)
{
    if (a == b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

Status GetElem(LinkList L, int i, ElemType *e)
{
    int cnt = 1;
    LinkList p = L;
    while (p && cnt < i)
    {
        p = p->next;
        cnt++;
    }
    if (!p || cnt > i)
    {
        return ERROR;
    }
    *e = p->data;
    return OK;
}

Status ListInsert(LinkList *L, int i, ElemType e)
{
    int cnt = 1;
    LinkList p1 = *L, p2 = NULL, p;
    while (cnt < i)
    {
        p2 = p1;
        p1 = p1->next;
        cnt++;
    }
    p = (LinkList)malloc(sizeof(struct LNode));
    p->data = e;
    p->next = NULL;
    if (p2 == NULL)
    {
        p->next = *L;
        *L = p;
    }
    else
    {
        p->next = p2->next;
        p2->next = p;
    }

    return OK;
}

int LocateElem(LinkList L, ElemType e, int (*compare)(ElemType, ElemType))
{
    LinkList p = L;
    int cnt = 1;
    while (p != NULL && equal(p->data, e) != 1)
    {
        p = p->next;
        cnt++;
    }
    if (p == NULL)
    {
        return ERROR;
    }
    return cnt;
}

int ListLength(LinkList L)
{
    int cnt = 0;
    LinkList p = L;
    while (p)
    {
        cnt++;
        p = p->next;
    }
    return cnt;
}