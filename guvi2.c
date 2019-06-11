#include<stdio.h>
int main()
{

int num;
scanf("%d",&num);
if(num>0){
	if(! num%2==0)
		printf("Odd");
	else
		printf("Even");
}
else
	printf("invalid");
return 0 ;
}
