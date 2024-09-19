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

void swap(vector<int>& v,int i,int j){
    int aux=v[i];
    v[i]=v[j];
    v[j]=aux;
}

int main(void){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n;
        ll k;
        cin>>n>>k;
        if(k%2) cout<<"No"<<endl;
        else{
            vector<int> p(n,0);
            for(int i=0;i<n;i++) p[i]=i+1;
            int start=0,end=n-1;
            while(k>0){
                if(k/2<=end-start){
                    swap(p,start,start+(k/2));
                    k=0;
                    break;
                }
                swap(p,start,end);
                k-=(end-start)*2;
                start++; end--;
                if(start>=end) break;
            }
            if(k==0){
                cout<<"Yes"<<endl;
                for(int i=0;i<n;i++) cout<<p[i]<<" ";
                cout<<endl;
            } else cout<<"No"<<endl;
        }
    }
    return 0;
}