// print a pattern

#include<iostream>
using namespace std;

int main()
{
    int n;

    cin>>n;

    for(int i = 1; i <= n; i++)
    {
        // space
        for(int space = 1; space <= n-i; space++)
            cout<<" ";

        // increasing number
        int val = i;
        for(int cnt = 1; cnt <= i; cnt++)
        {
            cout<<val;
            val++;    
        }

        // decreasing numbers
        val = val - 2;
        for(int cnt=1; cnt <= i-1; cnt++){
            cout<<val;
            val--;
        }
        cout<<endl;
    }
}
