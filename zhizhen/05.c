#include"stdio.h"
int main()
{
    int a[]={1,2,3};
    int b[]={4,5,6};
    int c[]={7,8,9};

    int*arr[3]={a,b,c};

    int**p=arr;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // printf("%d",p[i][j]);
            // printf("%d",*(p[i]+j));
            printf("%d",*(*(p+i)+j));
        }
        puts("");
    }
    return 0;

}