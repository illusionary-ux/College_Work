#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *getodd(struct ListNode **L);
void printlist(struct ListNode *L)
{
    struct ListNode *p = L;
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    struct ListNode *L, *Odd;
    L = readlist();
    Odd = getodd(&L);
    printlist(Odd);
    printlist(L);

    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode *readlist()
{
    int tmp;
    scanf("%d", &tmp);
    struct ListNode *head, *tail;
    head = tail = NULL;
    while (tmp != -1)
    {
        struct ListNode *p;
        p = (struct ListNode *)malloc(sizeof(struct ListNode));
        p->data = tmp;
        p->next = NULL;
        if (head == NULL)
        {
            head = p;
        }
        if (tail != NULL)
        {
            tail->next = p;
        }
        tail = p;
        scanf("%d", &tmp);
    }
    return head;
}
struct ListNode *getodd(struct ListNode **L)
{
    struct ListNode *p1, *p2 = NULL, *head = NULL, *tail = NULL;
    p1 = *L;

    while (p1 != NULL)
    {
        if ((p1->data) % 2 != 0) // 当前节点是奇数
        {
            if (head == NULL)
            {
                head = p1; // 初始化新链表的头部
            }
            else
            {
                tail->next = p1; // 将节点添加到新链表的尾部
            }
            tail = p1;     // 更新新链表的尾节点
            p1 = p1->next; // 移动到下一个节点

            if (p2 != NULL)
            {
                p2->next = p1; // 从原链表中删除当前节点
            }
            else
            {
                *L = p1; // 更新原链表的头节点
            }
        }
        else
        {
            p2 = p1;       // p2跟踪p1，但总是落后一个节点
            p1 = p1->next; // 移动到下一个节点
        }
    }

    if (tail != NULL)
    {
        tail->next = NULL; // 确保新链表的最后一个节点指向NULL
    }

    return head; // 返回新链表的头节点
}