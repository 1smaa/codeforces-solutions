#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long
#define IPAIR std::pair<int,int>
int main(void){
    std::cin.tie(nullptr) -> std::ios::sync_with_stdio(false);
    int t;
    std::cin>>t;
    while(t--){
        int n;
        ll m;
        std::cin>>n>>m;
        std::vector<int> a(n,0);
        for(int i=0;i<n;i++) std::cin>>a[i];
        sort(a.begin(),a.end());
        int i=0;
        int max=-1;
        while(i<a.size()){
            int j=i;
            ll copy=m;
            int petals=0;
            int old=i;
            while(j<a.size()&&a[j]-a[i]<=1&&copy>=0){
                copy-=a[j];
                if(copy>=0) petals+=a[j];
                j++;
                if(a[j]-a[i]==1&&copy==1) petals++;
            }
            if(petals>max) max=petals;
            i=j;
        }
        std::cout<<max<<std::endl;
    }
}