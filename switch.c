/*#include<stdio.h>

int main()
{
    int ch;
    printf("enter number between 1-7");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("\nmonday");
        break;
        
        case 2:
        printf("\ntuesday");
        break;
        
        case 3:
        printf("\nwednesday");
        break;

        case 4:
        printf("\nthursday");
        break;
        
        case 5:
        printf("\nfriday");
        break;
        
        case 6:
        printf("\nsaturday");
        break;

        case 7:
        printf("\nsunday");
        break;

        default:
        printf("wrong choice");
        break;

    }

    return 0;
    
}*/



#include<stdio.h>
int main()

{
    int a,b,ch;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    printf("\nenter 1 for addition\n 2for subtraction \n 3for multiplication \n 4 for division");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
        printf("%d",a+b);
        

        case 2:
        printf("%d",a-b);
        


        case 3:
        printf("%d",a*b);
        break;

        case 4:
        printf("%d",a/b);
        break;

        default:
        printf("wrong choice");
        break;
    }

    return 0;
}