#include <iostream>
#include <fstream>
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
        long long A[n];
        for (long long &x : A) cin >> x;
        for (int i = 0; i < n; ++i){
            for (int x = 0; x < n; x++) {
                if (A[x] == i){
                    A[i] = i;
                }
            }
        }
        for (int y = 0; y < n; ++y) {
                if (A[y] != y){
                    A[y]= -1;
                }
        }
        for (int z : A) cout << z << " ";
        cout << endl;
    }
    return 0;
}