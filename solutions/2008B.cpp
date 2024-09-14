#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <set>
#include <algorithm>

#define ll long long
#define INF 0x3f3f3f3f
#define MINF 0xf3f3f3f3
#define IPAIR pair<int,int>
using namespace std;

int main(void){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(floor(sqrt(static_cast<float>(n)))!=sqrt(static_cast<float>(n))) {cout<<"No"<<endl; continue;}
        int root=sqrt(static_cast<float>(n));
        bool valid=true;
        for(int i=0;i<root&&valid;i++){
            for(int j=0;j<root&&valid;j++){
                if(i==0||i==root-1){
                    if(s[(i*root)+j]!='1') valid=false;
                } else{
                    if((j==0||j==root-1)&&s[(i*root)+j]!='1') valid=false;
                    else if((j>0&&j<root-1)&&s[(i*root)+j]!='0') valid=false;
                }
            }
        }
        cout<<(valid ? "Yes" : "No")<<endl;
    }
    return 0;
}