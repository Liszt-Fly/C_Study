#include <stdio.h>
void save(int *a, int *b);
int main()
{
    int a = 3;
    int b = 5;
    save(&a, &b);
    printf("a = %d, b =%d", a, b);
    return 0;
}

void save(int *a, int *b)
{
    *a += 1;
    *b += 1;
}