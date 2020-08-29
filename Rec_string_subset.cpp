//Given a string print all the subset of it
#include<iostream>
using namespace std;
void printSub(string str,string curr=" ",int index=0)
{
    if(index == str.length())
    {
        cout<<curr<<" ";
        return;
    }
    printSub(str,curr,index+1);
    printSub(str,curr+str[index],index+1);
}
int main()
{
    string s;
    cout<<"\n\tInput the string : ";
    cin>>s;
    printSub(s);
    return 0;
}