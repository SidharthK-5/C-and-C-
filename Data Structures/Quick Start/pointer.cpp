/*
Question: Use pointers update the value of two variables a and b
            a' = a+b
            b' = |a-b|
*/

#include<stdio.h>
#include<math.h>
void update(int *a,int *b) {
    int c = *a + *b;
    int d = abs(*a - *b);
    *a = c;
    *b = d;
}

int main() {
    int a, b;
    // Store the values of a and b in pa and pb respectively
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}