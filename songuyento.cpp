#include <math.h>
#include <iostream>
#include <fstream>
#include <time.h>
#define endl "\n"
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
    clock_t start, end;
    double time_used;
    start = clock();
    ifstream cin("songuyento.inp");
    ofstream cout("songuyento.out");
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    cin >> n;
    if (n <=2 && n >= 0) cout << "NO";
    else if (prime(n)) cout << "YES";
    else cout << "NO";
    end = clock();
    time_used = (double)(end-start)/CLOCKS_PER_SEC;
    cout << endl << time_used;
    return 0;
}