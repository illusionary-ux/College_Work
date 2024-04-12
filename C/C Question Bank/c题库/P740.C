/* 
程序的功能：
	公鸡每只5元，母鸡每只3元，小鸡每3只1元，用M元钱买N只鸡，问公鸡、母鸡、小鸡各几只。
*/
#include <stdio.h>

int main(void)
{
	int cock, hen, chick; //变量cock中存放公鸡的数量，变量hen中存放母鸡的数量，变量chick中存放小鸡的数量
	int m, n;

	printf("Input the money: ");
	scanf("%d", &m);  //输入m元钱
	printf("Input the number: ");
	scanf("%d", &n);  //输入n只鸡
	
	printf("  cock   hen chick\n");
	/* 使用穷举法找出满足要求的公鸡、母鸡、小鸡的数量 */
	for (cock = 0; cock <= n; cock++)
	{
		for (hen = 0; hen <= n; hen++)
		{
			chick = n - cock - hen; //小鸡的数量等于鸡的总数n减去公鸡和母鸡的数量
			
			/* 根据题意，购买鸡的钱是m元，并且小鸡的数量肯定是3的倍数，
				因此cock、hen、chick必须同时满足表达式(5 * cock + 3 * hen + chick/3 == m)和
				(chick % 3 == 0)
			*/
			if ((5 * cock + 3 * hen + chick/3 == m) && (chick % 3 == 0) && (chick >= 0))
			{
				printf("%6d%6d%6d\n", cock, hen, chick); //输出公鸡、母鸡和小鸡的数量
			}
		}
	}

	return 0;
}