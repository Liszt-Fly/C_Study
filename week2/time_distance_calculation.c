#include <stdio.h>

int main()
{
    int hour1, minute1;
    int hour2, minute2;

    printf("请输入第一个时间，第一位数为小时，第二位数为分钟\n");
    scanf("%d %d", &hour1, &minute1);

    printf("请输入第二个时间，第一位数为小时，第二位数为分钟\n");
    scanf("%d %d", &hour2, &minute2);

    int t1 = hour1 * 60 + minute1;
    int t2 = hour2 * 60 + minute2;
    int t = t1 - t2;
    printf("时间差为%d\n", t);
    return 0;
}