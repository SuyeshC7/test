#include<stdio.h>
int main(){
    int number;
    printf("Enter the day no:");
    printf("Hint: sunday=1:");
    scanf("%d",&number);
    if(number==1){
        printf("It is a sunday");
    }
    else if (number==2){
        printf("It is a monday");
    }
    else if (number==3){
        printf("It is a tuesday");
    }
    else if (number==4){
        printf("It is a wednesday");
    }
    else if (number==5){
        printf("It is a thrusday");
    }
    else if (number==6){
        printf("It is a friday");
    }
    else if (number==7){
        printf("It is a saturday");
    }    
    else 
    printf("It is not a day");
    }