#include<iostream>
using namespace std;

int main()
{
    int A,B,C;
    cin>>A>>B>>C;
    if((A<B) && (A<C))
    {
        if(B<C)
        {
            cout<<"Min = "<<A<<endl;
            cout<<"Max = "<<C;
        }
        else{
            cout<<"Min = "<<A<<endl;
            cout<<"Max = "<<B;
        }
    }
    else if((B<C) && (B<A)){
        if(A<C)
        {
            cout<<"Min = "<<B<<endl;
            cout<<"Max = "<<C;
        }
        else{
            cout<<"Min = "<<B<<endl;
            cout<<"Max = "<<A;
        }
    }
    else{
        if(B<A)
        {
            cout<<"Min = "<<C<<endl;
            cout<<"Max = "<<A;
        }
        else{
            cout<<"Min = "<<C<<endl;
            cout<<"Max = "<<B;
        }
    }

    return 0;
}