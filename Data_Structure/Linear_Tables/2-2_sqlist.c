# include<stdio.h>
# include<stdlib.h>
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
    int *elem;
    int length;
    int listsize;
}List;


void MergeList(List La, List Lb, List *Lc);
Status InitList(List *L);
int ListLength(List L);
Status GetElem(List L, int i, int *e);
Status ListInsert(List *L, int pos, int e);

int main()
{
    List La, Lb, Lc;
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

void MergeList(List La, List Lb, List *Lc)
{
    InitList(Lc);
    int i = 1,j = 1,k = 0,ai,bj;
    int La_len = ListLength(La);
    int Lb_len = ListLength(Lb);
    while ((i<=La_len) && (j<=Lb_len))
    {
        GetElem(La, i, &ai);
        GetElem(Lb, j, &bj);
        if (ai<=bj)
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
    while (i<=La_len)
    {
        GetElem(La, i++, &ai);
        ListInsert(Lc, ++k, ai);
    }
    while (j<=Lb_len)
    {
        GetElem(Lb, j++, &bj);
        ListInsert(Lc, ++k, bj);
    }
}
Status InitList(List *L)
{
    L->elem = (ElemType *)malloc(LIST_INIT_SIZE * sizeof(ElemType));
    if (!L->elem)
    {
        return OVERFLOW;
    }
    L->length = 0;
    L->listsize = LIST_INIT_SIZE;
    return OK;
}

int ListLength(List L)
{
    return L.length;
}

Status GetElem(List L, int i, int *e)
{
    if (i < 1 || i > L.length)
    {
        return ERROR;
    }
    *e = L.elem[i - 1];
    return OK;
}

Status ListInsert(List *L, int pos, int e)
{
    if (L->length == L->listsize)
    {
        ElemType *newbase = (ElemType *)realloc(L->elem, (L->listsize + LISTINCREMENT) * sizeof(ElemType));
        if (!newbase)
        {
            return OVERFLOW;
        }
        L->elem = newbase;
        L->listsize += LISTINCREMENT;
    }
    for (int i = ListLength(*L); i >= pos; i--)
    {
        L->elem[i] = L->elem[i - 1];
    }
    L->elem[pos - 1] = e;
    L->length++;
    return OK;
}