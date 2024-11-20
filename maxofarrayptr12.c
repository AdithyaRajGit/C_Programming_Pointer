#include<stdio.h>
int main(){
int n, max=0, *pt;
printf("Enter the number of elements: ");
scanf("%d",&n);
int arr[n];
pt=arr;
printf("Enter array elements: \n");
for(int i=0;i<n;i++){
scanf("%d",pt);
pt++;
}

printf("Entered array: \n");
pt=arr;
for(int i=0;i<n;i++){
printf("%d  ",*pt);
pt++; }
printf("\n");

pt=arr;
for(int i=0;i<n;i++){
  if(max<*pt){   max=*pt;  pt ++;   }
 }

printf("%d is alrgest element of array.\n",max);
return 0;
}
