#include<iostream>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    int res=0;
    while(n>0)
    {
        int digit=n%10;
        if(digit==7 || digit==4) res++;
        n=n/10;
    }
    if(res==4||res==7) cout<<"YES";
    else cout<<"NO";
    return 0;

}