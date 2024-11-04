#include <iostream>
using namespace std;

int main() {
    int n, prf = 0;  cin >> n;
    int a[n];
    for(int i = 0; i<n; i++){ cin >> a[i];}
    int mn = a[0];
    for(int i = 0; i<n; i++){
        prf = max(prf, a[i] - mn);
        mn = min(mn, a[i]);
    }
    cout << prf << endl;
    return 0;
}
