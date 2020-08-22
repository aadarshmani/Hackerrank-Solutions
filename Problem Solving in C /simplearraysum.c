#include<stdio.h>
int main()
{
    int sum=0, a[1000], num;
    scanf("%d",&num);
    for(int i=0;i<num; i++ )
    {scanf("%d",&a[i]);
    sum = sum+ a[i]; }
printf("%d", sum);
return 0;
}
    




