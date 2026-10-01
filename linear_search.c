#include<stdio.h>
int linear_search(int a[],int key,int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int a[5]={10,15,17,90,85};
    int key=15;
    int flag=linear_search(a,key,5);
    if(flag!=-1)
    {
        printf("key founded at %d no index\n",flag);
    }
    else{
        printf("key not founded..test fail!");
    }
}