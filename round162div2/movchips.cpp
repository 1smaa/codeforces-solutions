#include <iostream>

void swap(int arr[],int i,int j,int& op){
    int v=arr[i];
    arr[i]=arr[j];
    arr[j]=v;
    op++;
}

int solve(int arr[],int n){
    int l=n-1,r=n-1,op=0;
    while(l>0&&arr[l]!=1) l--;
    r=l;
    while(l>0&&arr[l]!=0) l--;
    int first=0;
    while(first<n&&arr[first]!=1) first++;
    bool done=false;
    while(l>first){
        swap(arr,r,l,op);
        r--;
        while(l>first&&arr[l]!=0) l--;
    }
    return op;
}

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        int arr[n];
        for(int i=0;i<n;++i) std::cin>>arr[i];
        std::cout<<solve(arr,n)<<std::endl;
    }
    return 0;
}