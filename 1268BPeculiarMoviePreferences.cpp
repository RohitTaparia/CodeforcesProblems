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
 

/*const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;
const double DINF = 1e20;
const long double eps = 1e-15;
const double PI = acos(-1.0);
const int maxn = 1e6+1000;*/


signed main()
{
    fast_io;
    test(t){
        int n;
        cin>>n;
        string s;
        int ch=0;
        vector<string> v;
        f0(i,n){
            cin>>s;
            v.pb(s);
            if(s.size()==1){
                ch=1;
            }
            else{
                if(s[0]==s[s.size()-1])
                    ch=1;
            }
        }
        if(ch==1){
            cout<<"YES"<<endl;
        }
        else{
            set<string> st;
            set<string> s2;
            for(int i=n-1;i>=0;i--){
                
                if(v[i].size()==2){
                    string temp=v[i];
                    if(st.find(temp)!=st.end()){
                        ch=1;
                        break;
                    }
                }
                else{
                    string temp=v[i];
                    if(st.find(temp)!=st.end()){
                        ch=1;
                        break;
                    }
                    else{
                        temp=temp.substr(0,2);
                        if(s2.find(temp)!=s2.end()){
                            ch=1;
                            break;
                        }
                    }
                }
                if(v[i].size()==2){
                    string temp=v[i];
                    reverse(temp.begin(),temp.end());
                    st.insert(temp);
                    s2.insert(temp);
                }
                else{
                    string temp=v[i];
                    reverse(temp.begin(),temp.end());
                    string temp2=temp.substr(0,2);
                    
                    st.insert(temp);
					st.insert(temp2);
                }
            }
            if(ch==1) cout << "YES" << endl;
			else cout << "NO" << endl;
        }
        
    }
}
