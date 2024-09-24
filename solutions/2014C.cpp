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
        int n;
        cin>>n;
        vector<int> a(n,0);
        for(int i=0;i<n;i++) cin>>a[i];
        if(a.size()<=2) { cout<<-1<<endl; continue; }
        sort(a.begin(),a.end());
        ll sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        double threshold=((double)(sum))/(2*a.size());
        int ind=0;
        ll target=a[a.size()/2];
        if(target<threshold) cout<<0<<endl;
        else{
            double k=(2*a.size()*target)-sum;
            ll ki=(ll)k;
            double c=(double)(sum+ki);
            if(c/(2*a.size())>target) cout<<ki<<endl;
            else cout<<ki+1<<endl;
        }
    }
    return 0;
}