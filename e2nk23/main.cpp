#include <fstream>
#include <map>

using namespace std;

int main(){
    ifstream cin("e2nk23.inp");
    ofstream cout("e2nk23.out");
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int M, N, K;
    cin >> M >> N >> K;
    int inM[4*K], inN[4*K];
    for (int i = 0; i < 4*K; ++i) {
        cin >> inM[i] >> inN[i];
    }
    map<int, int> posM, posN;
    for (int i : inM) {
        ++posM[i];
    }
    for (int i: inN) {
        ++posN[i];
    }
    int cntM = 0, cntN = 0, blankM, blankN;
    for (map<int, int>::iterator it = posM.begin(); cntM < 2*K; it++) {
        cntM += (*it).second;
        if (cntM == 2*K) {
            blankM = - (*it).first + (*(it++)).first;
        }
    }
    for (map<int, int>::iterator it = posN.begin(); cntN < 2*K; it++) {
        cntN += (*it).second;
        if (cntN == 2*K) {
            blankN = - (*it).first + (*(it++)).first;
        }
    }
    cout << blankM * blankN;
    return 0;
}
