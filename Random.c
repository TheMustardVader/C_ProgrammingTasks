#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
 int n,i;
 time_t t; 

 scanf("%d",&n); 

 /*Intializes random number generator */ 
 srand((unsigned) time(&t));

 /*Print n random numbers from 0 to 49 */
for( i = 0; i < n ; i++ )
{
	printf("%d\n", rand() % 50);
}

 return 0;
}
