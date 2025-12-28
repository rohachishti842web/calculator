#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    char L;
    cout << " Enter a number 1 : ";
    cin >> a;
    cout << " Enter a number 2 : ";
    cin >> b;
    cout << " Enter the operation : ";
    cin >> L;
    if (L == '+')
    {
        c = a + b;
        cout << " Result : " << c;
    }
    else if (L ==  '-')
    {
        c = a - b;
        cout << " Result : " << c;
    }
    else if (L == 'x')
    {
        c = a * b;
        cout << " Result : " << c;
    }
    else if (L == '%')
    {
        c = a / b;
        cout << " Result : " << c;
    }
    else if (a / b == 0)
    {
        cout << " Math ERROR ";
    }
    else
        cout << " ERROR ";
    return 0;
}