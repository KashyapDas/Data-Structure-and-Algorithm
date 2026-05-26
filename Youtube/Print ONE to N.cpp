#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int printData(int n)
{
    if(n == 1)
    {
        return 1;
    }
    int result = printData(n-1);
    cout<<result<<" ";
    return n;
}

int main()
{
    int number;
    cout<<"Enter the number : ";
    cin>>number;

    int ans = printData(number);
    cout<<ans<<endl;

    return 0;
}