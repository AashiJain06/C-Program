#include <stdio.h>
#include <conio.h>
/*int main()
{
    int a=10,*p,*q,b=5;
    p=&a;
    q=&b;
    char *ch;
    printf("sum of a and b is %d",*p+*q);
    printf("\naddress of pointer ch is %u ",&ch);
    printf("\n value of a is %d",*p);

    return 0;
}

#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],*p,i,sum=0;
    printf("enter array elements");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    p=&a[0];
    printf("\narray elements are");
    for(i=0;i<10;i++)
    {
        printf("%d\t",*(p+i));
        sum=sum+*(p+i);
    }
    printf("\n sum of array elements are %d",sum);
    return 0;
} */

/*#include<stdio.h>
int main()
{
   int a,b,c;
   int *p;
   b=10;
   p=(&a,&b,&c);
   printf("%d",*p);
   printf("\n%d",&a);
printf("\n %d",&b);
   printf("\n%d",&c);
   printf("\n%d",&p);
   printf("\n%d",*p);
   printf("\n%d",p);
   printf("\n%d",a);
   printf("\n%d",b);
   printf("\n%d",c);
      return 0;

}


#include<stdio.h>
int main()
{
    int a,b=10;
    int *p,*q,*t;
    int temp;
    a=8;
    p=&a;
    q=&b;
    t=&temp;
    *t=*p;
    *p=*q;
    *q=*t;
    printf("swap value of a is :%d",*p);
    printf("\nswap value of b is :%d",*q);
    return 0;

}*/


int main()
{
    char string1[100], string2[100], *str1, *str2;
    printf("enter first string");
    gets(string1);
    printf("\nenter second string");
    gets(string2);
    str1 = string1;
    str2 = string2;
    while (*str1 == *str2)
    {
        if (*str1 =='\0'||*str2=='\0')
            break;
            str1++;
             str2++;
}
if (*str1=='\0' && *str2=='\0')
{
    printf("\nboth strings are equal");
}
else
{
    printf("\nboth strings are not are not equal");
}
     return 0;

    }
