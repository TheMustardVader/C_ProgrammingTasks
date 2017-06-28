#include<stdio.h>
 
void max_seq_pointers(int*, int*, int*, int);
void max_seq(int*, int**, int**, int);
 
int main(){
         int *start;
         int startInt = 0;
         int *end;
         int endInt = 0;
       
       
        int arr[10] = {11,2,33,4,55,66,66,0,22,33};
        /*               /0/1/2/3/4/5/6/7/8/9/    
        int arr[10] = {1,2,3,44,55,67,66,0,29,38};
        */
        max_seq_pointers(arr,&startInt,&endInt, 10);
        max_seq(arr, &start, &end, 10);
                printf("2.\nstart: %d\n end: %d\n", *start, *end);
 
        return 0;
}
 
void max_seq(int*arr, int** start, int** end, int size){
 
        int maxLenght = 0;
        int count = 0;
        int startPoint = 1, endPoint = 1;
 
        for(int i = 0; i < size-1; i++){
                if(*(arr+i) <= *(arr+i+1)){
                        count++;
 
                            if(count > maxLenght){
                                    startPoint += maxLenght;
                                    endPoint = startPoint + count;
                                }
                    }else{
 
                    maxLenght = count;
                            count = 0;
                    }
         }
     
        *start = &startPoint;
        *end = &endPoint;      
 
}
 
void max_seq_pointers(int* arr, int* start, int* end, int size){
        int maxLenght = 0;
        int count = 0;
        *start = 1;
        *end = 1;
                           
        for(int i = 0; i < size-1; i++){
                    if(*(arr+i) <= *(arr+i+1)){
                            count++;
 
                            if(count > maxLenght){
                                    *start += maxLenght;
                                    *end = *start + count;
                                }
                    }else{
                            maxLenght = count;
                            count = 0;
                    }
       
    }
        printf("1.\nstart: %d\n end: %d\nmaxLenght: %d\n", *start, *end,(1 + *end - *start));
}
