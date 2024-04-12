#include<stdio.h>

int main(void)
{
	int money, number, i1, i2, i3;

	printf("Input the money: ");
	scanf("%d", &money);
	printf("\nInput the number: ");
	scanf("%d", &number);
	printf("\n  cock   hen chick\n");
	for (i1 = 0; i1 <= money / 5; i1++)
	{
		for (i2 = 0; i2 <= money / 3; i2++)
		{
			for (i3 = 0; i3 <= money * 3; i3 += 3)
			{
				if (i1 + i2 + i3 == number && i1 * 5 + i2 * 3 + i3 / 3 == money)
				{
					printf("%6d%6d%6d\n", i1, i2, i3);
				}
			}
		}
	}
	return 0;
}