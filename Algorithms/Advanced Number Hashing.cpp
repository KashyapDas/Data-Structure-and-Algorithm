#include<iostream>
#include<map>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the element enter in the array : ";
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    // create hash and doing pre-calculation
    map<int,int>mpp;
    for(int i=0; i<n; i++)
    {
        mpp[arr[i]]++;
    }

    // asking for the queries
    int q;
    cout<<"Enter the no of queries you want to asked...";
    cin>>q;
    while(q--)
    {
        int num;
        cin>>num;
        cout<<"No of "<<num<<" present in the array is : "<<mpp[num]<<endl;
    }
    return 0;
}