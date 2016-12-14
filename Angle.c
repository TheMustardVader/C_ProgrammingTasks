#include<stdio.h>
#include<string.h>

int main()
{
 int mm,hh,angleHour,angleMinute;

scanf("Imput the time -> hh:mm\n");
scanf("%d%d",&hh,&mm);

	if(hh < 12){
		angleHour = hh * 30 + mm / 2;
	}else{
		angleHour = (hh - 12) * 30 + mm / 2;
	}
          	angleMinute = mm * 6;
	

 if(360 - angleMinute < 360 - angleHour)
 {
   printf("min: angle hour\n");	
 } else {
   printf("min: angle min\n");
 }


 return 0;
}
