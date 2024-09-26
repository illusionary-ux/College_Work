/*# include<stdio.h>
# include<stdlib.h>

typedef struct 
{
    int *head;
    int length;
    int listsize;
}Sqlist;


int Init(Sqlist *p);
int Creat(Sqlist *p);
void Merage(Sqlist La, Sqlist Lb, Sqlist *Lc);
int Length(Sqlist La);
void GetElem(Sqlist La, int pos, int *m);
void ListInsert(Sqlist La, int pos, int *m);

int main(void)
{
    Sqlist La, Lb;
    Init(&La);
    Init(&Lb);
    int tmp;
    scanf("%d", &tmp);
    while (tmp!=-1)
    {
        ListInsert(La, ++La.length, tmp);
        scanf("%d", &tmp);
    }
    scanf("%d", &tmp);
    while (tmp!=-1)
    {
        ListInsert(Lb, ++Lb.length, tmp);
        scanf("%d", &tmp);
    }
    Merage(La, Lb, &La);

    return 0;
}

int Init(Sqlist *p)
{
    p->head = (int *)malloc(100 * sizeof(int));
    if (!p->head)
    {
        return 0;
    }
    p->length = 0;
    p->listsize = 100;
    return 1;
}



void Merage(Sqlist La,Sqlist Lb, Sqlist *Lc)
{
    Init(Lc);
    int i = 1, j = 1, k = 0,La_len,Lb_len,ai,bj;
    La_len = Length(La);
    Lb_len = Length(Lb);
    while (i < La_len && j < Lb_len)
    {
        GetElem(La, i, ai);
        GetElem(Lb, j, bj);
        if (ai < bj)
        {
            ListInsert(*Lc, ++k, ai);
            ++i;
        }
        else
        {
            ListInsert(*Lc, ++k, bj);
            ++j;
        }
    }
    
    while (i < La_len)
    {
        GetElem(La, i++, ai);
        ListInsert(*Lc, ++k, ai);
    }
    while (j < Lb_len)
    {
        GetElem(Lb, i++, bj);
        ListInsert(*Lc, ++k, bj);
    }
}

int Length(Sqlist La)
{
    return La.length;
}

void GetElem(Sqlist La, int pos, int *m)
{

}

void ListInsert(Sqlist La,int pos,int *m)
{
    if (pos < 1 || pos > La.length + 1)
    {
        return;
    }
    if (La.length >= La.listsize)
    {
        return;
    }

}

*/

#include <stdio.h>
#include <stdlib.h>

// 定义链表节点结构
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

// 创建一个新节点
Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// 追加节点到链表的末尾
Node *appendNode(Node *head, int data)
{
    Node *newNode = createNode(data);
    if (!head)
    {
        return newNode;
    }
    Node *current = head;
    while (current->next)
    {
        current = current->next;
    }
    current->next = newNode;
    return head;
}

// 合并两个有序链表
Node *merge(Node *s1, Node *s2)
{
    if (!s1)
        return s2;
    if (!s2)
        return s1;

    Node *mergedHead = NULL;
    Node **lastPtrRef = &mergedHead; // 保存最后一个节点的地址

    while (s1 && s2)
    {
        if (s1->data < s2->data)
        {
            *lastPtrRef = s1;
            s1 = s1->next;
        }
        else
        {
            *lastPtrRef = s2;
            s2 = s2->next;
        }
        lastPtrRef = &((*lastPtrRef)->next);
    }

    if (s1)
    {
        *lastPtrRef = s1;
    }
    else
    {
        *lastPtrRef = s2;
    }

    return mergedHead;
}

// 打印链表
void printList(Node *head)
{
    if (!head)
    {
        printf("NULL\n");
        return;
    }
    Node *current = head;
    while (current)
    {
        if (current->next)
        {
            printf("%d ", current->data);
        }
        else
        {
            printf("%d", current->data);
        }
        current = current->next;
    }
    printf("\n");
}

// 释放链表
void freeList(Node *head)
{
    Node *tmp;
    while (head)
    {
        tmp = head;
        head = head->next;
        free(tmp);
    }
}

int main()
{
    Node *s1 = NULL;
    Node *s2 = NULL;

    // 读取第一个序列
    int num;
    while (scanf("%d", &num) && num != -1)
    {
        s1 = appendNode(s1, num);
    }

    // 读取第二个序列
    while (scanf("%d", &num) && num != -1)
    {
        s2 = appendNode(s2, num);
    }

    // 合并两个链表
    Node *mergedList = merge(s1, s2);

    // 打印合并后的链表
    printList(mergedList);

    // 释放链表
    freeList(mergedList);

    return 0;
}
