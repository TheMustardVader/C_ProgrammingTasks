#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
 char string[100];
 char search[20];
 char replace[100];
 char snew[100];
 int i,j;
 
 	printf("Input your test: ");
	fgets(string,100,stdin);
	
	printf("Enter the search: ");
	fgets(search,20,stdin);

	printf("Emter the replace: ");
	fgets(replace,100,stdin);

 	int index = 0;

	for(i = 0; i <= strlen(string)-1; i++)
	 { 
    	   if(string[i] == search[0]){
	     int ok = 1;
		for(j = i; j < i+strlen(search)-1; j++){
			if(string[j] != search[j-i]){
				ok = 0;
				break;
			}
		}
		if(ok){
			for(j = i; j < i+strlen(replace)-1; j++){
			 snew[index] = replace[j-i];
		         index++;
		 	}
		  i = i + strlen(replace)-1;
                 }
               }else{
		 snew[index] = string[i];
		 index++;

	       }
		
	    }

		printf("%s",snew);
		
 return 0;
}
