// print all prime numbers

#include<iostream>
using namespace std;


// check prime and return true if prime otherwise false
bool checkPrime(int num)
{
    for(int i=2; i<=num-1; i++)
    {
        if(num%i == 0)
            return false;
    }
        return true;
}

// prints prime numbers
void printPrimes(int num)
{
    for(int i=2; i<num; i++)
    {
        if(checkPrime(i))
            cout<<i<<endl;
    }
}


int main()
{
    int n;

    cin>>n;

    printPrimes(n);

    return 0;
}
