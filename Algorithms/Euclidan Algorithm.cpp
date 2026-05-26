#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int isEuclidan(int& a, int& b)
{
    while(a>0 && b>0)
    {
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) return b;
    return a;
}

int main()
{
    int a,b;
    cout<<"Enter the value of a and b : ";
    cin>>a>>b;

    int gcd = isEuclidan(a,b);
    cout<<"GCD of 2 number is : "<<gcd<<endl;

    return 0;
}