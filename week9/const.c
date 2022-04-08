#include <stdio.h>
void f(const int *x);
int main()
{
    int i;
    const int *p1 = &i; // const变量
    int const *p2 = &i; // const变量
    int *const p3 = &i; // const指针
    int m = 3;
    int q[5];
    q[-2];
    f(&m);
    return 0;
}

void f(const int *x)
{
    *x = *x + 1;
}