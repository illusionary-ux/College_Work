#include <stdio.h>
void fileRW(FILE *fin, FILE *fout);
int main()
{
    char fname[20];
    gets(fname);
    FILE *fpr = fopen(fname, "r");
    FILE *fpw = fopen("file2.txt", "w");
    fileRW(fpr, fpw);
    fclose(fpr);
    fclose(fpw);
    return 0;
}
/* 请在这里填写答案 */
/*void fileRW(FILE *fin, FILE *fout)
{
    int ch, cnt = 1;
    ch = fgetc(fin);
    if (ch!=EOF)
    {
        fprintf(fout, "%d:", cnt);
        fprintf(fout, "%c", ch);
    }


    while (ch!=EOF)
    {
        if (ch == ' '||ch == '\t')
        {
            ch = fgetc(fin);
            continue;
        }

        if (ch == '\n')
        {
            fprintf(fout, "\n");
            cnt++;
            fprintf(fout, "%d:", cnt);
        }
        fprintf(fout, "%c", ch);
        ch = fgetc(fin);
    }

}*/
void fileRW(FILE *fin, FILE *fout)
{
    int t = 1;
    char str1[1024], str2[1024];
    while (fgets(str1, sizeof(str1), fin))
    {
        int i, j = 0;
        for (i = 0; str1[i] != '\0'; i++)
        {
            if (str1[i] != '\t' && str1[i] != ' ')
            {
                str2[j++] = str1[i];
            }
        }
        str2[j] = '\0';
        fprintf(fout, "%d:%s", t++, str2);
    }
}
