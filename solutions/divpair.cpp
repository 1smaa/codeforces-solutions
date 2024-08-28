#include <iostream>
#include <algorithm>
#include <vector>

int solve(std::vector<int>& a,int n,int x,int y){
    std::sort(a.begin(),a.end());
    int i=0,j=0;
    std::vector<int> diff{};
    std::vector<int> diff_sum{};
    for(int i=1;i<n;i++){
        diff.push_back(a[i]-a[i-1]);
    }
    for(int i=0;i<diff.size();i++){
        if(!i) diff_sum.push_back(diff[i]);
        else diff_sum.push_back(diff_sum[i-1]+diff[i]);
    }

}

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n,x,y;
        std::cin>>n>>x>>y;
        std::vector<int> a(n);
        for(int i=0;i<n;i++) std::cin>>a[i];
        std::cout<<solve(a,n,x,y)<<std::endl;
    }
    return 0;
}