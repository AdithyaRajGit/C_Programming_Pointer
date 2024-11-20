#include<stdio.h>
int main(){
int n, *pt, temp;
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

for(int i=0;i<n;i++){
pt=arr;
    for(int j=0;j<n-1;j++){
	if(*pt>*(pt+1)){
	  temp=*pt;
	  *pt=*(pt+1);
	  *(pt+1)=temp;
	}
    pt++;  }  }


printf("Sorted array: \n");
pt=arr;
for(int i=0;i<n;i++){
printf("%d  ",*pt);
pt++; }
printf("\n");

return 0;
}
