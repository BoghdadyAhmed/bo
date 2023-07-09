 
 // overloaded function
 // is a normal functions but هي اكثر من داله بنفس الاسم ولاكن ب ترجع نوع بينات مختلف 
  
 #include <iostream>
using namespace std;

void print()
{
    cout << "Hello World!" << endl;
}

void print(int a)
{

    cout << "integer you entered: " << a << endl;
}
void print(int a, int b)
{

    cout << "sum of two numbers is " << a + b << endl;
}
int main()
{

    print();
    print(10);
    print(1, 15);

    return 0;
}