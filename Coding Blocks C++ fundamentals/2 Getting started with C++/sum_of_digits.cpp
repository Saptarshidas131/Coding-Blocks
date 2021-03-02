// calculate the sum of digits of a number

#include<iostream>
using namespace std;

int main()
{
    int num, sum = 0;

    cout<<"Enter number: ";
    cin>>num;

    while(num > 0)
    {
        int last_digit = num%10;
        sum += last_digit;
        num /= 10;
    }

    cout<<"Sum: "<<sum;

    return 0;
}
