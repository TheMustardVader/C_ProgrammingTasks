#include <stdio.h>
#include <stdlib.h>


int main() {
    int size = 5;
    // scanf("%d", &size);
    
    printf("statically allocated: %p\n", (void*) &size); 
    int *arr;
    arr = malloc(sizeof(int) * size);
    
    printf("dynamically allocated: %p\n", (void*) arr);

    free(arr);
    
    return 0;
}



/////////////////////////////////////////////////////////////////
int number;
  scanf("%d", &number);

  getchar();
  char *arr = malloc(number * sizeof(char));
  for(int i = 0 ; i < number; i ++)
  printf("%d\n", arr[i]);

  printf("%d\n", number);

  fgets(arr,number + 1,stdin);


  for(int i = 0; i < 2*2*number; i++ )
  scanf("%c", &arr[i]);

 int size = 5;
 int count = 0;

 char *word = malloc(size * sizeof(char));

 char ch;
 while(scanf("%c",&ch[i]) != EOF){
  getchar();

  word[count++] = ch;
  if(count == size){
    size *=2;

    char *tmp = word;
    word = malloc(size*sizeof(char));

  if(word == NUll){ return 0; }

  for(int i = 0 ; i < count; i++){
    word[i] = tmp[i];
  }

    //free(tmp);...

   }
  }

  reverse_f(arr);
