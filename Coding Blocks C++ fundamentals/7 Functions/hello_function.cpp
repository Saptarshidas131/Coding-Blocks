#include <iostream>

using namespace std;

void sayHello() {
    cout << "Hello Everyone" << endl;
    }

int factorial (int n)
{
    int fact = 1;
    
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    
    return fact;
}

int main()
{

    cout << "Before function" << endl;

    sayHello();

    cout << "After function" << endl;

    int n;
    cout << "Enter n:";
    cin >> n;

    cout << factorial(n);

    return 0;
}
