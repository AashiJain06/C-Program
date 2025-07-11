#include<stdio.h>

int main()
{
    int age;
    printf("enter your age");
    scanf("%d",&age);
    if(age>18)
    printf("eligible for voting");
    else
    printf("not eligible for voting");
    
/*{
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("maximum number=%d",a);
    else
    printf("maximum number=%d",b);
    return 0;
}*/



  int a,b,c;
    printf("enter three number");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    printf("maximum number=%d",a);
    else if(b>a&&b>c)
    printf("maximum number=%d",b);
    else
    printf("maximum number=%d",c);
    
}


