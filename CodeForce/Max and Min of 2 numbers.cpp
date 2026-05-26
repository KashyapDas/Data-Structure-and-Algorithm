#include<iostream>
using namespace std;

int main()
{
    int A,B;
    cin>>A>>B;
    if(A<B)
    {
        cout<<"Min = "<<A<<endl;
        cout<<"Max = "<<B;
    }
    else{
        cout<<"Min = "<<B<<endl;
        cout<<"Max = "<<A;
    }

    return 0;
}