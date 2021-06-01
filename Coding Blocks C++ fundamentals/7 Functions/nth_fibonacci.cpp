// print the nth fibonacci number

#include<iostream>
using namespace std;

int fibonacci(int n)
{
	int a = 0, b = 1, c;

	for (int i = 1; i <= n - 1; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}


int main()
{
    int n;

    cin >> n;
    cout << fibonacci(n);

    return 0;
}
