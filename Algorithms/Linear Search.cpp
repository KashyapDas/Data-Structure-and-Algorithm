#include<iostream>
using namespace std;

bool linearSearch(int arr[6], int n, int t)
{
    for(int i=0; i<n; i++){
        if(arr[i] == t)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {20,40,10,80,5,100};
    int target;
    cin>>target;
    int n = sizeof(arr)/sizeof(int);
    
    bool isFound = linearSearch(arr,n,target);
    if(isFound) cout<<"Element found the array..."<<endl;
    else cout<<"Element not found in the array..."<<endl;

}