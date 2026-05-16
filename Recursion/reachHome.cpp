#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int timeTakenToGetBack(int src, int desc)
{
    if(src == desc){
        return 0;
    }
    
    return 2 + timeTakenToGetBack(src+1,desc);
}

int main()
{
    int desc = 10;
    int src = 1;

    int finalTime = timeTakenToGetBack(src, desc);

    cout<<"Time taken to get back : "<<finalTime<<endl;
    return 0;
}