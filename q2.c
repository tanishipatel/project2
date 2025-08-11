#include<stdio.h>

int main(){
    int rows,cols,i,j;
    printf("enter array's row size:");
    scanf("%d",&rows);
    printf("enter array's column size:");
    scanf("%d",&cols);

    int a[rows][cols];
    printf("enter array's elements:");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){ 
            printf("a[%d][%d]",i,j); 
            scanf("%d",&a[i][j]);
         }
    }
    
    int max=a[0][0];
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++);{
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
    }
    printf("%d",max);
   
    return 0;
}