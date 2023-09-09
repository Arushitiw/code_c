#include<iostream>
using namespace std;
int linearsearch(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
       
    }
     return 0;
}
int main()
{
    int n,i,key,arr[10];
      cout<<"enter the size of array: ";
    cin>>n;
    cout<<"enter the element of array: ";
    for(i=0;i<n;i++)
    {
    cin>>arr[i];
    }
      cout<<"enter the element to be searched: ";
    cin>>key;
    int found=linearsearch(arr,10,key);
    if(found!=0)
    {
        cout<<"element "<<key<<"is found at "<<found<<endl;
    }
    else{
        cout<<"element not found";

    }
}