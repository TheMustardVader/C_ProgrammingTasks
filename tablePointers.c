#include <stdio.h>
#include<stdlib.h>

struct desk_t{
	int exSeat;
	int freeSeat;
		};

int can_sit(struct desk_t, int);
int accomodate(struct desk_t[10], int);

int main(){
    int people = 3;
	struct desk_t d;
	d.exSeat = 0;
	d.freeSeat = 3;
	
	int result = can_sit(d, people);
	if(result == 1){
			printf("Yes\n");
	}else{
			printf("No!\n");
	}
	//////////////////////////////////////

	struct desk_t desks[10];
	desks[0].exSeat = 2;
	desks[0].freeSeat = 4;
	
	desks[1].exSeat = 1;
	desks[1].freeSeat = 2;
	 
	desks[0].exSeat = 0;
	desks[0].freeSeat = 8;

	int index = accomodate( desks, people);
	printf("index: %d\n",index);	
		
return 0;		
}

int accomodate(struct desk_t desk[10], int people){
   for(int i =0 ; i < 10; i++){
	  if(desk[i].freeSeat >= people){
  		 return 1;
	   }
   }
   return 0;
}

int can_sit(struct desk_t desk, int people){
  if(desk.freeSeat >= people){
   return 1;
 }
return 0;
}
