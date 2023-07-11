#include <iostream>
using namespace std;
int main()
{
    int x=5;
cout <<&x<<endl;//!address of x
int* p=&x;
cout <<p<<endl;
cout <<*p<<endl; //* p is a pointer to x not enteger
 float y=3.5;
 float* q=&y;
 cout <<q<<endl;
 cout <<*q<<endl;
    return 0;
}