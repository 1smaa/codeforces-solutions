#include <iostream>
#include <vector>

bool solve(int a[],int n){
    int s1=a[0],s2=a[1],s3=a[0],s4=a[1];
    bool lei=false;
    for(int i=0;i<n;i++){
        if(lei){

        } else {

        }
        lei=!lei;
    }
}

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        int a[n];
        for(int i=0;i<n;i++) std::cin>>a[i];
        std::cout<<(solve(a,n) ? "YES" : "NO")<<std::endl;
    }
}