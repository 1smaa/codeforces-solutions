#include <iostream>
#include <algorithm>

int maxdiff(int a[],int b[],int n,int m){
    std::sort(a,a+n);
    std::sort(b,b+m);
    int diffup[m];
    for(int i=0;i<m;i++){
        diffup[i]=std::abs(a[0]-b[i]);
    }
    int diffdown[m];
    for(int i=0;i<m;i++){
        diffdown[i]=std::abs(a[n-1]-b[i]);
    }
    int offup=0,offdown=0;
    int u=0,d=n;
    int diff=0;
    while(u<d){
        diff+=std::abs(diffup[m-1-u]-offup);
        offup+=a[u+1]-a[u];
        diff+=std::abs(diffdown[u]-offdown);
        offdown-=a[n-2-u]-a[n-1-u];
        u++;
        d--;
    }
    return diff;
}

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n,m;
        std::cin>>n>>m;
        int a[n],b[m];
        for(int i=0;i<n;++i) std::cin>>a[i];
        for(int i=0;i<m;++i) std::cin>>b[i];
        std::cout<<maxdiff(a,b,n,m)<<std::endl;
    }
    return 0;
}