#include <iostream>
using namespace std;

int main(){
    int n, s=0;    cin >> n;
    int a[n], a1[n];
    for(int i=0; i<n; i++){    s+= a[i]*a1[i];}
    cout << s << endl;
    return 0;
}
