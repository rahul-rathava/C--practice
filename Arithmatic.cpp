#include <iostream>
using namespace std;

int add()
{
    int a = 2, b = 4, c;
    c = a + b;
    cout << "Addition =" << c << endl;
    return c;
}

int sub()
{
    int a = 2, b = 4, c;
    c = b - a;
    cout << "Subtraction =" << c << endl;
    return c;
}

int mul()
{
    int a = 2, b = 4, c;
    c = b * a;
    cout << "Multiplication =" << c << endl;
    return c;
}

int main()
{

    int x = add();
    int y = sub();
    int z = mul();
    int k=0;
    cout << x << endl;
    return 0;
}