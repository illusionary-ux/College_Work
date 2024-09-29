#include <stdio.h>
#include <stdlib.h>

// 表元素
typedef struct
{
    float coef; // 系数
    int expn;   // 指数
} ElemType;

// 结点及其指针类型
typedef struct LNode
{
    ElemType data;
    struct LNode *next;
} *Link, Lnode;

// 链表
typedef struct
{
    Link head, tail;
    int len;
} polynomial;

// 比较两个多项式项的指数
int cmp(ElemType a, ElemType b)
{
    return (a.expn > b.expn) - (a.expn < b.expn);
}

// 创建多项式链表
void CreatePolyn(polynomial *P, int m);

// 多项式相加
void AddPolyn(polynomial *Pa, polynomial *Pb);

// 打印多项式
void PrintPolyn(polynomial P);

// 计算多项式在特定值x下的值
float CalPolyn(polynomial P, int x);

int main()
{
    polynomial P, Q;
    int l;

    // 输入第一个多项式
    printf("请输入第一个一元多项式的项数:\n");
    scanf("%d", &l);
    if (l <= 0)
    {
        printf("输入项数有误！\n");
        return 0;
    }
    CreatePolyn(&P, l);

    // 输入第二个多项式
    printf("请输入第二个一元多项式的项数:\n");
    scanf("%d", &l);
    if (l <= 0)
    {
        printf("输入项数有误！\n");
        return 0;
    }
    CreatePolyn(&Q, l);

    // 选择操作类型
    printf("请选择多项式操作类型:\n1.多项式相加\n2.第一个多项式减第二个多项式\n3.第二个多项式减第一个多项式\n");
    int cho;
    scanf("%d", &cho);
    switch (cho)
    {
    case 1:
        AddPolyn(&P, &Q);
        break;
    case 2:
        for (Link e = Q.head->next; e != NULL; e = e->next)
        {
            e->data.coef *= -1; // 取负
        }
        AddPolyn(&P, &Q);
        break;
    case 3:
        for (Link e = P.head->next; e != NULL; e = e->next)
        {
            e->data.coef *= -1; // 取负
        }
        AddPolyn(&P, &Q);
        break;
    }

    // 打印结果
    printf("操作结果为:\n");
    PrintPolyn(P);

    // 计算多项式值
    int x;
    printf("请输入x的值:\n");
    scanf("%d", &x);
    printf("当x为%d时，一元多项式的值为: %.2f\n", x, CalPolyn(P, x));

    return 0;
}

void CreatePolyn(polynomial *P, int m)
{
    P->head = (Link)malloc(sizeof(Lnode));
    P->tail = P->head;
    P->len = m;

    printf("请依次输入%d项的系数和指数(系数和指数以','分隔)\n", m);
    for (int i = 0; i < m; i++)
    {
        Link e = (Link)malloc(sizeof(Lnode));
        scanf("%f,%d", &e->data.coef, &e->data.expn);
        P->tail->next = e;
        P->tail = e;
    }
    P->tail->next = NULL; // 结束链表
}

void AddPolyn(polynomial *Pa, polynomial *Pb)
{
    Link ha = Pa->head;
    Link qa = ha->next;
    Link hb = Pb->head;
    Link qb = hb->next;

    while (qa != NULL && qb != NULL)
    {
        switch (cmp(qa->data, qb->data))
        {
        case -1:
            ha = qa;
            qa = qa->next;
            break;
        case 0:
            qa->data.coef += qb->data.coef; // 合并同类项
            if (qa->data.coef == 0)
            { // 如果系数为0，删除
                ha->next = qa->next;
                free(qa);
            }
            free(qb);
            hb->next = qb->next;
            qb = hb->next;
            break;
        case 1:
            ha->next = qb; // 插入到链表中
            qb = qb->next;
            ha = ha->next;
            break;
        }
    }
    if (qb != NULL)
    {
        ha->next = qb; // 连接剩余项
    }
    free(hb); // 释放第二个多项式的头结点
}

void PrintPolyn(polynomial P)
{
    Link e = P.head->next;
    if (e == NULL)
    {
        printf("0\n");
        return;
    }
    printf("%.2f*x^%d", e->data.coef, e->data.expn);
    e = e->next;
    while (e != NULL)
    {
        printf("+%.2f*x^%d", e->data.coef, e->data.expn);
        e = e->next;
    }
    printf("\n");
}

float CalPolyn(polynomial P, int x)
{
    Link e = P.head->next;
    float sum = 0;
    while (e != NULL)
    {
        float termValue = e->data.coef;
        for (int i = 0; i < e->data.expn; i++)
        {
            termValue *= x; // 计算x的指数
        }
        sum += termValue;
        e = e->next;
    }
    return sum;
}
