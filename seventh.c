#include<stdio.h>
// variable declaration:
extern int a,b;
extern int c;
extern float f;
int main ()
{
    /*variable defination: */
int a, b;
int c;
float f;
/*actual initialization*/
a=30;
b=40;
c=a+b;
printf("value of c:%d\n",c);

f=50/60;
printf("value of f:%f\n",f);
return 0;
}
