#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define ll long long 
#define all(x) x.begin(), x.end()
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define mii map<int, int>
#define mod7 1000000007
#define test(t) int t; cin>>t; while(t--)
#define setp(x, y) fixed << setprecision(y) << x
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
bool isPalindrome(string S)
{
    // Stores the reverse of the
    // string S
    string P = S;
 
    // Reverse the string P
    reverse(P.begin(), P.end());
 
    // If S is equal to P
    if (S == P) {
        // Return "Yes"
        return true;
    }
    // Otherwise
    else {
        // return "No"
        return false;
    }
}
signed main()
{
    
    fast_io;
    test(t){
        ll n,x,y;
        cin>>n;
        cin>>x;
        cin>>y;
        ll arr[n];
        ll sum=0;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];

        }
        if((sum+x+y)%2==0){
            cout<<"Alice";
        }
        else{
            cout<<"Bob";
        }

        cout<<endl;
    }
}