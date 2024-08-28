#include <iostream>

int main(void){
    int c[21];
    for(int i=0;i<21;i++) c[i]=0;
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) std::cin>>arr[i];
    for(int i=0;i<n;i++) c[arr[i]+10]++;
    long long res=0;
    for(int i=0;i<11;i++){
        long long n1=c[i];
        long long n2=c[20-i];
        if(i==10){
            if(n1>1){
                res+=(n1*(n1-1))/2;
            }
        } else {
            res+=(n1*n2);
        }
    }
    std::cout<<res<<std::endl;
}