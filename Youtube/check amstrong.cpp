#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool isAmstrong(int number, int size){
    int sum =0;
    int storeNo = number;
    while(number!=0){
        int lastDigit = number%10;
        sum = sum + pow(lastDigit, size);
        number = number/10;
    }
    if(sum == storeNo){
        return true;
    }
    return false;
}

int main()
{
    int number;
    cout<<"Enter the number : ";
    cin>>number;

    int derivedLength = to_string(number).length();
    
    if(isAmstrong(number,derivedLength)) cout<<"Its Amstrong number..."<<endl;
    else cout<<"It's not the amstrong number..."<<endl;

    return 0;
}