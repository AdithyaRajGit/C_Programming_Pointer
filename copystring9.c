#include<stdio.h>
#include<string.h>

void stringcopy(char *st1,char *st2){
for(int i=0; *st1!='\0';i++){
*st2=*st1;
st1++;
st2++;  }
*st2='\0';
}

int main(){
char st[100],cp[sizeof(st)];
printf("Enter the string: \n");
//while(getchar() !='\n');
fgets(st,sizeof(st),stdin);
st[strcspn(st,"\n")]='\0';

stringcopy(st,cp);

printf("Entered string: %s.\nCopied string: %s.\n",st,cp);
return 0;
}
