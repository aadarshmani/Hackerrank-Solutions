#include<stdio.h>
int main()
{
 int a[2],b[2];
 int alice,bob,i,j,k=0;
 for(i=0;i<3;i++)
 {scanf("%d", &a[i]);}
 for(j=0;j<3;j++)
 {scanf("%d", &b[j]);}
 alice=0;bob=0;

 for(i=0;i<3;i++)
 {
  if(a[i]>b[i])
    {alice++;}
    else if(a[i]<b[i])
      {bob++;}
      else {  k=k+1 ; }
 }
  printf("%d %d",alice,bob);
  return 0;}
