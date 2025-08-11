#include<stdio.h>

int main(){
    int n,i;
    printf("enter arrays size:");
    scanf("%d",&n);

    int a[n];
    printf("enter elements of array:");
    for(int i=0;i<n;i++){
        printf("\na[%d]= ",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]<0){
            printf("%d",a[i]);
        }
    }





    return 0;
}