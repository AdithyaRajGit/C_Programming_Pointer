#include<stdio.h>
#include<string.h>
int string_length(char *s){
int l=0;
for(int i=0; *s!='\0'; i++){
//printf("%c",*s);
l++;
s++;  }
return l;
}

int main(){

int len;
char st[100];
printf("Enter the string: ");
fgets(st,100,stdin);
st[strcspn(st,"\n")]='\0';
printf("Entered string: %s\n",st);
len=string_length(st);
printf("Length of string is: %d.\n",len);
return 0;
}
