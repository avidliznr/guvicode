
#include <stdio.h>
#include<math.h>
int main()
{
    long long int n,k,p=1;
    scanf("%lld %lld",&n,&k);
    for(int i = 0;i<k;i++)
    {
        p = p*n;
    }
    printf("%lld",p);
}
