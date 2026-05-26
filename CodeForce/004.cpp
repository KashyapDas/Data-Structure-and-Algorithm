#include<iostream>
using namespace std;


int main()
{
    long long int n;
    cin>>n;
    long long int remainder;
    if(n==0)
    {
        cout<<n;
    }
    while(n!=0)
    {
        remainder = n%10;
        n = n/10;
        cout<<remainder;
    }

    return 0;
}