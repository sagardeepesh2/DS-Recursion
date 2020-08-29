//Program to print n numbers
#include<iostream>
using namespace std;
void func(int n)
{
    if(n==0)
    return;
    else
    {
        func(n-1);
        cout<<n<<" ";
    }
}
int main()
{   int number;
    cout<<"\n\tEnter the number n : ";
    cin>>number;
    func(number);
}