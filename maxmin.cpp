#include<iostream>
#include <climits>
using namespace std;
int main()
{
    int i,n;
    int minterm=INT_MAX;
    int maxterm=INT_MIN;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    

    for(i=0;i<n;i++)
    {
        if(arr[i]>maxterm)
        {
            maxterm=arr[i];
        }
        if(arr[i]<minterm)
        {
            minterm=arr[i];
        }
    }
    cout<<"maxterm is : "<<maxterm;
    cout<<"minterm is: "<<minterm;
}