
#include <math.h>
#include <cstdio>
#include <iostream>
using namespace std;
int main(){
    freopen("songuyento.inp", "r", stdin);
    freopen("songuyento.out", "w", stdout);
    int n;
    cin >> n;
    bool yn = true;
    for (int i = 2; i <= sqrt(n); i++){
        if (n%i == 0){
            yn = false;
            break;
        }
    }
    if (yn==true) cout << "YES";
    if (yn == false) cout << "NO";
    return 0;
}