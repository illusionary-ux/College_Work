#include<stdio.h>

int main(void)
{
        struct WKER
        {
                long ID;
                long int num;
                char name[20];
                char sex;
        /*********Found************/
        } worker2;

        worker2.ID = 1L;
        /*********Found************/
        scanf("%d %s %c", &worker2.num, worker2.name, &worker2.sex);
        /*********Found************/
        printf("worker's info: num=%d name=%s sex=%c\n",
                        worker2.num, worker2.name, worker2.sex);

	return 0;
}
