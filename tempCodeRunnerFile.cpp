#include<iostream>
using namespace std;

void reverse(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;

    }
}
void printarr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}
int main()
{
    int n,i,arr[10];
    cout<<"enter the size of array:";
    cin>>n;
    cout<<"enter the element of array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    reverse(n,arr);
    printarr(arr,n);
}