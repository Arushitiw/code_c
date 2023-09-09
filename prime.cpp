#include<iostream>
using namespace std;
int isPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
          else{
        return 1 ;
    }
    }
  
}
int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    int ans=isPrime(n);
    cout<<ans;
}