#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9+7;
const int MAX = 1e6;
int32_t main()
{
    int t;
    cin >> t;
    string a="BOB",b="ALICE",c="DRAW";
    while (t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        if(n==1 && s[0]=='1' || n==2 && s[0]=='1' && s[1]=='1') cout << c <<'\n';
        else if(n==1 && s[0]=='0' || n==2 && (s[0]=='0'||s[1]=='0')) cout << a <<'\n';
        else
        {
            int zero=0,one=0;
            for(int i=0; i<s.size(); ++i)
            {
                if(s[i]=='0') zero++;
                else one++;
            }
            if(zero == 0) cout << c << '\n';
            else if(zero == 1 || zero%2==0){
                cout << a << "\n";
            }
            else cout << b <<'\n';

        }
        

    }
    return 0;
}