#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool isPalindrome(string& str, int st, int ed)
{
    if(st>=ed)
    {
        return true;
    }
    if(str[st]!=str[ed])
    {
        return false;
    }
    return isPalindrome(str, st+1, ed-1);
}

int main()
{
    string str = "dapfado";
    int st = 0;
    int ed = (str.size() - 1);

    int check = isPalindrome(str, st, ed);
    if(!check) cout<<"Its not palindrome..."<<endl;
    else cout<<"Its palindrome..."<<endl;

    return 0;
}