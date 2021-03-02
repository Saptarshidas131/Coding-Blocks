// binary to decimal - von neuman loves binary
// input N followed by N binary numbers, output decimal numbers

#include<iostream>
using namespace std;

int main()
{
    int num, last_digit, N;

    cin>>N;

    while(N>0)
    {

        cin>>num;

        int ans = 0, p = 1;

        while(num>0)
        {
            last_digit = num%10;
            ans += last_digit*p;
            p *= 2;
            num /= 10;
        }

        cout<<ans<<endl;
        N--;
    }

    return 0;
}
