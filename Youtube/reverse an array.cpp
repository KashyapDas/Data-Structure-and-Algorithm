#include<bits/stdc++.h>
#include<iostream>
using namespace std;


void printArray(int arr[5], int st, int& size)
{
    if(st>=size)
    {
        return;
    }
    cout<<arr[st]<<" ";
    printArray(arr, st+1, size);
}

int main()
{
    int arr[5] = {10,20,30,40,50};
    int size = sizeof(arr)/sizeof(int);
    int start = 0;

    printArray(arr, start, size);

    return 0;
}