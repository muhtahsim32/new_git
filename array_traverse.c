#include<stdio.h>
int main(){
    int a[6]={10,12,45,78,9};
    int idx,val;
    scanf("%d %d",&idx,&val);
    for(int i=5;i>idx;i--)
    {
        a[i]=a[i-1];

    }
    a[idx]=val;
    printf("fianl array : ");
    for(int i=0;i<=5;i++)
    {
        printf("%d ",a[i]);
    }
}