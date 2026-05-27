#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"No of element in the arrary : ";
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    // pre calculation
    // suppose the max input is 13
    int hash[13] = {0};
    for(int i=0; i<n; i++)
    {
        hash[arr[i]] += 1;
    }

    int queries;
    cout<<"No of queries : ";
    cin>>queries;
    while(queries--){
        int number;
        cin>>number;
        cout<<"No of " <<number<<" exist in the array is : "<<hash[number]<<endl;
    }
    return 0;
}