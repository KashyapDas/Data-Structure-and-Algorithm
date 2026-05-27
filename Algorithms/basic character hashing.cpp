#include<iostream>
using namespace std;


int main(){
    string str;
    getline(cin,str);
    // pre-calculation
    int hash[26]={0};
    for(unsigned int i=0; i<str.length(); i++)
    {
        hash[str[i]-'a']++;
    }
    // taking queries from the user
    int queries;
    cin>>queries;

    while(queries--)
    {
        char ch;
        cin>>ch;
        // fetching from the hash
        cout<<hash[ch-'a']<<endl;
    }

    return 0;
}