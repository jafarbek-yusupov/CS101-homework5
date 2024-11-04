#include <iostream>
using namespace std;

int main(){
    int n, r=0;  cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){ cin >> a[i];}
    int mnp = 2147483647, mxp = 0;
    for(int i=0; i<n; i++){
        mnp = min(mnp, a[i]);
        mxp = max(mxp, a[i]-mnp);
    }
    cout << mxp << endl;
    return 0;
}
