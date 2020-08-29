//Program to implement tail recursion 
//using recursion and goto
#include<iostream>
using namespace std;
//Recursive function
void func(int n)
{
    if(n<1)
    return;
    else
    {
        cout<<n<<" ";
        func(n-1);
    }
}
//Goto function
void func2(int n)
{start:
    if(n<1)
    return;
    cout<<n<<" ";
    n=n-1;
    goto start;
}
//function to print from 1 to n using 3rd variable
void func3(int n,int k=1)
{
    if(n<1)
        return;
    cout<<k<<" ";
    func3(n-1,k+1);
}
int main()
{   int number;
    cout<<"\n\tEnter the number n : ";
    cin>>number;
    func(number);
    cout<<"\n";
    func2(number);
    cout<<"\n";
    func3(number);
    return 0;
}