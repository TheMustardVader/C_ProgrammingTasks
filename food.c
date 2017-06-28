#include<stdio.h>
 
struct food_t{
        double calories;
        int meat;
};
 
int can_eat(struct food_t, int);
int want_to_eat(struct food_t[10],int, int);
 
int main(int argc, const char *argv[]){
 
    struct food_t eat;
    eat.calories = 300;
    eat.meat = 1;
    int vegetarian = 1;
 
    printf("May I eat this food?\n");
 
    if(can_eat(eat, vegetarian)){
            printf("Yes, you could.\n");
    }else{
            printf("No, you couldn't. You are vegetarian.\n");
    }
    ///////////////////////////////////////////////////////////////////
    struct food_t dish[10];
    dish[0].calories = 300;
    dish[0].meat = 1;
 
    dish[1].calories = 300;
    dish[1].meat = 0;
 
    dish[2].calories = 150;
    dish[2].meat = 0;
 
    int numOfDishes = want_to_eat(dish,140,1);
    printf("\nHow much dishes for me: %d\n", numOfDishes);
    ///////////////////////////////////////////////////////////////////
    return 0;
}
 
int want_to_eat(struct food_t food[10], int caloriesIwant, int vegetarian){
    int delicious = 0;
     for(int i = 0; i < 10; i++){
             if((food[i].calories <= caloriesIwant)&&(food[i].meat != vegetarian)){
                     delicious ++;
             }
     }
 
   return delicious;
}
 
int can_eat(struct food_t food, int vegetarian){
        if((vegetarian == 1)&&(food.meat == 0)){
                return 1;
        }else if(vegetarian == 0){
                return 1;
        }
    return 0;
}
