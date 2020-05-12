#include<stdio.h>
int main()
{
    int A[1000],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&A[i]);
    }
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",A[i]);
    }
    return 0;
    
}

