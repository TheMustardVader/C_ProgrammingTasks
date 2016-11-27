#include<stdio.h>
#include<string.h>

int main()
{
 char words[200];
 int i,j;
 fgets(words,200,stdin);

 for(i=0;words[i]!='\0'; i++){
 	for(j=0;j<26;j++){
 		if(words[i]=='a'+j){
			words[i]=('A'+j);
		}
	}
  }

 printf("\nUpper letters:\n\n%s",words);
 return 0;
}
