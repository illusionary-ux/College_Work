#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *deletem(struct ListNode *L, int m);
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
    int m;
    struct ListNode *L = readlist();
    scanf("%d", &m);
    L = deletem(L, m);
    printlist(L);

    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode *readlist()
{
    int tmp;
    scanf("%d", &tmp);
    struct ListNode *p, *head = NULL, *tail = NULL;
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
struct ListNode *deletem(struct ListNode *L, int m)
{
    struct ListNode *p1, *p2 = NULL;
    p1 = L;
    while (p1 != NULL)
    {
        if (p1->data == m)
        {
            if (p2 == NULL)
            {
                L = p1->next;
                struct ListNode *tmp = p1;
                p1 = p1->next;
                free(tmp);
            }
            else
            {
                p2->next = p1->next;
                struct ListNode *tmp = p1;
                p1 = p1->next;
                free(tmp);
            }
        }
        else
        {
            p2 = p1;
            p1 = p1->next;
        }
    }
    return L;
}