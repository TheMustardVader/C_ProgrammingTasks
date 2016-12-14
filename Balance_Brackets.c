#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
 /* ()((()()())) ? */

 int ok,n,m;
 int index=0;

 char brackets[100];
 fgets(brackets,100,stdin);

for(n = 0; n < strlen(brackets)-1; n++)
{
 if(brackets[n] == '('){
  index++;
 }else{
  index--;
 }
 if(index<0){
  ok=0;
 break;
 }
}
 if(index==0){
  ok=1;
 }else{
  ok=0;
 }

if(ok){
 for(n = 0; n < strlen(brackets)-1; n++){
   if(brackets[n] == '('){
  	 printf(" %d,",n);
  	 index = 1;
      for(m = n+1; m <= strlen(brackets); m++){
  	 if(brackets[m]==')')
   		 index--;	 
  	 else
    		index++;
   	if(index==0){
   		 printf("%d\n",m);
   		 break;
   	}
     }
   }
 }
}else{
 printf("The brackets are not correct!\n");
}
 return 0;
}
