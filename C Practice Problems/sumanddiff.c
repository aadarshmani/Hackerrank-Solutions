#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{int num1,num2,sum,diff;float num1f,num2f,sumf,difff;
scanf("%d%d",&num1,&num2);
scanf("%f%f",&num1f,&num2f);
sum=num1+num2;
diff=num1-num2;
sumf=num1f+num2f;
difff=num1f-num2f;
printf("%d %d\n%.1f %.1f",sum,diff,sumf,difff);
   
    return 0;
}
