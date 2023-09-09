#include<iostream>
using namespace std;
void swapping(int arr[],int n)
{
    for(int i=0;i<n;i+=2)
    {
        if(i+1<n)
        {
        swap(arr[i],arr[i+1]);
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
    swapping(arr,n);
    cout<<"swapiing of alternate numbers are: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}