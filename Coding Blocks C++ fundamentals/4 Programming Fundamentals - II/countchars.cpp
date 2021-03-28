// count the number of whitespaces,digits, alphabets and other characters ending with $

#include<iostream>
using namespace std;

int main()
{
    int space = 0, alphabets = 0, others = 0, digits = 0;

    char ch;

    ch = cin.get();

    while(ch != '$')
    {
        if(ch >='0' and ch <='9')
            digits++;
        else if((ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'Z'))
            alphabets++;
        else if(ch == ' ' or ch == '\n' or ch == '\n')
            space++;
        else
            others++;

        ch = cin.get();
    }

    cout<<"spaces = "<<space<<endl<<"alphabets = "<<alphabets<<endl<<"digits = "<<digits<<endl<<"other characters = "<<others<<endl;

    return 0;
}
