#include "stdio.h"
int main()
{
	int num;
	scanf("%d",num);
	if(num == 0 )
		printf("Zero");
	else
		num>0?printf("Positive"):printf("Negative");
	
	return 0;
}

