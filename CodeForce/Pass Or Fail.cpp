#include<iostream>
using namespace std;

int main()
{
    int marks;
    cin>>marks;
    if(marks<= 100 && marks>=0 )
    {
        if(marks >= 35)
        {
            cout<<"Pass";
        }
        else{
            cout<<"Fail";
        }
    }

    return 0;
}