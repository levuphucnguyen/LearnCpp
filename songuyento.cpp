
#include <math.h>
#include <cstdio>
#include <iostream>
using namespace std;

bool prime(long long n) {
    for (long long i = 2; i <= sqrt(n); i++){
        if (n%i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    freopen("songuyento.inp", "r", stdin);
    freopen("songuyento.out", "w", stdout);
    long long n;
    cin >> n;
    if (n <=2 && n >= 0) cout << "NO";
    else if (prime(n)) cout << "YES";
    else cout << "NO";
    return 0;
}