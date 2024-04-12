#include <stdio.h>

int main(void)
{
	int bian, tj, bmj; //变量bian用来存放正方体的边长，变量tj用来存放正方体的体积，变量bmj用来存放正方体的表面积

	printf("Input a side of cube: ");
	scanf("%d", &bian);	//从键盘输入正方体的边长并赋给变量bian
	tj = bian * bian * bian; //计算正方体的体积
	bmj = 6 * bian * bian; //计算正方体的表面积

	printf("\nThe volume of cube is %d, the surface area of cube is %d.\n", tj, bmj); //在屏幕上输出计算结果
	
	return 0;
}