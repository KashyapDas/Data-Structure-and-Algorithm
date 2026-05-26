#include<iostream>
using namespace std;


int main()
{
    long long int n;
    cin>>n;
    long long sum =0;
    if(n==0) cout<<n;
    else{
        while (n!=0)
        {
            sum += (n%10);
            n = n/10;
        }
        
        cout<<sum;
    }
    
    return 0;
}