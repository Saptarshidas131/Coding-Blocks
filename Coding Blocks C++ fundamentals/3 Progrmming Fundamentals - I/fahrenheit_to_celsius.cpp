// convert fahrenheit to celsius

#include<iostream>
using namespace std;

int main()
{
    int f = 20, c;

    while(f <= 300)
    {
        //conversion formula
        c = (5*(f-32))/9;
        cout<<f<<" "<<c<<endl;
        f = f+20;
    }

    return 0;
}
