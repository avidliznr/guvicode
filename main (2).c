
#include <stdio.h>

int main()
{
    long long int n,k;
    scanf("%lld",&n);
    while(n>0){
        n/=10;
        k++;
    }
    printf("%d",k);
}
