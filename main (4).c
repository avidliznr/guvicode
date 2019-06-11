#include<stdio.h>
int main()
{
    int n2,n1;
    scanf("%d %d",&n1,&n2);
    n1++;
    while(n1<n2){
        if(n1%2!=0){
            printf("%d ",n1);
        }
        n1++;
    }
    
}
