#include <stdio.h>
int main()
{
    int n, i, j = 0, k = 0;
    scanf("%d", &n);
    int a[n], b[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);
    while (j + k < n - 1)
    {
        if (a[j] >= b[k])
            k++;
        else
            j++;
    }
    printf("%d", a[j] > b[k] ? b[k] : a[j]);
    return 0;
}
