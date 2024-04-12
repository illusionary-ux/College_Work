#include <stdio.h>
#include <stdlib.h>

void BatchAdd(FILE *in, FILE *out);

int main()
{
    FILE *in, *out;

    in = fopen("Addition.txt", "r");
    out = fopen("Sum.txt", "w");

    if (in && out)
    {
        BatchAdd(in, out);
    }
    else
    {
        puts("文件无法打开!");
    }

    if (in)
    {
        fclose(in);
    }
    if (out)
    {
        fclose(out);
        puts("文件保存成功!");
    }

    return 0;
}

/* 你提交的代码将被嵌在这里 */
void BatchAdd(FILE *in, FILE *out)
{
    double x1, x2;
    while ((fscanf(in, "%lf %lf\n", &x1, &x2)) == 2)
    {
        fprintf(out, "%.2lf\n", x1 + x2);
    }
}