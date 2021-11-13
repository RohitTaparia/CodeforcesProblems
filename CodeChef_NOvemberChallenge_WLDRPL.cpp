#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int count(int arr[], int x, int n)
{   
  /* get the index of first occurrence of x */
  int *low = lower_bound(arr, arr+n, x);
 
  // If element is not present, return 0
  if (low == (arr + n) || *low != x)
     return 0;
    
  /* Else get the index of last occurrence of x.
     Note that we  are only looking in the
     subarray after first occurrence */  
  int *high = upper_bound(low, arr+n, x);    
    
  /* return count */
  return high - low;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        int arr2[n];
        int even=0;
        int odd=0;
        for(int j=0;j<n;j++){
            cin>>arr[j];
            arr2[j]=arr[j];
        }
        if(n==1){
            cout<<arr[0];
        }
        else{
            int flag=0,flag2=0;
            vector<int> v;
            sort(arr2,arr2+n);
            for(int j=0;j<n;j++){
                int c = count(arr2, arr2[j], n);
                if(c!=1){
                    flag++;
                    j++;
                    v.push_back(arr2[j]);
                }
                if(c!=1 && j==n-1){
                    flag2++;
                }
                if(c>2){
                    flag2++;
                }
                c=0;
            }
            if(flag==0){
                for(int j=n-1;j>=0;j--){
                    cout<<arr2[j]<<" ";
                }

            }
            else if(flag2!=0){
                cout<<"-1";

            }
            else{
                int &min = *min_element(arr,arr+n );
                int &max = *max_element(arr,arr+n );
                int arr3[n];int arr4[n-v.size()];
                int f=0;
                for(int j=0;j<n-1;){
                    arr4[f++]=arr2[j];
                    if(arr2[j]==arr2[j+1]){
                        j+=2;
                    }
                    else
                        j++;
                }
                int flag=0;
                for(int j=0;j<v.size();j++){
                    if(max==v[j]){
                        flag++;
                    }
                }
                if(flag!=0){
                    cout<<"-1";
                }
                int z=v.size();
                sort(v.begin(),v.end());
                for(int j=0;j<v.size();j++){
                    arr3[j]=v[j];
                }
                int a=1,c=0;
                /*for(int j=0;j<n;j++){
                    c=0;
                    for(int k=0;k<v.size();k++){
                        if(arr2[j]==v[k])
                            c++;
                    }
                    if(c==0){
                        arr3[n-a]=arr2[j];
                        a++;
                    }
                }*/
                for(int j=0;j<n-v.size();j++){
                    arr3[n-a]=arr4[j];
                    a++;
                }
                arr3[v.size()]=max;
                for(int j=0;j<n;j++){
                    cout<<arr3[j]<<" ";
                }
                
            }
        }
        cout<<endl;
    }
    return 0;
}
