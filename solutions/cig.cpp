#include <iostream>
#include <vector>

int main(void){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) std::cin>>arr[i];
    int next=1;
    std::vector<int> years{};
    for(int i=0;i<n;i++){
        if(arr[i]==next) {
            years.push_back(2001+i);
            next++;
        }
    }
    std::cout<<next-1<<std::endl;
    for(int i=0;i<years.size();i++) std::cout<<years[i]<<" ";
    std::cout<<std::endl;
}