#include <iostream>
using namespace std;

int main(){
    int n, r=0;  cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){ cin >> a[i]; r ^=a[i];}
    cout << r << endl;
    return 0;
}
