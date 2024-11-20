#include<stdio.h>
int main(){
int arr[]={1, 2, 3, 4, 5};
int n= sizeof(arr)/sizeof(int);
int *ptr;
ptr=arr;
for(int i=0;i<n;i++){
   printf("Element at index %d: %d\n",i,*ptr);
   ptr++;
   }
return 0;
}
