#include<stdio.h>
 
struct interval_t{
 int start;
 int end;
};
 
struct interval_array_t{
  struct interval_t array[10];
  int size;
};
 
struct interval_t max_intersection(struct interval_array_t*, int);
 
int main(){
  struct interval_array_t arInterval;
  arInterval.size = 0;
 
  while(scanf("%d%d", &arInterval.array[arInterval.size].start,
                         &arInterval.array[arInterval.size].end) != EOF){
   arInterval.size++;
  }
  struct interval_t selectedInterval = max_intersection(&arInterval, arInterval.size);
  printf("start: %d\nend: %d\n", selectedInterval.start, selectedInterval.end);
        return 0;
}
 
struct interval_t max_intersection(struct interval_array_t* inter, int size){
         int count, startLine, endLine, sLine, eLine;
         int maxCount = 0;
   for(int i = 0; i < inter->size; i++){
            count = 0;
            startLine = inter->array[i].start;
            endLine = inter->array[i].end;
 
            for(int j = 0; j < inter->size; j++){
                    if((inter->array[i].start < inter->array[j].start)&&(inter->array[i].start < inter->array[j].end)||
                        (inter->array[i].start > inter->array[j].start)&&(inter->array[i].end < inter->array[j].end)||
                        (inter->array[i].start > inter->array[j].start)&&(inter->array[i].end > inter->array[j].end)){
                            if(startLine > inter->array[j].start){
                                startLine = inter->array[j].start;
                            }
                            if(endLine > inter->array[j].end){
                                    endLine = inter->array[j].end;
                            }
                        count++;
                        }  
            }
            if(count >= maxCount){
                sLine = startLine;
                eLine = endLine;
                maxCount = count;
            }
   }
   struct interval_t intersectionInter;
   intersectionInter.start = sLine;
   intersectionInter.end = eLine;
 
   return intersectionInter;
}
