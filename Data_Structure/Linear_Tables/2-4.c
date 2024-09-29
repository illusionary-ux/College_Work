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
int cmp(term a, term b);
LinkList GetHead(Polynomial P);
void InitList(Polynomial *L);
int LocateElem(Polynomial P, term e, LinkList *q, int (*compare)(term, term));
int MakeNode(LinkList *p, term e);
void InsFirst(LinkList h, LinkList s);

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

void InitList(Polynomial *L)
{
    *L = (LinkList)malloc(sizeof(LNode));
    if (*L)
    {
        (*L)->next = NULL;
    }
}

int LocateElem(Polynomial P, term e, LinkList *q, int (*compare)(term, term))
{
    LinkList p = P->next;
    while (p && !(*compare)(p->data, e))
    {
        *q = p;
        p = p->next;
    }
    if (p)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int MakeNode(LinkList *p, term e)
{
    *p = (LinkList)malloc(sizeof(LNode));
    if (*p)
    {
        (*p)->data = e;
        (*p)->next = NULL;
        return 1;
    }
    else
    {
        return 0;
    }
}

void InsFirst(LinkList h, LinkList s)
{
    s->next = h->next;
    h->next = s;
}

void DestroyPolyn(Polynomial *P)
{
    LinkList p, q;
    p = *P;
    while (p)
    {
        q = p->next;
        free(p);
        p = q;
    }
    *P = NULL;
}

int cmp(term a, term b)
{
    if (a.exponents == b.exponents)
    {
        return 0;
    }
    else if (a.exponents < b.exponents)
    {
        return -1;
    }
    else
    {
        return 1;
    }
}

void AddPolyn(Polynomial *Pa, Polynomial *Pb)
{
    LinkList ha = GetHead(Pa);
    LinkList hb = GetHead(Pb);
    LinkList qa = NextPos(Pa,ha);
    LinkList qb = NextPos(Pb,hb);
    while (qa&&qb)
    {
        term a = GetCurElem(qa);
        term b = GetCurElem(qb);
        switch (cmp(a,b))
        {
        case -1:
            ha = qa;
            qa = NextPos(Pa,qa);
            break;
        case 0:
            a.Coefficient += b.Coefficient;
            if (a.Coefficient == 0)
            {
                DelFirst(qa,ha);
            }
            else
            {
                SetCurElem(qa,a);
            }
            ha = qa;
            qb = NextPos(Pb,qb);
            break;
        case 1:
            DelFirst(qb,hb);
            InsFirst(qa,qb);
            ha = qa;
            qa = NextPos(Pa,qa);
            qb = NextPos(Pb,hb);
            break;
        }
    }
}