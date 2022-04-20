#include<stdio.h>
int main()
{
    char n;
    printf("Enter the operator(+,-,*,/):");
    scanf("%c",&n);
    switch (n)
    {
        case '+':
        {int a,b;
        printf("Enter the value of a and b : ");
        scanf("%d%d",&a,&b);
        int sum=a+b;
        printf("Sum : %d",sum);
        break;
        }
        case '-':
        {int a,b;
        printf("Enter the value of a and b : ");
        scanf("%d%d",&a,&b);
        int sub=a-b;
        printf("Sub : %d",sub);
        break;
        }
        case '*':
        {
            int a,b;
        printf("Enter the value of a and b : ");
        scanf("%d%d",&a,&b);
        int mult=a*b;
        printf("Mult : %d",mult);
        break;
        }
        case '/':
       {float a,b;
        printf("Enter the value of a and b : ");
        scanf("%f%f",&a,&b);
        float div=a/b;
        printf("Div : %d",div);
        break;
       }
        default:
        printf("ERROR ><");
     }
  return 0;
}
