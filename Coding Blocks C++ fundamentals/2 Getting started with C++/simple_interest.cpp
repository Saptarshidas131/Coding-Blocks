// calculates simple interest

#include<iostream>
using namespace std;

int main()
{
    float p,r,t,si;

    cout<<"Enter p,r and t: "<<endl;
    cin>>p>>r>>t;

    si = p*r*t/100;

    cout<<"Simple interest: "<<si;

    return 0;
}
