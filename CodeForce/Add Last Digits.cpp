#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int first = n%10;
    int second = m%10;
    cout<<first+second;
    return 0;
}