#include <iostream>
#include <vector>

/*
* 1948B
*/
int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        std::vector<int> arr(n,0);
        for(int i=0;i<n;i++) std::cin>>arr[i];
        int start=arr[0];
        bool valid=true;
        int index=0;
        while(index<arr.size()&&valid){
            if(arr[index]>=start){
                start=arr[index];
            } else{
                int split=0;
                int check=-1;
                std::vector<int> splitted{};
                for(int j=0;j<index&&valid;j++){
                    std::string s=std::to_string(arr[j]);
                    for(int k=0;k<s.length()&&valid;k++){
                        int d=std::stoi(s.substr(k,1));
                        if(d<check) valid=false;
                        else splitted.push_back(d);
                        check=d;
                    }
                }
                if(splitted[splitted.size()-1]<=arr[index]) start=arr[index];
                else valid=false;
                arr.erase(arr.begin(),arr.begin()+index);
                splitted.insert(splitted.end(),arr.begin(),arr.end());
                arr=splitted;
            }
           /*for(int i=0;i<arr.size();i++) std::cout<<arr[i]<<" ";
            std::cout<<std::endl;*/
            index++;
        }
        std::cout<<(valid ? "YES" : "NO")<<std::endl;
    }
    return 0;
}