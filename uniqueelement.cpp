#include<iostream>
using namespace std;
int findunique( int arr[],int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i];
    }
    return ans;
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
   int unique= findunique(arr,n);
   cout<<"unique element is: "<<unique<<endl;
     
   
}