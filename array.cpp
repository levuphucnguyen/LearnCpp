#include <iostream>
#include <fstream>
#include <set>
#define endl "\n"

using namespace std;


int main(){
    ifstream cin("array.inp");
    ofstream cout("array.out");
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int A[n];
        for (int &i : A) cin >> i;
        set<int> a;
        for (int i : A) a.insert(i);
        int res = 1;
        while (1) {
            if (a.count(res)) {
                cout << res << endl;
                break;
            } else ++res;
        }
    }
    return 0;
}