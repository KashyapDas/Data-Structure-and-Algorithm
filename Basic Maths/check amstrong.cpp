#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool isAmstrong(int number)
{
    int sum = 0;
    while(number != 0)
    {
        int lastDigit = number %10;
        sum = sum + (lastDigit * lastDigit * lastDigit);
        number = number/10;
    }
    if(sum == number)
    {
        return true;
    }
    return false;
}

int main()
{
    int number;
    cout<<"Enter the number : ";
    cin>>number;

    if(isAmstrong(number)) cout<<"Its Amstrong number..."<<endl;
    else cout<<"It's not the amstrong number..."<<endl;

    return 0;
}