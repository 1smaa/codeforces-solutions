#include <iostream>
#include <vector>

#define ll long long
#define MOD 1000000007

ll binomial(int n,int k){
    unsigned long long result = 1;
    for (int i = 0; i < k; ++i) {
        result*=(n - i);
        result/=(i + 1);
    }
    return result;
}

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n,k;
        std::cin>>n>>k;
        std::vector<int>  arr(n,0);
        for(int i=0;i<n;i++) std::cin>>arr[i];
        int b=k/2;
        ll res=0;
        std::vector<int> zeroN(n,0);
        int c=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0) zeroN[i]=++c;
        }
        for(int i=b;i<(n-b);i++){
            if(zeroN[i]<=b){
                res+=binomial(i,b)*binomial(n-i,b);
                res%=MOD;
            }
        }
        std::cout<<res<<std::endl;
    }
    return 0;
}