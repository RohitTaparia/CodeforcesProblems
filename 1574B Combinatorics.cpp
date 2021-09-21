#include <bits/stdc++.h>
#define lowbit(x) (x & (-x))
#include <time.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> PII;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;
const double DINF = 1e20;
const long double eps = 1e-15;
const double PI = acos(-1.0);
const int maxn = 1e6+1000;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a[3],m;
        for(int i=0; i<3; i++)
        {
            cin >> a[i];
        }
        cin >> m;
        sort(a,a+3,greater<ll>());
 
 
        ll max = a[0]+a[1]+a[2]-3;
        ll min = a[0]-a[1]-a[2]-1;
 
        if(m>=min && m<=max)
            cout << "YES";
        else
            cout << "NO";
        cout<<endl;
    }
}