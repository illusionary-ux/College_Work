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
    struct ListNode *p, *head = NULL, *tail = NULL;
    scanf("%d", &tmp);
    while (tmp != -1)
    {
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
        if (p1->data % 2 == 1)
        {
            if (head == NULL)
            {
                head = p1;
            }
            else
            {
                tail->next = p1;
            }
            tail = p1;
            p1 = p1->next;
            if (p2 != NULL)
            {
                p2->next = p1;
            }
            else
            {
                *L = p1;
            }
        }
        else
        {
            p2 = p1;
            p1 = p1->next;
        }
    }
    if (tail != NULL)
    {
        tail->next = NULL; // 确保新链表的最后一个节点指向NULL
    }

    return head;
}