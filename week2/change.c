#include <stdio.h>
int main()
{ //!定义变量price，需要进行初始化，如果变量没有初始化,得到的数据是随机的结果,因为内存地址是随机的，不知道它指向的数据是哪个
    int price = 0;
    printf("请输入金额(元)\n");
    scanf("%d", &price);
    int change = 100 - price;
    printf("找您%d元。\n", change);
    return 0;
}