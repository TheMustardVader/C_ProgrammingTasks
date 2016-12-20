#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void hangman(char[], char[]);

int main()
{
 char word[20] = {'g','l','a','d','i','a','t','o','r'};
 char guessed[20];
  hangman(word,guessed);

 return 0;
}
void hangman(char answer[], char guess[])
{
 int x = 0;
 char letter[50];

 while(x < 8)
 {

  fgets(letter,50,stdin);  

  if(letter[x] == answer[x])
  {

   guess[x] = letter[x];
   printf("keep going\n");

  }else{
   printf("Try again\n");
  } 
  ++x;
 }
}
