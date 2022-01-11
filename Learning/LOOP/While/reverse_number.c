#include <stdio.h>

int main()
{
	int n;
	printf("Enter A Number: ");
	scanf("%d",&n);                //If we take number 123
	
	while(n > 0)                   //n untill greater than 0, the loop is rounding
	{
		printf("%d",n%10);          //123%10=3; 12%10=2; 1%10=1
		n /= 10;                    //123/10=12; 12/10=1;
	}
	printf("\n");
	return 0;
}
