#include <iostream>
using namespace std;
int main()
{
    int num[10]{10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    for (int i = 0; i <= 9; i++)
    {
        cout << num[i] << endl;
    }
    cout << "======================================\n";
    cout << (num[1]) + (num[2])<<endl;
    return 0;
}