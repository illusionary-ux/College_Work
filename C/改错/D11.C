#include<stdio.h>

#define N 10

int main(void)
{
        /*********Found************/
        double jieguo = 0;
        int fm;

        for (fm = 1; fm <= N; fm++)
        {
                /*********Found************/
                jieguo += 1.0 / fm;
        }
        printf("%8.6lf\n", jieguo);

	return 0;
}
