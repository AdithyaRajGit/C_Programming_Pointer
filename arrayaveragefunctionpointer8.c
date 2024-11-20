#include<stdio.h>

int arrayavg(int *arr,int m){
int sum=0,avg;
for(int i=0;i<m;i++){
sum += *arr;
arr++; }
avg=sum/m;
//printf("sum:%d  avg:%d\n",sum,avg);
return avg;
}

int main(){
int n,avg;
printf("Enter the size of arrray: ");
scanf("%d",&n);

int a[n];
printf("Enter the array elements: ");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);  }

avg=arrayavg(a,n);
printf("Average value of array: %d \n",avg);
return 0;
}
