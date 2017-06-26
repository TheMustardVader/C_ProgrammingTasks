#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct phonebook_entry_t{
 struct person_t *person;
 char phone[10];
};

struct person_t{
 char name[20];
 int year;
 char postCode;
};

int main(){

	int count = 0;
    int size = 5;

    struct phonebook_entry_t *ph = malloc(size * sizeof(struct phonebook_entry_t));
	char name[20];

	while(scanf("%s",name) != EOF){
			char phone[10];
			scanf("%s", phone);

			strncpy(ph[count].name, name, 20);
			strncpy(ph[count++].phone, phone, 10);
			if(count == size){
					size *= 2;
					ph = realloc(ph, size * sizeof(struct phonebook_entry_t));
			}

	}

	for(int i = 0; i < count; i++){
				printf("%s - %s\n", ph[i].name, ph[i].phone);
	}
		return 0;
}
