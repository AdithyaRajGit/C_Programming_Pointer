#include<stdio.h>
int main(){
int n;
printf("Number of elements in array is: ");
scanf("%d",&n);
int arr[n],rev[n];
int *pt,*re;
printf("Enter array elements:  \n");
for(int i=0;i<n;i++){  scanf("%d",&arr[i]);  }

pt=arr;
re=rev+n-1;
for(int i=0;i<n;i++){
*re = *pt;
pt++;
re--;
}

printf("Entered array:  \n");
for(int i=0;i<n;i++){  printf("%d  ",arr[i]);  }
printf("\n");

printf("Revered array:   \n");
for(int i=0;i<n;i++){  printf("%d  ",rev[i]);}
printf("\n");

return 0;
}
