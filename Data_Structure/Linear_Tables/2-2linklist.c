#include <stdio.h>
#include <stdlib.h>
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define OVERFLOW -2
#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
typedef int ElemType;
typedef int Status;

typedef struct
{
    int len;
    struct LNode *next;
}Linklist;
typedef struct LNode
{
    ElemType data;
    struct LNode *next;
} LNode;
void MergeList(Linklist La, Linklist Lb, Linklist *Lc);
Status InitList(Linklist *L);
int ListLength(Linklist L);
Status GetElem(Linklist L, int pos, int *e);
Status ListInsert(Linklist *L, int pos, int e);

int main(void)
{
    Linklist La, Lb, Lc;
    InitList(&La);
    InitList(&Lb);
    int tmp;
    scanf("%d", &tmp);
    while (tmp != -1)
    {
        ListInsert(&La, ListLength(La) + 1, tmp);
        scanf("%d", &tmp);
    }
    scanf("%d", &tmp);
    while (tmp != -1)
    {
        ListInsert(&Lb, ListLength(Lb) + 1, tmp);
        scanf("%d", &tmp);
    }
    MergeList(La, Lb, &Lc);
    for (int i = 1; i <= ListLength(Lc); i++)
    {
        GetElem(Lc, i, &tmp);
        printf("%d ", tmp);
    }
    return 0;
}
void MergeList(Linklist La, Linklist Lb, Linklist *Lc)
{
    InitList(Lc);
    int i = 1, j = 1, k = 0, ai, bj;
    int La_len = ListLength(La);
    int Lb_len = ListLength(Lb);
    while ((i <= La_len) && (j <= Lb_len))
    {
        GetElem(La, i, &ai);
        GetElem(Lb, j, &bj);
        if (ai <= bj)
        {
            ListInsert(Lc, ++k, ai);
            i++;
        }
        else
        {
            ListInsert(Lc, ++k, bj);
            j++;
        }
    }
    while (i <= La_len)
    {
        GetElem(La, i++, &ai);
        ListInsert(Lc, ++k, ai);
    }
    while (j <= Lb_len)
    {
        GetElem(Lb, j++, &bj);
        ListInsert(Lc, ++k, bj);
    }
}

Status InitList(Linklist *L)
{
    L->len = 0;
    L->next = NULL;
    return OK;
}

int ListLength(Linklist L)
{
    return L.len;
}
Status GetElem(Linklist L, int pos, int *e)
{
    if (pos < 1 || pos > L.len)
    {
        return ERROR;
    }
    LNode *p = L.next;
    for (int i = 1; i < pos; i++)
    {
        p = p->next;
    }
    *e = p->data;
    return OK;
}

Status ListInsert(Linklist *L, int pos, int e)
{
    if (pos < 1||pos > L->len+1)
    {
        return ERROR;
    }
    
    LNode *p = (LNode *)malloc(sizeof(LNode));
    if (!p)
    {
        return OVERFLOW;
    }
    p->data = e;
    p->next = NULL;
    LNode *q = L->next;
    if (pos == 1)
    {
        p->next = L->next;
        L->next = p;
    }else
    {
        int cnt = 1;
        while (cnt < pos - 1)
        {
            q = q->next;
            cnt++;
        }
        p->next = q->next;
        q->next = p;
        
    }
    L->len++;
    return OK;
}