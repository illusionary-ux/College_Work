#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stud_node
{
    int num;
    char name[20];
    int score;
    struct stud_node *next;
};
struct stud_node *head, *tail;

void input();

int main()
{
    struct stud_node *p;

    head = tail = NULL;
    input();
    for (p = head; p != NULL; p = p->next)
        printf("%d %s %d\n", p->num, p->name, p->score);

    return 0;
}

/* 你的代码将被嵌在这里 */
void input()
{
    int num;
    struct stud_node *p;
    scanf("%d", &num);
    while (num != 0)
    {
        p = (struct stud_node *)malloc(sizeof(struct stud_node));
        p->num = num;
        scanf("%s %d", p->name, &p->score);
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
        scanf("%d", &num);
    }
}