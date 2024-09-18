#include <stdio.h>
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 20

typedef int Status;
typedef int ElemType;
typedef struct
{
    ElemType data[MAXSIZE];
    int length;
} SqList;

void MergeList(SqList *La, SqList Lb, SqList *Lc);
int ListLength(SqList L);
Status GetElem(SqList L, int i, ElemType *e);
Status ListInsert(SqList *L, int i, ElemType e);

int main(void)
{
    SqList La, Lb, Lc;
    Lc.length = 0;
    int tmp, cnt = 0;
    scanf("%d", &tmp);
    while (tmp != -1 && cnt < MAXSIZE)
    {
        La.data[cnt++] = tmp;
        scanf("%d", &tmp);
    }
    La.length = cnt;

    cnt = 0;
    scanf("%d", &tmp);
    while (tmp != -1 && cnt < MAXSIZE)
    {
        Lb.data[cnt++] = tmp;
        scanf("%d", &tmp);
    }
    Lb.length = cnt;

    MergeList(&La, Lb, &Lc);
    for (int i = 0; i < Lc.length; i++)
    {
        printf("%d ", Lc.data[i]);
    }
    return 0;
}

void MergeList(SqList *La, SqList Lb, SqList *Lc)
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

int ListLength(SqList L)
{
    return L.length;
}

Status GetElem(SqList L, int i, ElemType *e)
{
    if (L.length == 0 || i < 1 || i > L.length)
    {
        return ERROR;
    }
    *e = L.data[i - 1];
    return OK;
}

Status ListInsert(SqList *L, int i, ElemType e)
{
    if (i < 1 || i > L->length + 1)
    {
        return ERROR;
    }
    for (int j = L->length; j >= i; j--)
    {
        L->data[j] = L->data[j - 1];
    }
    L->data[i - 1] = e;
    L->length++;
    return OK;
}