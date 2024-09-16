#include<stdio.h>
// variable declaration:
extern double a,b;
extern char c;
extern float f;
int main ()
{
    /*variable defination: */
double a, b;
char c;
float f;
/*actual initialization*/
a=10;
b=20;
c=a+b;
printf("value of c:%d\n",c);

f=70/30;
printf("value of f:%f\n",f);
return 0;
}