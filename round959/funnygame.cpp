#include <iostream>
#include <vector>
#include <algorithm>

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        std::vector<int> a(n,0);
        for(int i=0;i<n;i++) std::cin>>a[i];
        std::sort(a.begin(),a.end());
        bool valid=true;
        std::vector<int> div(n-1,0);
        for(int i=0;i<n-1&&!valid;i++){
            int diff=a[i+1]-a[i];
            for(int j=1;j<n;j++){
                if(!(diff%j)) div[j-1]++;
            }
        }
    }
    return 0;
}