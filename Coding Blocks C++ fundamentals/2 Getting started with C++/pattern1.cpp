// print pattern

#include<iostream>
using namespace std;

int main()
{
    int rows, cols, n;

    cout<<"Enter number of rows: ";
    cin>>n;

    rows = 1;
    while(rows <= n)
    {
        cols = 1;

        if(rows%2 != 0)
        {
            // odd row
            while(cols <= rows)
            {
                cout<<1;
                cols++;
            }
        }

        else
        {
            // even row
            cout<<1;
            while(cols <= rows - 2)
            {
                cout<<0;
                cols++;
            }
            cout<<1;
        }
        cout<<endl;
        rows++;
    }
}
