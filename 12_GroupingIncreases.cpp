#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int penalty=0;
        int sl=INT_MAX;
        int tl=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int X;
            cin>>X;
            if(sl>tl) swap(sl,tl);
            if(X<=sl)
            {
                sl=X;
            }
            else if(X<=tl)
            {
                tl=X;
            }
            else
            {
                penalty++;
                sl=X;
            }


        }
        cout<<penalty<<endl;

    }
}