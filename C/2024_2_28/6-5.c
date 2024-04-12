#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int data;
    struct ListNode *next;
};

struct ListNode *createlist();

int main()
{
    struct ListNode *p, *head = NULL;

    head = createlist();
    for (p = head; p != NULL; p = p->next)
        printf("%d ", p->data);
    printf("\n");

    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode *createlist()
{
    int tmp;
    struct ListNode *p, *head = NULL;
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
        else
        {
            p->next = head;
            head = p;
        }
        scanf("%d", &tmp);
    }
    return head;
}