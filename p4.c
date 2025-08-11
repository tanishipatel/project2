#include<stdio.h>

int main(){
    for(int i=5;i>=1;i--)
    {
        for(int j=i;j>=1;j--){
            if(j%2==0){
                printf(" 1");
            } else{
                printf(" 0");
            }
        }
        printf(" \n");
    }
    return 0;
}