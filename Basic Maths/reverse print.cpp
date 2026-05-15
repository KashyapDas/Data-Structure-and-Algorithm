#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter the number : ";
    cin>>number;

    while(number != 0)
    {
        cout<<(number%10);
        number = number/10;
    }

    return 0;
}