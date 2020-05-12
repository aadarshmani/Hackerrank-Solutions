#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int a[n+1],b[n+1],maxa=0,maxn=0,maxx=0;
  for(int i=1;i<n;i++)
  { for(int j=i+1;j<(n+1);j++)

  {
      if(k >(i&j) && maxa <(i&j))
      {
          maxa=i&j;
      }
      if(k>(i|j) && maxn<(i|j))
      {
          maxn=i|j;
      }
      if(k>(i^j) && maxx<(i^j))
      {
          maxx=i^j;
      }}

  }
  printf("%d\n%d\n%d",maxa,maxn,maxx);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

