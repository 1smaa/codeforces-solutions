#include <iostream>
#include <vector>

#define MATRIX std::vector<std::vector<int>>

bool solve(MATRIX& a,int n,int k){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]!=a[n-1-i][n-1-j]) k--;
        }
    }
    return (k>=0 && k%2==0);
}

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n,k;
        std::cin>>n>>k;
        MATRIX a(n,std::vector<int>(n,0));
        for(int i=0;i<n;++i) {
            for(int j=0;j<n;j++){
                std::cin>>a[i][j];
            }
        }
        std::cout<<(solve(a,n,k) ? "YES" : "NO")<<std::endl;
    }
}