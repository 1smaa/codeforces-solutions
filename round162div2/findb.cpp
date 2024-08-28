#include <iostream>

bool solve(int arr[],int n,int l,int r,int s[]){
    int sum;
    if(l==1) sum=s[r-1];
    else sum=s[r-1]-s[l-2];
    return !((r-l+1)>=(sum-1))&&(l!=r);
}

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n,q;
        std::cin>>n>>q;
        int a[n];
        for(int i=0;i<n;++i) std::cin>>a[i];
        int s[n];
        s[0]=a[0];
        for(int i=1;i<n;++i) s[i]=s[i-1]+a[i];
        for(int i=0;i<q;i++){
            int l,r;
            std::cin>>l>>r;
            std::cout<<(solve(a,n,l,r,s) ? "YES" : "NO")<<std::endl;
        }
    }
    return 0;
}