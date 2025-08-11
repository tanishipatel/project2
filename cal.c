#include<stdio.h>

float add(float a,float b)
{
    return a+b;
}
float sub(float a,float b)
{
    return a-b;
}
float product(float a,float b)
{
    return a*b;
}
float divide(float a,float b)
{
    return b!=0 ? a/b:0;
}
int modulo(int a,int b)
{
    return b!=0 ? a%b:0;
}

int main(){
    char choice;
    float n1,n2;
    
    while(1){
        printf("press 1 for +");
        printf("press 2 for -");
        printf("press 3 for *");
        printf("press 4 for /");
        printf("press 5 for modulus");
        printf("press 0 for exit");
        printf("enter your choice:");
        scanf("%d",&choice);
    }
    if(choice==0)
    {
        printf("exiting the prg");
    }
    printf("enter n1:");
    scanf("%d",&n1);
    printf("enter n2:");
    scanf("%d",&n2);
    
    switch(choice){
        case 1:
        printf("\n %f",add(n1,n2));
        break;
        case 2:
        printf("\n %f",sub(n1,n2));
        break;
        case 3:
        printf("\n %f",product(n1,n2));
        break;
        case 4:
        printf("\n %f",divide(n1,n2));
        break;
        case 5:
        printf("\n %d",modulo(n1,n2));
        break;
        default:
        printf("invalid choice");
    }

    return 0;
}