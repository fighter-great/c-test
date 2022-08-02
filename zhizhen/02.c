
void bubblesort(int*arr,int len)
{
    
    for (int i = 0; i < len-1; i++)
    {
        for (int j = 0; j < len-1-i; j++)
        {
            if(*(arr+j)>*(arr+j+1))
            {
                int temp=*(arr+j);
                *(arr+j)=*(arr+j+1);
                *(arr+j+1)=temp;
            }
        }
        
    }
    
}
int main()
{
    int arr[10]={9,2,1,4,8,4,6,7,3,5};
    bubblesort(arr,10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}