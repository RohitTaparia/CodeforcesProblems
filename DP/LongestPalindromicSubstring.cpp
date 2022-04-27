string Solution::longestPalindrome(string A) {
    int h,l,s=0;
    int mx=1;
    int n=A.length();
    if(n==1){
        return A; 
    }
    for(int i=0;i<n;i++){
        h=i+1;
        l=i-1;
        while(l>=0 && A[l]==A[i]){
            l--;
        }
        while(h<n && A[h]==A[i]){
            h++;
        }
        while(l>=0 && h<n && A[h]==A[l]){
            h++;
            l--;
        }
        int cur=h-l-1;
        if(cur>mx){
            mx=h-l-1;
            s=l+1;
        }
    }
    return (A.substr(s,mx    ));
}
