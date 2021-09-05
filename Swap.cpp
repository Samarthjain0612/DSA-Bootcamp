#include<iostream>
using namespace std;
void swap(int *x, int *y);
int main()
{
    int a = 10, b = 20;
    cout<<"Value of a before swap is "<<a<<endl;
    cout<<"Value of b before swap is "<<b<<endl<<endl;
    swap(&a, &b);
    cout<<"Value of a after swap is "<<a<<endl;
    cout<<"Value of b after swap is "<<b<<endl;

    return 0;
}
void swap(int *x, int *y)
{
    int temp = *y;
    *y = *x;
    *x = temp;
}