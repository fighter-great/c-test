#include"stdio.h"
void remove_space(char*ch1)
{
    char str[100]={0};
    char*temp=str;
    int j=0;
    int i=0;
    while(ch1[i])//把ch中不是空格的字符移动到str中
    {
        if (ch1[i]!=' ')
        {
            str[j]=ch1[i];
            j++;
        }
        i++;
    }
    while(*ch1++=*temp++);//把str中的字符重新串拷贝到ch中
}
void remove_space01(char*ch1)
{
    //用来遍历字符串
    char*ftemp=ch1;
    //用来记录非空字符串
    char*rtemp=ch1;
    
    while (*ftemp)
    {
        if (*ftemp!=' ')
        {
            *rtemp=*ftemp;
            rtemp++;
        }
        ftemp++;
    }
    *rtemp=0;//rtemp指针所对应的值为0，字符串结束
}
int main()
{
    char ch1[100]="h    e  l lo   w  o   r  l        d";
    remove_space01(ch1);
    printf("%s\n",ch1);
    
}
