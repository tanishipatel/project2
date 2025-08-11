#include<stdio.h>

int main(){
    int count=10;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)
        {
            count++;
        printf(" %d ",count);
        } printf("\n");
    }
    return 0;

}