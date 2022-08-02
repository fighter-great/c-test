/* #include"stdio.h"
void copy(char*dest,char*ch)
{
    int i=0;
    while (*dest++ = *ch++);
    
}
int main()
{
    char ch[]="helloworld";
    char dest[100];
    copy(dest,ch);
    printf("%s\n",dest);
    return 0;
} */
#include"stdio.h"
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int*p=arr;//指针的加减运算与指针类型有关
    p=&arr[3];
    printf("%d\n",*p);
    int step=p-arr;//内存地址差12
    printf("%d\n",p[-2]);
    printf("%d\n",step);//偏移量=sizeof（int）
}