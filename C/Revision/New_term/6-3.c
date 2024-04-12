#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

/* 建立单链表并返回单链表的头指针 */
struct Node *buildLinkedList(int *arr, int n);

/* 求单链表值最大的结点 */
struct Node *getMax(struct Node *head);

int main(int argc, char const *argv[])
{
    int *a, n, i;
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }

    struct Node *head = NULL;

    head = buildLinkedList(a, n);

    struct Node *pMax = getMax(head);
    if (pMax)
        printf("%d\n", pMax->data);
    else
        printf("-1\n");

    free(a);

    return 0;
}

/* 请在这里填写答案 */
/* 建立单链表并返回单链表的头指针 */
struct Node *buildLinkedList(int *arr, int n)
{
    struct Node *p, *head = NULL, *tail = NULL;
    int cnt = 0;
    while (cnt < n)
    {
        p = (struct Node *)malloc(sizeof(struct Node));
        p->data = *(arr++);
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
        cnt++;
    }
    return head;
}

/* 求单链表值最大的结点,返回指向最大值结点的指针。
 * 若单链表为空，则返回NULL。
 */
struct Node *getMax(struct Node *head)
{
    int max = 0;
    struct Node *p = head, *maxp = NULL;
    while (p)
    {
        if (p->data > max)
        {
            max = p->data;
            maxp = p;
        }
        p = p->next;
    }
    return maxp;
}