#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int n = 1000000;
bool prime[1000001];

void sieve(){
    for(int i = 2; i*i<=n; i++){
        if(prime[i] == false){
            for(int j = i*i; j<=n; j+=i){
                prime[j] = true;
            }
        }
    }
    for(int i = 2; i<=n; i++){
        if(!prime[i]){
            v.push_back(i);
        }
    }
}

int main(){
    sieve();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << v[n-1] << endl;
    }
    return 0;
}