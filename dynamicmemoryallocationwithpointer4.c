#include<stdio.h>
#include<stdlib.h>

int main(){
int n;
printf("Enter the number of elemets: ");
scanf("%d",&n);

int *arr=(int*)malloc(n*sizeof(int));

if(arr==NULL)printf("Allocation failed.\n");

else{
 printf("Enter the elements: \n");

 for(int i=0;i<n;i++){  scanf("%d",arr); arr++;  }

 for(int i=0;i<n;i++){ arr--;}

 for(int i=0;i<n;i++){  printf("%d  ",*arr);   arr++; }
	}
printf("\n");

for(int i=0;i<n;i++){ arr--;}

free(arr);

return 0;
}
