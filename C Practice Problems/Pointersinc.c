#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    int v1=*a,v2=*b;
    *a = *a + *b;
    *b = abs(v2 - v1);

    // Complete this function    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
