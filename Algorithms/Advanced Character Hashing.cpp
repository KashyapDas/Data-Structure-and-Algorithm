#include<iostream>
#include<map>
using namespace std;

int main()
{
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);

    // create hash and do pre-calculation
    map<char,int>mp;
    for(unsigned int i=0; i<str.length(); i++)
    {
        mp[str[i]]++;
    }
    
    // asked for queries
    int q;
    cout<<"Enter the no of queries : ";
    cin>>q;
    while (q--)
    {
        char ch;
        cin>>ch;
        // fetching the occurance from the heap
        cout<<"No of "<<ch<<" present in the string are : "<<mp[ch]<<endl;
    }
    return 0;
}