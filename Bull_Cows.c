#include<stdio.h>
#include<string.h>

int main(){

 int num,cows,a,i,j,bulls;
 int arr[4]={9,3,0,5};

	while(bulls!=4){
		scanf("%d",&num);
	 	j=3;
		cows=0;
		bulls=0;
	 do{
	    a=num%10;
	  for(i=3;i>=0;i--){
	       
	 	if(a==arr[i]){
			cows++;

	    	if(j==i){
			bulls++;
			cows--;
		   }
          	 }
		}
		j--;		
		 
         	
	num=num/10;
	}while(num);

	   printf("%dCows%dBulls\n",cows,bulls);
 	  } 
	
return 0;
}
