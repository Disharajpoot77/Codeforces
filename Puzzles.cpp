#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    
    int n, m;
    cin >> n >> m;

    int f[m];

    for(int i = 0; i < m; i++){
        cin >> f[i];
    }

    sort(f, f + m);

    int ans = 100000000;

    for(int i = 0; i <= m - n; i++){
        ans = min(ans, f[i + n - 1] - f[i]);
    }

    cout << ans;

}