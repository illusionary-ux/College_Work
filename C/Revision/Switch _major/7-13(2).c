#include <stdio.h>
int main(void)
{
int n0, arr[6][6], i, j, k, max, min, maxi, maxj, mini, minj, flag = 0;

scanf("%d", &n0);

for (i = 0; i < n0; i++)
{
for (j = 0; j < n0; j++)
{
scanf("%d", &arr[i][j]);
}
}
for (i = 0; i < n0; i++)
{
max = arr[i][0];
maxi = i;
maxj = 0;
for (j = 0; j < n0; j++)
{
if (arr[i][j] > max)
{
max = arr[i][j];
maxi = i;
maxj = j;
}
}
min = arr[0][maxj];
mini = 0;
minj = maxj;
for (k = 0; k < n0; k++)
{
if (arr[k][maxj] < min)
{
min = arr[k][maxj];
mini = k;
minj = maxj;
}
}
if (maxi == mini && maxj == minj)
{
printf("%d %d\n", maxi, maxj);
flag = 1;
break;
}
}
if (flag == 0)
{
printf("NONE");
}
return 0;
}
