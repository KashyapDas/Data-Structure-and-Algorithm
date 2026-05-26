#include<iostream>
using namespace std;

int main()
{

    int table;
    cin>>table;
    for(int i=1; i<=10; i++)
    {
        cout<<table<<" * "<<i<<" = "<<(table*i)<<endl;
    } 
    return 0;
}