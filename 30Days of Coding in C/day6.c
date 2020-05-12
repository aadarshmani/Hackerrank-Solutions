#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct str{
    char s[100000];
}; 
int main() {
    int T;
    struct str s1[10];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
    scanf("%s",s1[i].s);
    }
    for(int i=0;i<T;i++)
    {for(int j=0;j<strlen(s1[i].s);j++)
    {if(j%2==0)
        printf("%c",s1[i].s[j]);
    }
    printf(" ");
    for(int j=0;j<strlen(s1[i].s);j++)
    {if(j%2!=0)
        printf("%c",s1[i].s[j]);}
        printf("\n");
    }
    return 0;
}

