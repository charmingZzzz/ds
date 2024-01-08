/*
    栈：运算受限的线性表
*/
#include <stdio.h>
#define N 10
#define MAXSIZE 20
struct stack
{
    int arr[MAXSIZE];
    int top;
};

int main()
{
    struct stack s1;
    s1.top = -1;
    printf("%d", s1.top);
    return 0;
}
