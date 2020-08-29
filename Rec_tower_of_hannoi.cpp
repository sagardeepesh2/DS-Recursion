//Program to implement Towewr of hannoi
#include<iostream>
using namespace std;
void TOH(int n,char A,char B,char C)
{
    if(n==1)
    cout<<"\n\tmove 1 from "<<A<<" to "<<C<<endl;
    else
    {
        TOH((n-1),A,C,B);
        cout<<"\n\tmove "<<n<<" from "<<A<<" to "<<C<<endl;
        TOH(n-1,B,A,C);
    }
}
int main()
{   int number;
    char T1,T2,T3;
    cout<<"\n\tEnter the number n : ";
    cin>>number;
    cout<<"\n\tEnter name of tower 1 : ";
    cin>>T1;
    cout<<"\n\tEnter name of tower 2 : ";
    cin>>T2;
    cout<<"\n\tEnter name of tower 3 : ";
    cin>>T3;
    TOH(number,T1,T2,T3);
    return 0;
}