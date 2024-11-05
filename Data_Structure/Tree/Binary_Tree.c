#include<stdio.h>
#include<stdlib.h>
#define OVERFLOW -2
#define OK 1

typedef int TElemType;
typedef int Status;

typedef struct BiTNode
{
    TElemType data;
    struct BiTNode *lchild, *rchild;
}BiTNode, *BiTree;
Status CreateBiTree(BiTree *T);
Status PreOrderTraverse(BiTree T);
Status InOrderTraverse(BiTree T);
Status PostOrderTraverse(BiTree T);
Status PreOrderTraverse_No_Recursion(BiTree T);
Status InOrderTraverse_No_Recursion(BiTree T);
Status PostOrderTraverse_No_Recursion(BiTree T);

int main(void)
{
    BiTree T;
    CreateBiTree(&T);
    printf("PreOrderTraverse: ");
    PreOrderTraverse(T);
    printf("\nInOrderTraverse: ");
    InOrderTraverse(T);
    printf("\nPostOrderTraverse: ");
    PostOrderTraverse(T);
    printf("\nPreOrderTraverse_No_Recursion: ");
    PreOrderTraverse_No_Recursion(T);
    printf("\nInOrderTraverse_No_Recursion: ");
    InOrderTraverse_No_Recursion(T);
    printf("\nPostOrderTraverse_No_Recursion: ");
    PostOrderTraverse_No_Recursion(T);
    return 0;
}

Status CreateBiTree(BiTree *T) // 改为传递指针的指针
{
    TElemType ch;
    scanf("%d", &ch);
    if (ch == 0) // 以0表示空节点
    {
        *T = NULL;
    }
    else
    {
        *T = (BiTree)malloc(sizeof(BiTNode));
        if (!*T)
            exit(OVERFLOW);
        (*T)->data = ch;
        CreateBiTree(&(*T)->lchild);
        CreateBiTree(&(*T)->rchild);
    }
    return OK;
}

Status PreOrderTraverse(BiTree T)
{
    if (T)
    {   printf("%d", T->data);
        PreOrderTraverse(T->lchild);
        PreOrderTraverse(T->rchild);
    }
    return OK;
}

Status InOrderTraverse(BiTree T)
{
    if (T)
    {
        InOrderTraverse(T->lchild);
        printf("%d", T->data);
        InOrderTraverse(T->rchild);
    }
    return OK;
}

Status PostOrderTraverse(BiTree T)
{
    if (T)
    {
        PostOrderTraverse(T->lchild);
        PostOrderTraverse(T->rchild);
        printf("%d", T->data);
    }
    return OK;
}

Status PreOrderTraverse_No_Recursion(BiTree T)
{
    BiTree Stack[100];
    int top = -1;
    BiTree p = T;
    while (p || top != -1)
    {
        while (p)
        {
            printf("%d", p->data);
            Stack[++top] = p;
            p = p->lchild;
        }
        if (top != -1)
        {
            p = Stack[top--];
            p = p->rchild;
        }
    }
    return OK;
}

Status InOrderTraverse_No_Recursion(BiTree T)
{
    BiTree Stack[100];
    int top = -1;
    BiTree p = T;
    while (p || top != -1)
    {
        while (p)
        {
            Stack[++top] = p;
            p = p->lchild;
        }
        if (top != -1)
        {
            p = Stack[top--];
            printf("%d", p->data);
            p = p->rchild;
        }
    }
    return OK;
}

Status PostOrderTraverse_No_Recursion(BiTree T)
{
    BiTree Stack[100];
    int top = -1;
    BiTree p = T;
    BiTree q = NULL;
    while (p || top != -1)
    {
        while (p)
        {
            Stack[++top] = p;
            p = p->lchild;
        }
        if (top != -1)
        {
            p = Stack[top];
            if (p->rchild && p->rchild != q)
            {
                p = p->rchild;
                Stack[++top] = p;
                p = p->lchild;
            }
            else
            {
                p = Stack[top--];
                printf("%d", p->data);
                q = p;
                p = NULL;
            }
        }
    }
    return OK;
}