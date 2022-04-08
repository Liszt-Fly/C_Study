#include <stdio.h>

int main()
{ // sum 相邻变量
    int a = 3;
    int b = 2;
    int c = 1;
    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
    // size of int*
    int d = 4;
    printf("%lu\n", sizeof(&d));

    int m[10];
    printf("%p\n", &m);
    printf("%p\n", m);
    printf("%p\n", &m[0]);
    printf("%p\n", &m[1]);
    return 0;
}