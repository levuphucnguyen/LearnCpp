#include <iostream>
#include <fstream>
#include <set>
#include <math.h>

#define endl "\n"

using namespace std;

int sum(int a[], int s, int e){
    int res = 0;
    while (s <= e){
        res += a[s];
        s++;
    }
    return res ;
}

int main() {
    ifstream cin("e3nk23.inp");
    ofstream cout("e3nk23.out");
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    cin >> k;
    set<int> uk;
    set<int> dr;
    for (int i = 1; i <= sqrt(k); i++) {
        if (k % i == 0) {
            uk.insert(i);
        }
    }
    for (int s = 0; s <= n - 1; s++) {
        for (int e = n-1; e >= s; e--) {
            if (uk.count(sum(a, s, e)) != 0) {
                dr.insert(k/(sum(a, s, e)));
            }
        }
    }
    for (int s = 0; s <= n - 1; s++) {
        for (int e = n-1; e >= s; e--) {
            if (dr.count(sum(a, s, e)) == 0) {
                dr.erase(sum(a, s, e));
            }
        }
    }
    cout << dr.size();
    return 0;
}
