#include<stdio.h>
int main(){
char character;    
    printf("Enter a character:");
    scanf("%c",&character);
    if(character<=90 && character>=65|| character<=122 && character>=97)
    printf("It is a alphabet");
    else 
    printf("It is not a alphabet");
}