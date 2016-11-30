#include<stdio.h>
#include<string.h>

   //  const int max = 256;
   // int price[max];
   // int dyn[max][max];
  int price[256] = {2,3,4,1,5,8,4,2,3,5,9,7,3,4,3,1,4,6,3,4};
  int dyn[256][256];
  	

int answer(int , int , int);

int main(){
 int nbottle;
        do{
		scanf("%d",&nbottle);
	}while(nbottle < 0 || nbottle > 256);

   memset(dyn, -1 , sizeof(dyn));

int ans = answer(0,nbottle - 1, 1);

 printf("the max money: %d\n", ans);

return 0;
}

int answer(int left, int right, int year){
    
 if(left > right) return 0;

 if(dyn[left][right] != -1)
  return dyn[left][right];

 int winLeft = answer(left + 1, right, year + 1) + year * price[left];

 int winRight = answer(left, right - 1, year + 1) + year * price[right];

	if(winLeft > winRight){
		 return dyn[left][right] = winLeft;
 		}else{
		 return dyn[left][right] = winRight;
		}
}
