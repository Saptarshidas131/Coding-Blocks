// find unique numbers in a list of 2n+1 numbers, where all numbers appears twice except one find that number
// take the xor as the duplicates will be cancelled and the unique number will output
#include<iostream>
using namespace std;

int main()
{
    int n, num, res = 0;

    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>num;

        res = res ^ num;
    }
    cout<<res;

    return 0;
}
