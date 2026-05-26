#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void printData(int n)
{
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    cout<<n<<" ";
    printData(n-1);
}

int main()
{
    int number;
    cout<<"Enter the number : ";
    cin>>number;


    printData(number);

    return 0;
}