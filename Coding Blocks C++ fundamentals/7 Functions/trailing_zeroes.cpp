// find the number of trailing zeroes in n!

#include<iostream>
using namespace std;

int find_zeroes(long long int n)
{
    int ans = 0;

    // divide by 5 untill not zero and add the quotient
    for(int d=5; n/d >= 1 ; d  = d*5)
    {
        ans += n/d;
    }
    return ans;
}

int main()
{
    long long int n;
    
    cin>>n;

    cout<<find_zeroes(n);

    return 0;
}
