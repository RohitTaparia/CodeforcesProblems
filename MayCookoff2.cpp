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
        int n,x;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int flag=0;
        int s2=0,s1=0;
        if(n==2){
            if(arr[0]==0 && arr[1]==3){
                flag=1;
            }
            else if(arr[0]==3 && arr[0]==0){
                flag=1;
            }
        }
        int option=1;
        // 0 means sorted and 1 means not
        if(n>2){
            for(int i=0;i<n;i++){
                while(option!=0 && i<n){
                    /*if((arr[i-1]==1 || arr[i-1]==2) && (arr[i-2]==1 || arr[i-2]==2) && (arr[i]==1 || arr[i]==1)){
                        i++;
                    }*/
                    if(arr[i]==0){
                        option=0;
                        continue;
                    }
                    else if(arr[i]==3){
                        option=0;
                        s2=1;
                        continue;
                    }
                    else{
                        if(arr[i]==1 || arr[i]==2){
                            i++;
                            continue;
                        }
                    }
                }
                if(i==n){
                    break;
                }
                /*if(arr[i]==0 && i!=n-1 && arr[i+1]==3)
                    flag=0;
                else if(arr[i]==3 && i>=2 && arr[i-1]==2 && arr[i-2]==1){
                    flag=0;
                }
                else if(arr[i]==2 && i>=2 && arr[i-1]==1 && arr[i-2]==0)
                */
                if(arr[i]==0){
                    if(s2==1){
                        flag=1;
                        break;
                    }
                    s2=0;
                }
                else if(arr[i]==1){
                    if(s2==1){
                        s2=0;
                    }
                    else
                        s2=1;
                }
                else if(arr[i]==2){
                    if(s2==1)
                        s2=0;
                    else
                        s2=1;
                }
                else{
                    if(s2==0){
                        flag=1;
                        break;
                    }
                    s2=1;
                }
                //cout<<s2;
             }
        }
        cout<<(flag==1?"NO":"YES")<<"\n";
            
        
    }
}