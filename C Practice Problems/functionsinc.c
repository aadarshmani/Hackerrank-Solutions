#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{   int big;
    if(a>b){big=a;} else{big=b;}
    if(big<c){big=c;} else if(big<d){big=d;}
    return big;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

