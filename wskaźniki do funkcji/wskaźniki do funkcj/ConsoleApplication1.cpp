#include <iostream>

using namespace std;

void f(char, int);   // lub  void f(char z, int n);


int main()
{
    void (*pf)(char, int) = f; // lub = &f;   pf jest wskaznikiem do funkcji f()

    f('A', 5);  // wywolanie funkcji f

    (*pf)('B', 4); // wywolanie funkcji f przez wskaznik (*pf)

    return 0;
}

void f(char z, int n)
{
    while (n > 0)
    {
        cout << z << " ";
        --n;
    }
    cout << endl;
}
