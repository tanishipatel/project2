#include<stdio.h>

int main(){
    for(int  i=1;i<=5;i++)
    {
        for(int spaces=1;spaces<=5-i;spaces++)
    {
    printf(" ");
    }
    for(int num=6-i;num<=5;num++)
    {
        printf("%d",num);
    }
    for(int num=5-1;num>=6-i;num--)
    {
        if(i!=1)
        printf("%d",num);
    }
    printf("\n");
}




    return 0;
}