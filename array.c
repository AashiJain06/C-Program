#include <stdio.h>
#include <conio.h>
int main()
{

/*int a[10], i;
for (i = 0; i < 10; i++)
{
    printf("\nenter array elements");
    scanf("%d", &a[i]);
}
printf("array elements are");
for (i = 0; i < 10; i++)
{
    printf("\n%d", a[i]);
}
return 0;
}*/


// program to find max in the array list//

int a[10],i,j,l;
for(i=0;i<10;i++)
{
    printf("enter array elements");
    scanf("%d",&a[i]);

}
for(i=0;i<9;i++)
for(j=i+1;j<10;j++)
{
    if(a[i]=a[j])
    {
        l=a[i];
        a[i]=a[j];
        a[j]=l;

    }
}
printf("\narray in ascending order are");
for(i=0;i<10;i++)
{
printf("\n%d",a[i]);
}
return 0;

}