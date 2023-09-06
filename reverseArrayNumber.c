#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40,50,60,70,80,90,100};
    int temp;
    int sz = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<sz/2;i++)
    {
        temp = arr[i];
        arr[i]=arr[sz-i-1];
        arr[sz-i-1] = temp;
    }
    for(int i=0;i<sz;i++)
        printf("%d ",arr[i]);
    return 0;
}
