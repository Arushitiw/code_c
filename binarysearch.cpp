#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(key==arr[mid])
        {
            return mid;
        }
        else if(key>arr[mid])
        {
            start=mid+1;
        }
        else if(key<arr[mid])
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main()
{
    int even[6]={2,4,5,8,12,20};
    int odd[5]={7,5,3,19,25};
    int index=binarysearch(even,6,12);
    cout<<"index of key element is: "<<index;

}