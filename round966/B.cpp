#include <iostream>
#include <vector>

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        std::vector<int> a(n,0);
        for(int i=0;i<n;i++) std::cin>>a[i];
        std::vector<bool> seated(n,false);
        seated[a[0]-1]=true;
        bool valid=true;
        for(int i=1;i<n&&valid;i++){
            if(!((a[i]<n&&seated[a[i]])||(a[i]>=2&&seated[a[i]-2]))) valid=false;
            seated[a[i]-1]=true;
        }
        std::cout<<(valid ? "YES" : "NO")<<std::endl;
    }
    return 0;
}