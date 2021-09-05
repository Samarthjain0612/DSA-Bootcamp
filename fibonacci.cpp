#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the nth term of fibonacci series ; ";
    cin>>a;
    cout<<"0 1 ";
    for (int i = 0, x = 0, y = 1; i < a; i++)
    {
        int sum = x+y;
        cout<<sum<<" ";
        int temp = x;
        x = y;
        y = temp+y;
    }
    
    return 0;
}