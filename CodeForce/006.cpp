#include<iostream>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    string s = to_string(n);
    long long int st = 0;
    long long int ed = s.length()-1;
    while(st<=ed)
    {
        swap(s[st], s[ed]);
        st++,ed--;
    }
    // cout<<s<<endl;
    long long int result = stoi(s);
    cout<<result;

    return 0;
}