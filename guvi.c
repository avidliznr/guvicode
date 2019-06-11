#include "stdio.h"
int main()
{
	int n;
	scanf("%d",n);
	if(n == 0 )
		printf("Zero");
	else
		n>0?printf("Positive"):printf("Negative");
	
	return 0;
}

