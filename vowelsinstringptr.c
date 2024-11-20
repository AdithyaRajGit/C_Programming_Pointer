#include<stdio.h>
#include<string.h>

int main(){
int n=0;
char st[100], *ptr;
printf("Enter the string: ");
fgets(st,100,stdin);
st[strcspn(st,"\n")]='\0';
ptr=st;
for(int i=0;i<=strlen(st);i++){
 if(*ptr=='a'||*ptr=='A'||*ptr=='e'||*ptr=='E'||*ptr=='i'||*ptr=='I'||*ptr=='o'||*ptr=='O'||*ptr=='u'||*ptr=='U')
   {  n++; }
ptr++; }
printf("Number of vowels: %d\n",n);
return 0;
}
