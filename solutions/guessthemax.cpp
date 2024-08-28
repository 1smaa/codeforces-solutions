#include <iostream>
#include <vector>
int main(void){
    int n;
    std::cin>>n;
    while(n--){
        int l;
        std::cin>>l;
        std::vector<int> arr(l);
        for(int i=0;i<l;i++) std::cin>>arr[i];
        int min=0x3f3f3f3f;
        for(int i=0;i<l-1;i++){
            int m=std::max(arr[i],arr[i+1]);
            if(m<min) min=m; 
        }
        std::cout<<min-1<<std::endl;
    }
    return 0;
}