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

void Union(SqList *La, SqList Lb);
int ListLength(SqList L);
Status GetElem(SqList L, int i, ElemType *e);
int equal(ElemType a, ElemType b);
Status ListInsert(SqList *L, int i, ElemType e);
int LocateElem(SqList *L, ElemType e, int (*compare)(ElemType, ElemType));

int main(void)
{
    SqList La, Lb;
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
    Union(&La, Lb);
    for (int i = 0; i < La.length; i++)
    {
        printf("%d ", La.data[i]);
    }

    return 0;
}

void Union(SqList *La, SqList Lb)
{
    int La_len = ListLength(*La);
    int Lb_len = ListLength(Lb);
    ElemType e;
    for (int i = 1; i <= Lb_len; i++)
    {
        GetElem(Lb, i, &e);
        if (!LocateElem(La, e, equal))
        {
            ListInsert(La, ++La_len, e);
        }
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

int ListEmpty(SqList L)
{
    if (L.length == 0)
    {
        return TRUE;
    }
    return FALSE;
}

int LocateElem(SqList *L, ElemType e, int (*compare)(ElemType, ElemType))
{
    for (int i = 0; i < L->length; i++)
    {
        if (equal(L->data[i], e))
        {
            return TRUE;
        }
    }
    return FALSE;
}