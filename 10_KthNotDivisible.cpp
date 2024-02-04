#include<iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int n,k;
        cin>>n>>k;
        int res=0;
        int j=1;
        while(true)
        {
            if(j%n!=0) res++;
            if(res==k)
            {
                cout<<j<<endl;
                break;
            }
            j++;
        }

    }
}