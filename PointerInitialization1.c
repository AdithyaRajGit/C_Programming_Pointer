#include<stdio.h>
void main(){
int a=10;
int *pt;
printf("Initial value: %d\n",a);
pt=&a;
*pt=20;
printf("Modified value: %d\n",a);
}
