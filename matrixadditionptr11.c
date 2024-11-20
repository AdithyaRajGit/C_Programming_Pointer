#include<stdio.h>
int main(){
int row,column;
printf("Enter the number of rows and column of matrix. \n");
scanf("%d %d",&row,&column);

int mat1[row][column], mat2[row][column], add[row][column];
int *m1,*m2,*madd;
printf("Enter First Matrix Elements: \n");
for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
                        scanf("%d",&mat1[i][j]);  }  }

printf("First Matrix: \n");
for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
                        printf("%d   ",mat1[i][j]);  }  printf("\n");  }

printf("Enter Second Matrix Elements: \n");
for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
                        scanf("%d",&mat2[i][j]);  }  }

printf("Second Matrix: \n");
for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
                        printf("%d   ",mat2[i][j]);  }  printf("\n");  }
m1= &mat1[0][0];
m2= &mat2[0][0];
madd= &add[0][0];
//for(int i=0;i<row*column;i++){  printf("element %d:%d\n",i,*m1); m1++;;  }
for(int i=0;i<row*column;i++){
 *madd=*m1+*m2;
 madd++;
 m1++;
 m2++;  }

for(int i=0;i<row*column;i++){  madd--;  m1--; m2--;  }

printf("Resultant matrix from addition of two matrixes: \n");
for(int i=0;i<row;i++){
  for(int j=0;j<column;j++){
	printf("%d ",*madd);
  madd++;
  }
printf("\n");
}
return 0;
}
