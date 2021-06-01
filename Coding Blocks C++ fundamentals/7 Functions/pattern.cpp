#include <iostream>

using namespace std;

void pattern (int n)
{
    for (int i = 1; i <= n; i++)
        {
            int cnt_alphabets = n - i + 1;
            char alpha = 'A';
            
            for (int j = 1; j <= cnt_alphabets; j++)
            {
                cout << alpha;
                alpha++;
            }
            cout << endl;
        }
}

int main()
{
	int n;

	cin >> n;

    pattern(n);

	return 0;
}
