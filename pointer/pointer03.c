#include <stdio.h>
int main()
{
    int a = 5;
    int *p;
    p = &a;
    // *p = a;
    // p = a;   //错误，不能把一个具体的数字赋给指针（类型不匹配）
    printf("p = %d\n", p);  //p = 6422036,p存放a的地址
    printf("*p = %d", *p);  //*p = 5
    

    return 0;
}