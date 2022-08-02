#include"stdio.h"
void zhuijia(char*ch1,char*ch2)
{
    int i=0;
    while(ch1[i])
    {
        i++;
    }

    int j=0;
    while(ch2[j])
    {
        ch1[i+j]=ch2[j];
        j++;
    }
}
void zhuijia01(char*ch1,char*ch2)
{
    int i=0;
    while(*(ch1+i))
    {
        i++;
    }
    int j=0;
    while(*(ch2+j))
    {
        *(ch1+i+j)=*(ch2+j);
        j++;
    }
}
void zhuijia02(char*ch1,char*ch2)
{
    while (*ch1)ch1++;
    while(*ch2)
    {
        *ch1=*ch2;
        ch1++;
        ch2++;
    }
    
}
int main()
{
    char ch1[100]="hello";
    char ch2[100]="world";
    zhuijia02(ch1,ch2);
    printf("%s\n",ch1);
    
}