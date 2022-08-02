#include"stdio.h"
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int*p;
    p=arr;
    printf("%d\n",*(arr+2));
    return 0;
}