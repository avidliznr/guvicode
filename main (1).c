
#include <stdio.h>

int main()
{
    int n,k,sum=0,arr[1000];
    scanf("%d %d",&n,&k);
    for(int i = 0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i =0;i<k;i++)
        sum += arr[i];
    printf("%d",sum);
}
