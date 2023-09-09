#include<iostream>
using namespace std;
int duplicate(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            return arr[i];
        }
    }
}
int main()
{
     int arr[10],i,n;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"enter the element of array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=duplicate(arr,n);
    cout<<"Duplicate number is: "<<ans;
}