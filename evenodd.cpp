#include<iostream>
using namespace std;


    int isEven(int a)
    {
        if(a%2==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    } 
int main()
{
    int a;
    cout<<"enter number:  ";
    cin>>a;
    int ans=isEven(a);
    cout<<ans;
}