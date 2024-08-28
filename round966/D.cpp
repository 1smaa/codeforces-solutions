#include <iostream>
#include <string>
#include <vector>

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        std::vector<int> a(n,0);
        for(int i=0;i<n;i++) std::cin>>a[i];
        std::string s;
        std::cin>>s;
        std::vector<long long> sumD(n,0);
        sumD[0]=a[0];
        for(int i=1;i<n;i++){
            sumD[i]=sumD[i-1]+a[i];
        }
        int i=0,j=n-1;
        long long points=0;
        while(i<j){
            //std::cout<<i<<" "<<j<<std::endl;
            while(i<n&&s[i]!='L') i++;
            while(j>=0&&s[j]!='R') j--;
            if(i<j){
                points+=sumD[j]-(i>0 ? sumD[i-1] : 0);
            }
            i++; j--;
        }
        std::cout<<points<<std::endl;
    }
    return 0;
}