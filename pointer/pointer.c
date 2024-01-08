#include <stdio.h>
int main()
{
    int a = 5;  //在栈中开辟一个int类型大小的空间，a指向这片空间，这片空间中的值就是a的值
    printf("a = %d\n",a);

    printf("%d",&a);    //地址：6422044
    return 0;
}