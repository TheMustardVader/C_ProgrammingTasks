#include<stdio.h>
#include<stdlib.h>
 
struct dynamic_arr_t{
 int* arr;
 int size;
};
 
struct dynamic_arr_t generate(int num);
void free_dynamic_arr(struct dynamic_arr_t*);
struct dynamic_arr_t filter_even(struct dynamic_arr_t);
struct dynamic_arr_t filter_odds(struct dynamic_arr_t);
struct dynamic_arr_t map_sqr(struct dynamic_arr_t);
struct dynamic_arr_t sqr_of_odds(struct dynamic_arr_t);
int reduce_sum(struct dynamic_arr_t arr);
int SumOfgeneratedArray(struct dynamic_arr_t);
 
int main(){
         ////////////////////////////////////////////////////////////////////////////////
         struct dynamic_arr_t dynamic = generate(5);
         printf("All elements from array:\n");
         for(int i = 0; i < dynamic.size; i++){
                    printf("%d ", dynamic.arr[i]);
         }
         printf("\n");
         ////////////////////////////////////////////////////////////////////////////////  
         struct dynamic_arr_t filter = filter_even(dynamic);
         printf("All even elements:\n");
         for(int i = 0; i < filter.size; i++){
                    printf("%d ", filter.arr[i]);
         }
         printf("\n");
         ////////////////////////////////////////////////////////////////////////////////
         struct dynamic_arr_t mathSqr = map_sqr(dynamic);
         printf("All elements of their square:\n");
         for(int i = 0; i < mathSqr.size; i++){
                    printf("%d ", mathSqr.arr[i]);
         }
         printf("\n");
         ////////////////////////////////////////////////////////////////////////////////
         struct dynamic_arr_t SqrOdds = sqr_of_odds(dynamic);
         printf("All ODDS elements and their square:\n");
         for(int i = 0; i < SqrOdds.size; i++){
                    printf("%d ", SqrOdds.arr[i]);
         }
         printf("\n");
         ////////////////////////////////////////////////////////////////////////////////
         int sum = reduce_sum(dynamic);
         printf("Sum of array:\n");
         printf("%d\n", sum);
         ////////////////////////////////////////////////////////////////////////////////    
         struct dynamic_arr_t dynGen = generate(11);
         int sumOfGEN = SumOfgeneratedArray(dynGen);
         printf("Sum of generated array:\n");
         printf("%d\n",sumOfGEN);
         ////////////////////////////////////////////////////////////////////////////////
            free_dynamic_arr(&dynGen);
            free_dynamic_arr(&SqrOdds);
            free_dynamic_arr(&mathSqr);
            free_dynamic_arr(&filter);
            free_dynamic_arr(&dynamic);
       
        return 0;
}
 
int SumOfgeneratedArray(struct dynamic_arr_t gen){
       // Generated numbers 1 to 11
        struct dynamic_arr_t genFilter_even = filter_even(gen);
        int sum = reduce_sum(genFilter_even);
 
        return sum;
}      
 
int reduce_sum(struct dynamic_arr_t arr){
        int sum = 0;
        for(int i = 0; i < arr.size ; i++){
                    sum += arr.arr[i];
        }
return sum;
}
 
struct dynamic_arr_t sqr_of_odds(struct dynamic_arr_t dyn){
   struct dynamic_arr_t numbers = generate(dyn.size);
   numbers.size = dyn.size;
   struct dynamic_arr_t odds = filter_even(numbers);
   struct dynamic_arr_t SqrOfOdds = map_sqr(odds);
 
   return SqrOfOdds;
}
 
struct dynamic_arr_t map_sqr(struct dynamic_arr_t dyn){
   struct dynamic_arr_t mSqr = generate(dyn.size);
   mSqr.size = dyn.size;
 
   for(int i = 0; i < dyn.size;i++){
            mSqr.arr[i] = dyn.arr[i]*dyn.arr[i];
   }
 
 return mSqr;
}
 
struct dynamic_arr_t filter_even(struct dynamic_arr_t dyn){
 
  struct dynamic_arr_t resultFilter = generate(dyn.size);
  resultFilter.size = 0;
 
  for(int i = 0; i < dyn.size; i++){
            if(dyn.arr[i] % 2 != 0){
                resultFilter.arr[resultFilter.size] = dyn.arr[i];
                resultFilter.size ++;
            }
   }
  return resultFilter;
}
 
void free_dynamic_arr(struct dynamic_arr_t *freeLoaded){
  free(freeLoaded->arr);
  freeLoaded->arr = NULL;
  freeLoaded->size = 0;
}
 
struct dynamic_arr_t generate(int num){
        struct dynamic_arr_t DynArray;
 
        DynArray.arr = malloc(num * sizeof(int));
        DynArray.size = num;
 
        if(DynArray.arr == NULL){
                printf("Error\n");
        }
        for(int i = 0; i < num; i++){
                DynArray.arr[i] = i + 1;
        }
 return DynArray;
}
