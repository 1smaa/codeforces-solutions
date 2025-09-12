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
        vector<int> arr(n,0);
        for(int i=0;i<n;i++) cin>>arr[i];
        vector<int> cop(n,0);
        copy(arr.begin(),arr.end(),cop.begin());
        sort(arr.begin(),arr.end());
        int numChar=0;
        int subSize=1;
        bool possible=true;
        for(int i=1;i<n&&possible;i++){
            if(arr[i]!=arr[i-1]){
                if((subSize%arr[i-1])!=0) possible=false;
                subSize=1;
            } else subSize++;
        }
        if(subSize%arr[n-1]!=0) possible=false;
        vector<pair<int,int>> reserve(n,pair<int,int>(0,0));
        for(int i=0;i<n;i++){
            reserve[i]=pair<int,int>(i,-1);
        }
        int getNumber=1;
        if(possible){
            for(int i=0;i<n;i++){
                if(reserve[cop[i]-1].first==0) {
                    cout<<(getNumber++)<<" ";
                    reserve[cop[i]-1].first-=cop[i]-1;
                    reserve[cop[i]-1].second=getNumber-1;
                } else {
                    if(reserve[cop[i]-1].second!=-1){
                        cout<<reserve[cop[i]-1].second<<" ";
                    } else {
                        cout<<(getNumber++)<<" ";
                        reserve[cop[i]-1].second=getNumber-1;
                    }
                } 
            }
            cout<<endl;
        } else cout<<-1<<endl;
    }
    return 0;
}