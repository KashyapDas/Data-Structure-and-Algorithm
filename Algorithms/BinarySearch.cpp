#include<iostream>
using namespace std;

bool binarySearch(int arr[6], int n, int t)
{
    int st = 0;
    int ed = n-1;
    int mid = st+(ed-st)/2;
    while(st<=ed)
    {
        if(arr[mid] == t) return true;
        if(arr[mid] > t) ed = mid-1;
        else st = mid+1;
        mid = st+(ed-st)/2;
    }
    return false;
}

int main()
{
    int arr[] = {10,20,30,40,50,60};
    int target;
    cin>>target;
    int n = sizeof(arr)/sizeof(int);
    
    bool isFound = binarySearch(arr,n,target);
    if(isFound) cout<<"Element found the array..."<<endl;
    else cout<<"Element not found in the array..."<<endl;

}