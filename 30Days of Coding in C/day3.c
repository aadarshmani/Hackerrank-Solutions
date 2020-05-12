#include<stdio.h>
int main()

{
    int n;
    scanf("%d",&n);
    if((n%2)!=0)
    	{printf("Weird");}
    else if(n>5 && n<21)
      	{printf("Weird");}
    else
      	{printf("Not Weird");}
return 0;
}
