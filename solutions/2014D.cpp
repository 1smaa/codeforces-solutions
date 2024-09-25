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
#define MOD 1000000007

using namespace std;

int main(void){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n,d,k;
        cin>>n>>d>>k;
        vector<IPAIR> jobs{};
        for(int i=0;i<k;i++){
            int l,r;
            cin>>l>>r;
            jobs.push_back({max(l-d,0),min(r,n-d+1)});
        }
        vector<int> a(n-d+1,0);
        for(int i=0;i<k;i++){
            a[jobs[i].first]++;
            if(jobs[i].second<n-d+1) a[jobs[i].second]--;
        }
        int M=a[0],m=a[0];
        int start=a[0];
        int Mind=0,mind=0;
        for(int i=1;i<n-d+1;i++){
            start+=a[i];
            if(start>M){
                M=start;
                Mind=i;
            }
            if(start<m){
                m=start;
                mind=i;
            }
        }
        cout<<Mind+1<<" "<<mind+1<<endl;
    }
    return 0;
}