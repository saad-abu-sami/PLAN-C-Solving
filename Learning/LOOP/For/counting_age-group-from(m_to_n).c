#include <stdio.h>
#define LIMIT 10
int main()
{
	int n=0,i,age;
	for(i =1;i<= LIMIT;i++)
	{
		printf("Enter the Age of Person No. %d: ",i);
		scanf("%d",&age);
		
		if(age >=50 && age <= 60)
      // if age greater than 50 and less than 60 then n increase 1+
			n++;
	}

	printf("No. of People is the Range of 50 to 60 is: %d \n",n);
	return 0;
}