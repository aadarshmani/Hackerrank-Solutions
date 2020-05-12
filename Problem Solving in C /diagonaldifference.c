#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[1000][1000],sumr=0,sumc=0,i,j,diff;
    scanf("%d",&n);
    for( i=0;i<n;i++)
    {
        for( j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    
    for(i=0;i<n;i++){
        sumr =sumr + a[i][i];
        }

    for(i=0;i<n;i++){
   
        sumc=sumc+ a[i][(n-1)-i];
    }
    diff=abs(sumr-sumc);
    printf("%d", diff);
    return 0;


}
