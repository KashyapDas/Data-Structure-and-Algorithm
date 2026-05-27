#include<iostream>
using namespace std;

void tripletSum(int arr[7], int target, int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if((arr[i]+arr[j]+arr[k]) == target)
                {
                    cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
                }
            }
        }
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int target = 12;
    int n = sizeof(arr)/sizeof(int);

    tripletSum(arr,target, n); 

    return 0;
}