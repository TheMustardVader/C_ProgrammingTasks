#include<stdio.h>
#include<stdlib.h>

struct dynamic_arr_t{
 int* nums;
 int size;
};

struct dynamic_arr_t generate(int number);
void free_dynamic_arr(struct dynamic_arr_t*);

int main(){
    struct dynamic_arr_t result = generate(5);
    
    printf("%d\n", result.size);
    free_dynamic_arr(&result);
    
    return 0;
}

void free_dynamic_arr(struct dynamic_arr_t* dyn){
        free(dyn->nums);
        dyn->size = 0;
}

struct dynamic_arr_t generate(int number){
    struct dynamic_arr_t dyn;
    
    dyn.nums = malloc(number * sizeof(int)); 
    dyn.size = number;
    int i;
    for( i = 0; i < number; i++){
        dyn.nums[i] = i + 1;
    }
    
    return dyn;
}
