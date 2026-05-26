#include<bits/stdc++.h>
#include<iostream>

using namespace std;


int main()
{
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    int count = 0;
    while(number != 0)
    {
        number = number/10;
        count++;
    }
    cout<<"The total digit present is "<<count;
    return 0;
}