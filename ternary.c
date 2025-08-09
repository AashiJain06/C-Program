#include<stdio.h>

int main()
/*{
    int a,b,max;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    max=(a>b)?a:b;
    printf("maximum number=%d",max);
    return 0;*/
{
    int a,b,c,max;
    printf("enter three number");
    scanf("%d%d%d",&a,&b,&c);
    max=(a>b&&a>c)?a:(b>a&&b>c)?b:c;
    printf("maximum number=%d",max);
    return 0;
}