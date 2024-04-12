/* 程序的功能：
	从键盘读入一行字符(约定：字符数≤127字节)，将其中的数字字符以及这些数字字符的数量在屏幕上显示，
注意：要求先显示这些数字字符的数量。
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char arr1[128], arr2[128];
	int num = 0;
	int i;
	
	/* 输入一行字符存放到数组arr1中 */
	printf("Please input string:");
	gets(arr1);
	
	for (i = 0; arr1[i] != '\0'; i++)
	{
		if (arr1[i] >= '0' && arr1[i] <= '9') // 判断arr[i]是否是数字字符
		{
			arr2[num] = arr1[i];  //将arr[i]中的数字字符存放到数组arr2中
			num++;
		}
	}
	printf("shu zu ge shu wei:%d\n", num); //输出数字字符的数量
	
	printf("shu zi wei:");
	
	/* 输出数组arr2中的数字字符 */
	for (i = 0; i < num; i++)
	{
		printf("%c", arr2[i]);
	}
	printf("\n");
	return 0;
}