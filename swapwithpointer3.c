#include<stdio.h>
#include <string.h>
void swap(char *x, char *y){
  int temp=*x;
  *x=*y;
  *y=temp;
  }

void stringRev(char *st, int front, int end){
  if(front>=end) return;
  swap(&st[front], &st[end]);
  stringRev(st, front+1, end-1);
}

int main(){
char st[100];
printf("Enter the string: ");
  fgets(st,100,stdin);
  st[strcspn(st,"\n")]='\0';
  printf("Entered string: %s\n",st);

stringRev(st,0,strlen(st)-1);
 printf("Swapped string: %s\n",st);
return 0;
}
