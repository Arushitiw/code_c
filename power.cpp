#include<iostream>
#include<math.h>
using namespace std;

int power(int a,int b)
{
    int ans=1;
    for(int i=1;i<=b;i++)
    {
        ans=ans*a;
    }
    return ans ;
}


int main()
{
    int a,b,ans;
    cout<<"enter the value of a: ";
    cin>>a;
     cout<<"enter the value of b: ";
    cin>>b;
    ans=power(a,b);
    cout<<ans;

}
 