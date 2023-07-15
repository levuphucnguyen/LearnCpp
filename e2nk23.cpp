#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream cin("e2nk23.inp");
    ofstream cout("e2nk23.out");
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    unsigned int bc = 0, br = 0, M, N, K;
    cin >> M >> N >> K;
    unsigned int r[4*K];
    unsigned int c[4*K];
    for (unsigned int i = 0; i < 4*K; i++) {
        cin >> r[i] >> c[i];
    }
    int cr = 0, cc = 0;
    int cre = 1, cce = 1;
    while (cr <= 2 * K) {
        for (unsigned int x : r) {
            if (x == cre) {
                cr++;
            }
        }
        if (cr == 2 * K) {
            br++;
        }
        cre++;
    }
    while (cc <= 2 * K) {
        for (unsigned int y : c) {
            if (y == cce) {
                cc++;
            }
        }
        if (cc == 2 * K) {
            bc++;
        }
        cce++;
    }
    unsigned int res = bc * br;
    cout << res;
    return 0;
}