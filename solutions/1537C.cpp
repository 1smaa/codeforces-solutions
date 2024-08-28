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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> h(n,0);
        for(int i=0;i<n;i++) cin>>h[i];
        vector<int> cop=h;
        sort(cop.begin(),cop.end());
        if(n<=2){
            for(int i=0;i<n;i++) cout<<cop[i]<<" ";
            cout<<endl;
            continue;
        }
        vector<int> diff(n-1,0);
        int min=INF;
        int minInd=-1;
        for(int i=1;i<n;i++) {
            diff[i-1]=cop[i]-cop[i-1];
            if(diff[i-1]<min){
                min=diff[i-1]; minInd=i;
            }
        }
        vector<int> response(n,0);
        response[0]=cop[minInd];
        response[n-1]=cop[minInd-1];
        for(int i=minInd;(i)<(minInd+n);i++){
            response[i-minInd]=cop[i%n];
        }
        for(int i=0;i<n;i++) cout<<response[i]<<" ";
        cout<<endl;
    }
    return 0;
}