#include"stdio.h"
void swap(int* a,int* b)
{
    int  temp=*a;
    *a=*b;
    *b=temp;
    
}
int main()
{
    //地址传递，形参可以改变实参的值
    int a=10;
    int b=20;
    swap(&a,&b);
    printf("%d\n",a);
    printf("%d\n",b);
    return 0;
    
}