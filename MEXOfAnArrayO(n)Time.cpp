#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define int long long
#define all(x) x.begin(), x.end()
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define mii map<int, int>
#define mod7 1000000007
#define test(t) int t; cin>>t; while(t--)
#define setp(x, y) fixed << setprecision(y) << x
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
 
signed main()
{
    
    fast_io;
    test(t){
        int n;
        cin>>n;
        vi v(n+1);
        mii mp;
        f0(i,n){
            cin>>v[i+1];
            mp[v[i+1]]=i+1;
        }
        int mex=0;
        mii cnt;
        vi ans;
        f1(i,n){
            cnt[v[i]]++;
            
            /*if(mp[mex]<i){
                ans.pb(mex);
                cnt.clear();
                mex=0;
            }*/
        }
        /*cout<<ans.size()<<endl;
        for(auto i:ans){
            cout<<i<<" ";
        }*/
        while(cnt[mex]){
                mex++;
            }
        cout<<mex<<endl;
    }
 
 
 
}