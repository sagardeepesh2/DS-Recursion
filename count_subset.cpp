//Program to count number of subsets which have a specific sum
#include<iostream>
using namespace std;
int Count(int arr[],int n,int sum)
{   int flag;
    if(n==0)
    {
    int flag=(sum==0)?1:0;
    return flag;
    }
    else
    {
        return (Count(arr,n-1,sum)+Count(arr,n-1,sum-arr[n-1]));
    }
}
int main()
{   int number,sum,size,arr[100];
    cout<<"\n\tEnter the size of array : ";
    cin>>size;
    cout<<"\n\tEnter the array : ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"\n\tEnter the sum you want to search : ";
    cin>>sum;
    cout<<"\n\t"<<Count(arr,size,sum);
}