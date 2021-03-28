/*
Pattern:
0
10
010
1010
01010
101010


Odd lines start with 0
Even lines start with 1
alternate 0 and 1s in each line
*/

#include<iostream>
using namespace std;

int main()
{
int n;
cin>>n;

for(int i=1; i<=5; i++)
{
    int val = i%2 == 0?1:0;
    for(int j=1; j<=i; j++)
    {

        cout<<val;
        val = 1 - val;

    }
    cout<<endl;
}

return 0;
}
