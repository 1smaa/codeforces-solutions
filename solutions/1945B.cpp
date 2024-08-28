// visit again
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int test;
    cin >> test;
 
 
    for(int i=0; i<test; i++){
        long long a,b,m;
        cin >> a >> b >> m;
 
        cout <<(long long )(m/a) + (long long )(m/b) + 2<< "\n";
    }
 
    return 0;
 
}