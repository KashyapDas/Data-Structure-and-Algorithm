#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int sumRecursion(int n, int& sum)
{
    if(n == 1)
    {
        return 1;
    }
    sum = n + sumRecursion(n-1, sum);
    return sum;
}

int main()
{
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    int sum =0;

    int result = sumRecursion(number, sum);
    cout<<result<<endl;

    return 0;

}