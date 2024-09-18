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
void MergeList(LinkList *La, LinkList Lb, LinkList *Lc);
Status ListInsert(LinkList *L, int i, ElemType e);
int ListLength(LinkList L);
Status GetElem(LinkList L, int i, ElemType *e);

int main(void)
{
    int tmp;
    scanf("%d", &tmp);
    LinkList p, L1_head = NULL, L1_tail = NULL, L2_head = NULL, L2_tail = NULL, L3_head = NULL;
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

    MergeList(&L1_head, L2_head, &L3_head);

    p = L3_head;
    for (int i = 0; i < ListLength(L3_head); i++)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    return 0;
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

void MergeList(LinkList *La, LinkList Lb, LinkList *Lc)
{
    int i = 1, j = 1, k = 0, La_len, Lb_len;
    ElemType ai, bj;
    La_len = ListLength(*La);
    Lb_len = ListLength(Lb);
    while (i <= La_len && j <= Lb_len)
    {
        GetElem(*La, i, &ai);
        GetElem(Lb, j, &bj);
        if (ai <= bj)
        {
            ListInsert(Lc, ++k, ai);
            ++i;
        }
        else
        {
            ListInsert(Lc, ++k, bj);
            ++j;
        }
    }
    while (i <= La_len)
    {
        GetElem(*La, i++, &ai);
        ListInsert(Lc, ++k, ai);
    }
    while (j <= Lb_len)
    {
        GetElem(Lb, j++, &bj);
        ListInsert(Lc, ++k, bj);
    }
}

Status GetElem(LinkList L, int i, ElemType *e) /*取第i个元素*/
{
    if (ListLength(L) == 0 || i < 1 || i > ListLength(L))
    {
        return ERROR;
    }
    LinkList p = L;
    for (int j = 1; j < i; j++)
    {
        p = p->next;
    }
    *e = p->data;
    return OK;
}

Status ListInsert(LinkList *L, int i, ElemType e) /*i位置前插入e*/
{
    if (i < 1 || i > ListLength(*L) + 1)
    {
        return ERROR;
    }
    LinkList p1 = *L, p2 = NULL, p;
    p = (LinkList)malloc(sizeof(LinkList));
    p->data = e;
    if (i == 1)
    {
        p->next = p1;
        *L = p;
    }
    else
    {
        for (int j = 1; j < i; j++)
        {
            p2 = p1;
            p1 = p1->next;
        }
        p2->next = p;
        p->next = p1;
    }
    return OK;
}