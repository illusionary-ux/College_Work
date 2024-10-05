# include<stdio.h>
# include<stdlib.h>

typedef struct{
    float coef;//系数
    int expn;//指数
}term,ElemType;

typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode,*Link;//结点及其指针类型

typedef struct{
    Link head,tail;
    int len;
}polynomial;//链表

int cmp(term a,term b){
    return (a.expn>b.expn)-(a.expn<b.expn);
}   //比较两个多项式项的指数

void CreatePolyn(polynomial *P, int m);
void AddPolyn(polynomial *Pa, polynomial *Pb);
void PrintPolyn(polynomial P);
float CalPolyn(polynomial P, int x);

int main(void)
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
    {
        AddPolyn(&P, &Q);
        break;
    }
        
    case 2:
    {
        for (Link e = Q.head->next; e != NULL; e = e->next)
        {
            e->data.coef *= -1; // 取负
        }
        AddPolyn(&P, &Q);
        break;
    }
        
    case 3:
    {
        for (Link e = P.head->next; e != NULL; e = e->next)
        {
            e->data.coef *= -1; // 取负
        }
        AddPolyn(&P, &Q);
        break;
    }
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
    P->head = (Link)malloc(sizeof(LNode));
    P->tail = P->head;
    P->len = 0;

    printf("请依次输入%d项的系数和指数(系数和指数以','分隔)\n", m);

    for (int i = 0; i < m; i++)
    {
        Link NewNode = (Link)malloc(sizeof(LNode));
        scanf("%f,%d", &NewNode->data.coef, &NewNode->data.expn);
        P->tail->next = NewNode;
        P->tail = NewNode;
        P->tail->next = NULL;
        P->len++;
    }
}

void AddPolyn(polynomial *Pa, polynomial *Pb)
{
    Link ha = Pa->head;
    Link qa = ha->next;
    Link hb = Pb->head;
    Link qb = hb->next;

    while (qa&&qb)
    {
        switch (cmp(qa->data,qb->data))
        {
        case -1:
        {
            ha = qa;
            qa = qa->next;
            break;
        }
            

        case 0:
        {
            float sum = qa->data.coef + qb->data.coef;
            if (sum != 0.0)
            {
                qa->data.coef = sum;
                ha = qa; // 更新ha为当前节点qa
            }
            else
            {
                ha->next = qa->next; // 删除qa节点
                free(qa);
                qa = ha->next; // 更新qa为下一个节点
            }
            hb->next = qb->next; // 删除qb节点
            free(qb);
            qb = hb->next; // 更新qb为下一个节点
            break;
        }

        case 1:
        {
            ha->next = qb; // 插入qb节点
            qb->next = qa; // 修改 qb 的 next 指针，使其指向 qa
            qb = qb->next; // 更新qb为下一个节点
            ha = ha->next; // 更新ha为插入后的节点
            break;
        }
        }
    }
    if (qb)
    {
        ha->next = qb;
    }
    free(hb);
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