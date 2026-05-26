#include<iostream>
using namespace std;


int main()
{
    int x,n;
    cin>>x>>n;
    long long power=1;

    for(int i=1; i<=n; i++)
    {
        power *=x;
    }
    cout<<power;

    return 0;
}