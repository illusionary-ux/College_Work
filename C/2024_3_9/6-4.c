#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int CountWord(FILE *f);

int main()
{
    FILE *f;
    int n;
    f = fopen("Story.txt", "r");
    if (!f)
    {
        puts("文件无法打开!");
        exit(1);
    }

    n = CountWord(f);

    if (fclose(f))
    {
        puts("文件无法关闭!");
        exit(1);
    }

    printf("单词数: %d\n", n);
    return 0;
}

/* 你提交的代码将被嵌在这里 */
// 核心原理是一个一个地读取文件中的字符，当文件指针读取到一个新的字符时，进行检测
// 若检测到上一个字符为字母而新读到的字符不是，说明检测到了一个单词
// 这个方法可以避免当指针指到了文件尾的EOF多余的而计数
// 但有一种特殊情况，就是文件仅有一个字符或什么都没有
// 所以要将两个用来检测的变量ch1与ch2进行合理的初始化
int CountWord(FILE *f)
{
    char ch1, ch2 = '0';                           // ch2初始化为一个不是字母的字符，这一点很重要
    int judge1 = 0, judge2 = 0, flag = 1, num = 0; // flag默认为1
    while (!feof(f))                               // 一直读取到文件尾
    {
        ch1 = fgetc(f);                                                 // 这里有输入，所以定义ch1时可以不用初始化
        judge1 = (ch1 >= 65 && ch1 <= 90) || (ch1 >= 97 && ch1 <= 122); // 判断是否为字母
        judge2 = (ch2 >= 65 && ch2 <= 90) || (ch2 >= 97 && ch2 <= 122); // 判断是否为字母
        if (judge1 == 0 && judge2 == 1)                                 // judge1的值表示新读到的字符是否为字母
                                                                        // judge2的值表示上一个字符是否为字母
                                                                        // 检测到了单词，则flag变为0
            flag = 0;
        else
            flag = 1; // 否则flag一直处于1的状态
        if (flag == 0)
            num++; // flag为0则计一个数
        ch2 = ch1; // 现在新读到的字符变成老字符，准备等待下一个新字符输入
    }
    return num;
}