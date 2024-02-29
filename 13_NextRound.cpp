
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long int>

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
        freopen("out.txt","w",stdout);
    #endif

    std::ios::sync_with_stdio(false);

    int n;
    int k;
    cin>>n>>k;
    vi L;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        L.push_back(num);
    }
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(L[i]>0 && L[i]>=L[k-1]) res++;
    }

    cout<<res;
}

