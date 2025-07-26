#include<stdio.h>

int main(){
    float score;
    char grade;
    printf("enter the score:");
    scanf("%f",&score);
    grade=(score>=90)?'A':(score>=80)?'B':(score>=70)?'C':score>=60?'D':'F';
    printf("\ngrade: %c",grade);
    switch(grade){
        case 'A':
            printf("\nexcellent");
            break;
        case 'B':
            printf("\nwell done");
            break;
        case 'C':
            printf("\ngood job");
            break;
        case 'D':
            printf("\nyou passed,but could do better");
            break;
        case 'F':
            printf("\nsorry,you failed");
            break;
        default:
            printf("\nunknown grade");
            break;
    }
    if(grade=='A' || grade=='B' || grade=='C' || grade=='D'){
        printf("\neligible for next level");
    }else{
        printf("\nnot eligible");
    }


    

    return 0;

}