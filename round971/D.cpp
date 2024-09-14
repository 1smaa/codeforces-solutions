#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <set>
#include <algorithm>
#include <queue>

#define ll long long
#define INF 0x7fffffff
#define MINF 0xffffffff
#define IPAIR pair<int,int>
using namespace std;

int main(void){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<IPAIR> points(n,IPAIR(0,0));
        for(int i=0;i<n;i++) cin>>points[i].first>>points[i].second;
        int res=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int l=j+1;l<n;l++){
                    IPAIR seg1{points[j].first-points[i].first,points[j].second-points[i].second};
                    IPAIR seg2{points[l].first-points[j].first,points[l].second-points[j].second};
                    IPAIR seg3{points[i].first-points[l].first,points[i].second-points[l].second};
                    if((seg1.first*seg2.first+seg1.second*seg2.second)==0||(seg2.first*seg3.first+seg2.second*seg3.second)==0||(seg3.first*seg1.first+seg3.second*seg1.second)==0) res++;
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}