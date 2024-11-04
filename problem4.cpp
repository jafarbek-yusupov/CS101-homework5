#include <iostream>
using namespace std;

int main(){
    int n;  cin >> n;
    if (n <= 1){    cout << "0" << endl;    return 0;}
    int a[n];
    for(int i = 0; i < n; i++){ cin >> a[i];}
    int mnp = INT_MAX, mxp = 0;
    for(int i=0; i<n; i++){
        mnp = min(mnp, a[i]);
        mxp = max(mxp, a[i]-mnp);
    }
    cout << mxp << endl;
    return 0;
}
