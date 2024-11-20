#include<stdio.h>
int main(){
int a=15;
int *ptr;
ptr=&a;  // *ptr= a  a=15
int **ptrr;
ptrr=&ptr;  // **ptrr=ptr  ptr=&a  *ptr=a  a=15

printf("Original value of a: %d\n",a);
printf("Original value of ptr: %d	ie;ptr=&a;  *ptr;  *&a;  a\n",*ptr);
printf("Original value of *pttr: %d	ie;ptrr=&ptr;  **ptrr;  **&ptr; *ptr;  *(&a);  a\n\n",**ptrr);

**ptrr=30;

printf("Modified value of a: %d\n",a);
printf("Modified value of ptr: %d	ie;ptr=&a; *ptr;&a\n",*ptr);
printf("Modifiedo value of *pttr: %d	ie;ptrr=&ptr **ptrr;  **&ptr;  *ptr;  *(&a);  a\n\n",**ptrr);

return 0;
}
