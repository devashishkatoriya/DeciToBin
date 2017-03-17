//Program to Convert from Decimal to Binary

#include <iostream>

using namespace std;

#define LIMIT 8

int main()
{
    int decimal,i,binary[LIMIT];
    cout<<"\nEnter Decimal Number : ";
    cin>>decimal;
    if(decimal<0)
    {
        cout<<"\nInvalid Decimal Number!";
        return 0;
    }
    for(i=0;i<LIMIT;i++)
    {
        binary[i] = 0;
    }
    i = 0;
    while(decimal>0)
    {
        binary[i] = decimal % 2;
        decimal = decimal/2;
        i++;
    }
    cout<<"\nBinary Number is ";
    for(i=LIMIT-1;i>=0;i--)
    {
        cout<<binary[i];
    }
    return 0;
}