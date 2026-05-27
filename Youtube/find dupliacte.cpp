#include<iostream>
#include<map>
using namespace std;

int main()
{
    int arr[] = {1,2,3,2,4,5,2,5};
    int n = sizeof(arr)/sizeof(int);
    // pre-calculation 
    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        mp[arr[i]]++;
    }
    // traverse through the map and fetch element whose value is more that 1
    for(auto element : mp){
        if(element.second > 1)
        {
            cout<<element.first<<" is the duplicate number occur in the array..."<<endl;
        }
    }
    return 0;
}