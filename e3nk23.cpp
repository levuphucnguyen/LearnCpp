#include <iostream>
#include <fstream>
#include <set>
#include <math.h>
#include <vector>

#define endl "\n"

using namespace std;

int countxinvector(int x, vector<int> v) {
    int cnt;
    for (int i : v) {
        if (i == x) cnt++;
    }
    return cnt;
}


int main() {
    ifstream cin("e3nk23.inp");
    ofstream cout("e3nk23.out");
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    for (int x : a) cin >> x;
    int k;
    cin >> k;
    // find all divisors of k
    vector<pair<int, int>> divk;
    //divk[].first is the smaller divisor
    for (i = 1; i <= sqrt(k); i++) {
        if (k % i == 0) {
            divk.push_back(make_pair(i, k/i))
        }
    }
    int pref[n+1]; pref[0] = 0
    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i-1] + a[i-1];
    }
    vector<int> subsum
    for (int beg = 0; beg < n; beg++) {
        for (int end = 0; end < n; end++) {
            subsum.push_back(pref[end+1] - pref[beg]);
        }
    }
    int res = 0;
    for (pair<int, int> div : divk) {
        res += (countxinvector(div.first, subsum) * countxinvector(div.second, subsum))
    }
    cout << res;
    return 0;
}
