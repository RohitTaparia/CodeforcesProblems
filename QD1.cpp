include <bits/stdc++.h>
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
        int n,m;
        cin>>n>>m;
        vector<int>vec;
        ll sum=0;
        for(int i=0;i<m;i++)
        {
            int x;
            scanf("%d",&x);
            int num=0;
            for(int j=0;j<vec.size();j++)
            {
                if(vec[j]<x)
                    num++;
            }
            vec.push_back(x);
            sum+=num;
        }
        cout<<sum<<"\n";
    }
    return 0;
}
