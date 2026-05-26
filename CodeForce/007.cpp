#include<iostream>
using namespace std;

bool isPalindrom(string s)
{
    int st =0;
    long long int ed = s.length()-1;
    while(st<=ed)
    {
        if(s[st]!=s[ed]) return false;
        st++,ed--;
    }
    return true;
}

int main()
{
    long long int n;
    cin>>n;
    string s = to_string(n);
    
    bool result = isPalindrom(s);
    if(result == false)
    {
        cout<<"NO";
    }    
    else{
        cout<<"YES";
    }

    return 0;
}