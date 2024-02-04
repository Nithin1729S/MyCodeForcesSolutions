#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long n,m,a;
    cin>>n>>m>>a;
    long long rows=ceil((double)n/a);
    long long cols=ceil((double)m/a);
    cout<<rows*cols;


}