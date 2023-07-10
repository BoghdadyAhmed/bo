#include <iostream>
using namespace std;
int main()
{
    int num[10]={10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
   
    cout << num[0]<<endl;

    num[0]=11;
    cout <<num[0]<<endl;
    cout<<"========================================================\n";
    const int nume[10]={10, 10, 4, 10, 10, 10, 5, 10, 10, 7};
   for (int i=0;i<10;i++)
   {
    cout << nume[i]<<endl;

   
   

   }



    return 0;
}