#include <stdio.h>
int main()

{
    int n, i, sum = 0,fact=1;
    printf("enter no. of terms");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        c=fact*i;
        printf("%d ", c);
    

        sum = sum + c;
    }

    printf("sum of given series=%d", sum);
    return 0;
}