#include<iostream>
using namespace std;
int main()
{
    int arr[10],n,i,sum=0;
    cout<<"enter the size od array: ";
    cin>>n;
    cout<<"enter the element of array: ";
    for(i=0;i<n;i++)
    {
    cin>>arr[i];
    }
for(i=0;i<n;i++)
{
    sum=sum+arr[i];
}
cout<<"sum of array is: "<<sum<<endl;
}