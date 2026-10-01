#include<stdio.h>
int binary_search(int a[],int key,int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(a[mid]==key)
        {
            return mid;
        }
        else if(a[mid]<key)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return -1;
}
int main()
{
    int a[6]={10,15,25,30,35};
    int key=30;
    int flag=binary_search(a,key,6);
    if(flag!=-1)
    {
        printf("key found at %d\n",flag);
    }
    else 
    {
        printf("key not found\n");
    }

}