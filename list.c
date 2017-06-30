#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node_t{
		int value;
		int node_t *next;
};

struct list_t{
		struct node_t *head;
};

struct list_t* list_init();

int main(int argc, const char *argv[]){
   struct list_t *l = list_init();	

	return 0;
}

struct list_t* list_init(){
  struct list_t *l = malloc(sizeof(struct list_t));
  l->head = NULL;
  return l;
}
