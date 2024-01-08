#include <stdio.h>
int main()
{
    int a;
    printf("please input a: ");
    scanf("%d", &a);    //输入一个int类型的值，然后执行&a,将值存入a的地址空间
    printf("a = %d", a);

    return 0;
}