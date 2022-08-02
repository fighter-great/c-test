#include"stdio.h"
int main()
{
    int a[]={1,2,3};
    int b[]={4,5,6};
    int c[]={7,8,9};
    //指针数组是一个特殊的二维数组模型
    int*arr[3]={a,b,c};//指针数组里面元素存储的是指针

    printf("%d\n",arr[0][1]);//arr[0][2]=2
    printf("%p\n",arr[0]);//=1
    printf("%p\n",a);//=1
    printf("%p\n",&a[0]);//=1
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
        {
            printf("%d",arr[i][j]);
            printf("%d",*(arr[i]+j));
            printf("%d",*(*(arr+i)+j));//指针数组对应二级指针
            //int ** p=arr;
        }
        
    }
    
    return 0;
}