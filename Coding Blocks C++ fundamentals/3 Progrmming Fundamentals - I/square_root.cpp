// find the square root without using function

#include<iostream>
using namespace std;

int main()
{
    int N, P;

    cin>>N>>P;

    float ans = 0, inc = 1.0;

    for(int times=0; times<=P; times++)
    {
        while(ans*ans <= N)
            ans += inc;

        ans = ans - inc;

        inc = inc/10;
    }
    cout<<ans<<endl;

    return 0;
}
