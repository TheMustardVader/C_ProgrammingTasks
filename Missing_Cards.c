#include<stdio.h>
#include<string.h>

int main()
{
char cards[51];
char right[13];
int i,j;

for(i=0;i<51;i++){
 scanf("%c",&cards[i]);
}

for(i=0;i<13;i++){
int d = 0;
 for(j=0;j<51;j++){
  if(cards[i]==cards[j]){
   d++;
  }
 }
	if(d!=4)printf("\n%d",i);
}
return 0;
}
