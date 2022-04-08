#include <stdio.h>

int main()
{
    char ac[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    char *p = ac;
    char *m = &ac[4];
    char *m1 = &ac[5];
    printf("m1-m=%ld\n", m1 - m);
    printf("p=%p\n", p);       // p=0x16b927018
    printf("p+1=%p\n", p + 1); // p+1=0x16b927019
    printf("*(p+1)=%d\n", *(p + 1));
    int ad[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *q = ad;
    printf("q=%p\n", q);       // q=0x16b926ff0
    printf("q+1=%p\n", q + 1); // q+1=0x16b926ff4
    printf("*q++=%d\n", *q++);
    printf("q=%p\n", q);
    return 0;
}