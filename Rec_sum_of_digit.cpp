//Recursive program to find sum of digits of a number
#include<iostream>
using namespace std;
int sum(int n)
{
    if(n<10)
        return n;
    else
    {
        return n%10 + sum(n/10);
    }
    
}
int main()
{int number;
cout<<"\n\tEnter the number : ";
cin>>number;
cout<<"\n\tThe sum of digits of the number is : "<<sum(number);
return 0;
}