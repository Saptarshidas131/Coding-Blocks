// given N as input followed by N numbers, output their squares

#include<iostream>
using namespace std;

int main()
{
    int N, nos;

    cin>>N;
    
    while(N>0)
    {
        cin>>nos;
        cout<<nos*nos<<endl;
        N--;
    }

    return 0;
}
