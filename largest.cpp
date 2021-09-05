#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    cout<<"Enter the third number : ";
    cin>>c;
    if (a>b && a>c)
    {
        cout<<"First number is greater";
    }
    else if (b>a && b>c)
    {
        cout<<"Second number is greater";
    }
    else
        cout<<"Third number is greater";
    
    return 0;
}