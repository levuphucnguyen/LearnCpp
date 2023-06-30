#include <iostream>
#include <math.h>
using namespace std;

int main (){
    unsigned int a, b, du, res;
    cin >> a >> b;
    if (a==b){
        res = a;
    } else {
        du = a%b;
        res = a - du + b;
    }
    cout << res << endl;
    return 0;
}
