//Program to print factorial of a function using tail recursion
#include<iostream>
using namespace std;
int fact1(int n) //usual factorial function
{
    if(n==0)
        return 1;
    else
    {
        return n*fact1(n-1);
    }
}
int fact2(int n,int val=1)  //factorial using tail recursion
{
    if (n==0)
        return val;
    return fact2(n-1,n*val);
}
int main()
{
    int number,fact;
    cout<<"\n\tEnter your number";
    cin>>number;
    cout<<"\n";
    fact=fact1(number);
    cout<<fact<<" ";
    fact=fact2(number);
    cout<<fact<<" ";
    return 0;
}