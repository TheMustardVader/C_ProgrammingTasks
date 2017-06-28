#include<stdio.h>
 
struct food_t{
  double calories;
  int meat;
};
 
struct menu_t{
 struct food_t dish[10];
 int size;
};
 
int add_meal(struct menu_t*, struct food_t);
struct food_t remove_from_menu(struct menu_t*, int );
 
int main(int argc, const char *argv[]){
     struct menu_t menu;
     menu.size = 10;
 
     menu.dish[0].calories = 300;
     menu.dish[0].meat = 1;
 
     menu.dish[1].calories = 200;
     menu.dish[1].meat = 0;
 
     menu.dish[2].calories = 150;
     menu.dish[2].meat = 1;
     
 
     //////////////////////////////
     struct food_t meal;
     meal.calories = 200;
     meal.meat = 0;
     //////////////////////////////
 
     int succeed = add_meal(&menu,meal);
     printf("Did I add a new meal?\n");
     if(succeed){
             printf("You added new meal.\n");
     }else{
             printf("You didn't.\n");
     }
     //////////////////////////////
       int index = 2;
        remove_from_menu(&menu, index);
        if(index > menu.size){
                printf("\nfood calories: %f, meat: %d\n",m->dish[0].calories, m->dish[0].meat );
        }
 
    return 0;
}
 
 
struct food_t remove_from_menu(struct menu_t* menu, int index){
        menu->size = menu->size - 1;
 
   for(int i = index; i < menu->size; i++){
            menu->dish[i].calories = menu->dish[i+1].calories;
            menu->dish[i].meat = menu->dish[i+1].meat;
   }
 
 
}
 
int add_meal(struct menu_t *menu, struct food_t meal){
    for(int i = 0; i < menu->size ; i++){
        if((menu->dish[i].calories == 0 )&&(menu->dish[i].meat == 0)){
                menu->dish[i].calories = meal.calories;
                menu->dish[i].meat = meal.meat;
        }           return 1;
    }
 
   
 return 0;

    }
