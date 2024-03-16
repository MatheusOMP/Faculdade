#include <stdio.h>
#include <stdlib.h>
#define Limite 20
#include "header.h"
int main ()
{
    at1();
    at2();
    at3();
    printf("%d\n",at4(0));
    int x=10,y=15;
    int *a=&x,*b=&y;
    at5(a,b);
    printf("x e y sao x=%d  y=%d  agora",x,y);
}
