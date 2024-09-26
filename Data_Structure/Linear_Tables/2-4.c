#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    float Coefficient; // 系数
    int exponents;     // 指数
} term, ElemType;

typedef struct LNode
{
    ElemType data;
    struct LNode *next;
} LNode, *LinkList;

typedef LinkList Polynomial;

void CreatPolyn(Polynomial *P, int m);
void DestroyPolyn(Polynomial *P);
void PrintPolyn(Polynomial P);
void AddPolyn(Polynomial *Pa, Polynomial *Pb);
void SubtractPolyn(Polynomial *Pa, Polynomial *Pb);
void MultiplyPolyn(Polynomial *Pa, Polynomial *Pb);
int cmp(term a, term b);
LinkList GetHead(Polynomial P);
int LocateElem(LinkList p, ElemType e, Position *q, int (*compare)(ElemType, ElemType));

int main(void)
{

    return 0;
}

void CreatPolyn(Polynomial *P, int m)
{
    InitList(P);
    LinkList q, s;
    q = P;
    LinkList h = GetHead(P);
    term e;
    e.Coefficient = 0.0;
    e.exponents = -1;
    SetCurElem(h, e); // 头结点数据域存放头结点
    for (int i = 1; i <= m; i++)
    {
        scanf("%f %d", &e.Coefficient, &e.exponents);
        if (!LocateElem()) // 当前链表中不存在该指数项
        {
            if (MakeNode(s, e))
            {
                InsFirst(q, s); // 插入到链表中
            }
        }
    }
}

void AddPolyn(Polynomial *Pa, Polynomial *Pb)
{
    LinkList *ha = GetHead(Pa);
    LinkList *hb = GetHead(Pb);
    LinkList qa = NextPos(ha);
    LinkList qb = NextPos(hb);
    while (qa && qb)
    {
        term a = GetCurElem(qa);
        term b = GetCurElem(qb);
        switch (cmp(a, b))
        {
        case -1:
            ha = qa;
            qa = NextPos(qa);
            break;
        case 0:
            float sum = a.Coefficient + b.Coefficient;
            if (sum != 0.0)
            {
                SetCurElem(qa, sum);
                ha = qa;
            }
            else
            {
                DelFirst(qa);
                FreeNode(qa);
            }
            DelFirst(hb, qb);
            FreeNode(qb);
            qb = NextPos(Pb, qb);
            qa = NextPos(Pa, qa);
            break;
        case 1:
            DelFirst(hb, qb);
            InsFirst(ha, qb);
            qb = NextPos(Pb, qb);
            ha = NextPos(Pa, ha);
            break;
        }
    }
    if (qb)
    {
        Append(Pa, qb);
    }
    FreeNode(qb);
}