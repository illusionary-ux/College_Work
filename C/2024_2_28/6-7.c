#include <stdio.h>
#include <stdlib.h>

struct stud_node
{
    int num;
    char name[20];
    int score;
    struct stud_node *next;
};

struct stud_node *createlist();
struct stud_node *deletelist(struct stud_node *head, int min_score);

int main()
{
    int min_score;
    struct stud_node *p, *head = NULL;

    head = createlist();
    scanf("%d", &min_score);
    head = deletelist(head, min_score);
    for (p = head; p != NULL; p = p->next)
        printf("%d %s %d\n", p->num, p->name, p->score);

    return 0;
}

/* 你的代码将被嵌在这里 */
struct stud_node *createlist()
{
    int tmp;
    scanf("%d", &tmp);
    struct stud_node *head, *tail, *p;
    head = tail = NULL;
    while (tmp != 0)
    {
        p = (struct stud_node *)malloc(sizeof(struct stud_node));
        scanf("%s %d", p->name, &p->score);
        p->num = tmp;
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
struct stud_node *deletelist(struct stud_node *head, int min_score)
{
    struct stud_node *p1, *p2 = NULL;
    p1 = head;
    while (p1 != NULL)
    {
        if ((p1->score) < min_score)
        {
            if (p2 == NULL)
            {
                head = p1->next;
                struct stud_node *tmp = p1;
                p1 = p1->next;
                free(tmp);
            }
            else
            {
                p2->next = p1->next;
                struct stud_node *tmp = p1;
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
    return head;
}