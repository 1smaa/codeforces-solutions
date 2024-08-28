#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>

#define ll long long
#define INF 0x3f3f3f3f
#define MINF 0xf3f3f3f3

using namespace std;

int main(void){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2){
            vector<int> res(n,0);
            res[n/2]=1;
            int start=2;
            for(int i=1;i<=n/2;i++){
                res[(n/2)-i]=start++;
                res[(n/2)+i]=start++;
            }
            for(int i=0;i<n;i++) cout<<res[i]<<" ";
            cout<<endl;
        } else cout<<-1<<endl;
    }
    return 0;
}