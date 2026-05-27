#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,2,1,4};
    int n = sizeof(arr)/sizeof(int);
    int unique = arr[0];
    for(int i=1; i<n; i++)
    {
        unique = unique ^ arr[i];
    }
    cout<<"The unique element in the array is : "<<unique<<endl;
}