#include <stdio.h>

/* 要求main函数的形参名称必须使用标准的argc与argv */
/*********Found************/
int main(int argc , char *argv[])
{
	while (argc > 1)
	{
		/*********Found************/
		printf("%s\n", argv[argc - 1]);
		--argc;
	}
  
	return 0;
}
