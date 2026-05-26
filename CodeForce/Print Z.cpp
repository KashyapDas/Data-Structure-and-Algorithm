#include<iostream>
using namespace std;


int main()
{
    int rowAndColumn = 5;
    int n = rowAndColumn -1;

    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
        {
            if(i==0 || i==n)
            {
                cout<<"*";
            }
            else if((n-i)==j)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}