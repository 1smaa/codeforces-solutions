#include <iostream>
#include <string>
#include <map>
#include <algorithm>

int binarySearch(int arr[],int elem,int start,int end){
    if(end<start) return -1;
    int middle=(end+start)/2;
    if(arr[middle]==elem) return middle;
    else if(arr[middle]<elem) return binarySearch(arr,elem,middle+1,end);
    return binarySearch(arr,elem,start,end-1);
}

std::string followstring(int arr[],int n){
    std::string s="";
    std::map<char,int> m;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            s+=(char)('a'+count++);
            m[(char)('a'+count-1)]=0;
        } else {
            auto it = std::find_if(m.begin(), m.end(), [&](const std::pair<char, int>& p) {
                return (p.second == (arr[i] - 1));
            });
            s+=it->first;
            it->second++;
        }
    }
    return s;
}

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        int arr[n];
        for(int i=0;i<n;++i) std::cin>>arr[i];
        std::cout<<followstring(arr,n)<<std::endl;
    }
    return 0;
}