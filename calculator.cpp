#include<iostream>
using namespace std;
int main()
{
    int add,sub,multiply,division,modulo;
    int a,b;
    char op;
    cout<<"enter the value of a: ";
    cin>>a;
    cout<<"enter the value of b: ";
    cin>>b;
    cout<<"enter the operation to be performed: ";
    cin>>op;
    switch(op)
    {
        case '+':
        cout<<(a+b);
        break;
         case '-':
        cout<<(a-b);
        break;
       
        
    }
}
