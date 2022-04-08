#include <stdio.h>
void f(int *p);
int main()
{
    int i;
    int *p = &i;
    printf("%p\n", p);
    printf("%p\n", &i);
    int *q, r; // int *q int r int*不是一个类型
    int s = 33;
    f(&s);
    printf("%d", s);
    return 0;
}
void f(int *q)
{
    printf("%p\n", q);
    printf("指针:%d\n", q[0]);
    *q = 99;
}