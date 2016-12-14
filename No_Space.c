#include<stdio.h>
#include<string.h>

int main()
{
 int i,index = 0;
 char str[200];
 char nospace[200];

 fgets(str,200,stdin);

for(i = 0; i <= strlen(str); i++)
{
 if(str[i] != ' '){
  nospace[index]=str[i];
  index++;
 }
}
 printf("%s\n",nospace);
 return 0;
}
