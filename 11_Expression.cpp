#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    vector<int> ans;

    int e1 = a + b * c;
    ans.push_back(e1);

    int e2 = a * (b + c);
    ans.push_back(e2);

    int e3 = a * b * c;
    ans.push_back(e3);

    int e4 = (a + b) * c;
    ans.push_back(e4);

    int e5 = a + b + c;
    ans.push_back(e5);

    int e6 = a * b + c;
    ans.push_back(e6);

    sort(ans.begin(), ans.end());

    int res = ans.back();  
    cout << res << endl;

    return 0;
}
