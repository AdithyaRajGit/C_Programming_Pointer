#include<stdio.h>
#include<string.h>
int main(){
int n;
char *pt, *ptrev;

printf("Enter the length of string: \n");
scanf("%d",&n);

char st[n+1],rev[n+1];
printf("Enter the string: ");
while(getchar() != '\n');
fgets(st,n+1,stdin);
st[strcspn(st,"\n")]='\0';

printf("Entered string: %s\n",st);
pt=st;
ptrev=rev;
ptrev=ptrev+strlen(st)-1;

for(int i=0;*pt!='\0';i++){
*ptrev=*pt;
pt++;
ptrev--;
}
rev[strlen(st)]='\0';

printf("Reversed string: %s\n",rev);
return 0;
}
