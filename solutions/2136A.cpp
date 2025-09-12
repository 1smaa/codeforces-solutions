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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int diff=abs(b-a);
        if((min(a,b)==0&&max(a,b)>2)||max(a,b)-(2*min(a,b))>2){
            cout<<"NO"<<endl;
        } else {
            a=c-a;
            b=d-b;
            diff=abs(b-a);
            if((a||b)&&((min(a,b)==0&&max(a,b)>2)||max(a,b)-(2*min(a,b))>2)){
                cout<<"NO"<<endl;
            } else cout<<"YES"<<endl;
        }
    }
    return 0;
}