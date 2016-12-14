#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int guess(int);

int main()
{
 time_t t;

 srand((unsigned) time(&t));
 
 int r = rand() % 1000;


  printf("%d\n",guess(r));


 return 0;
}
int guess(int r)
{
  int left = 1, right = 1000;


  while (left <= right){
   int mid = (left + right) / 2;
   if(mid == r)
    return mid;
   if(mid > r)
    right = mid - 1;
   else
    left = mid + 1;
  }

}
