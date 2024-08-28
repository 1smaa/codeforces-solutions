#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>

#define ll long long
#define INF 0x3f3f3f3f
#define MINF 0xf3f3f3f3

using namespace std;

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        vector<int> a(n,0);
        for(int i=0;i<n;i++) std::cin>>a[i];
        map<int,int> freq{};
        for(int i=0;i<n;i++) freq[a[i]]++;
        int max=0;
        for(auto it=freq.begin();it!=freq.end();it++){
            if(it->second>max){
                max=it->second;
            }
        }
        std::cout<<(n-max)<<std::endl;
    }
    return 0;
}