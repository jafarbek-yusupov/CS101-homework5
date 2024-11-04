#include <iostream>
using namespace std;

int main(){
    int n;  cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){ cin >> a[i];}
    for(int i = 0; i < n; i++){
        bool dvs = true;
        for (int j = 0; j < n; j++){    if(a[j] % a[i] != 0){  dvs = false;    break;}  }
        if (dvs){ cout << a[i] << endl; return 0;}
    }
    cout << "-1" << endl;
    return 0;
}
