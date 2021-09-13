#include <iostream>
#include <vector>
#include<string>
#include <bits/stdc++.h>
using namespace std;
int findIndex(int arr[], int N, int K)
{
    reverse(arr, arr + N);
    auto it = find(arr, arr + N, K);
    if (it == arr + N) {
        return -1;
    }
    return (N - distance(arr, it) - 1);
}

	int main() {
		// TODO Auto-generated method stub
		int t;
		cin>>t;
		
		for(int i=1;i<=t;i++) {
            int n,k,m,sum=0;
			cin>>n;
			cin>>m;
			int arr[m];
			int arr1[m];
			int arr2[m];
			for(int j=0;j<m;j++){
				cin>>arr[j];
			}
			for(int j=0;j<m;j++){
				arr1[j]=arr[j];
				arr2[j]=23000;
			}
			sort(arr1,arr1+m);
			/*for(int j=0;j<m;j++){
				cout<<arr1[j];
			}*/
			for(int j=0;j<m;j++){
				for(k=0;k<m;k++){
					if(arr[j]==arr1[k])
						break;
				}
				//cout<<k<<"\n";
				arr2[k]=0;
				for(int z=0;z<k;z++){
					if(arr2[z]==0)
						sum++;
				}
                //cout<<sum<<"\n";
			}
			cout<<sum<<"\n";
		}
	}
	
	

