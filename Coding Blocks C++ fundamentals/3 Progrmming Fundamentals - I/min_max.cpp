// find the minimum and maximum number from N numbers

#include<iostream>
#include<climits>

using namespace std;

int main()
{
    int min, max, N, num;
    
    min = INT_MIN;
    max = INT_MAX;

    cin>>N;

    for(int i=0; i<N; i++)
    {
        cin>>num;
        
        if(num<min)
            min = num;

        if(num>max)
            max = num;
    }

    cout<<"Maximum: "<<max<<endl;
    cout<<"Minimum: "<<min<<endl;

    return 0;
}
