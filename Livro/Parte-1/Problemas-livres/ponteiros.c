#include<stdio.h>

int main(void) {

    int a, b, c;
    int *p, *q, *r;

    a = 1;
    b = 2;
    c = 3;

    p = &a;
    q = &b;
    r = &c;

    printf("%d, %d, %d, %d, %d, %d\n", a, b, c, p, q, r);

    b = a;

    printf("%d, %d, %d, %d, %d, %d\n", a, b, c, p, q, r);

    b = *r;

    printf("%d, %d, %d, %d, %d, %d\n", a, b, c, p, q, r);
}
