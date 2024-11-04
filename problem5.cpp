#include <iostream>
using namespace std;

int main(){
    string a;   cin >> a;
    int uc=0, lc=0, n=a.size();
    for (int i=0; i<n; i++){    a[i]>='a' && a[i]<='z' ? lc++ : uc++;}
    cout << uc << " ";
    for(int i = 0; i < n; i++){ if(a[i]>='A' && a[i]<='Z'){ cout << a[i] << " ";}}
    cout << endl << lc << " ";
    for(int i = 0; i < n; i++){ if(a[i]>='a' && a[i]<='z'){ cout << a[i] << " ";}}
    return 0;
}
