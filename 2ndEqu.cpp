#include <iostream>
#include <math.h>
using namespace std;

 int main(){
    double a, b, c, res;
    cin >> a >> b >> c;
    if (a == 0){
        if ((b == 0) && (c == 0)) {
            cout << "INFINITIVE SOLUTION" << endl;
        }
        else if ((b == 0) && (c != 0)) {
            cout << "NO SOLUTION" << endl;
        }
        else{
            res = -c/b;
            cout << res << endl;
        }
    }
    else {
        double dta = pow(b, 2)  - 4 * a * c;
        if (dta < 0) {
            cout << "NO SOLUTION" << endl;
        }
        else if (dta == 0) {
            res = -b/(2 * a);
            cout << res << endl;
        }
        else if (dta > 0) {
            double x1, x2;
            x1 = ((-b + sqrt(dta))/(2 * a));
            x2 = ((-b - sqrt(dta))/(2 * a));
            cout << x1 << " " << x2 << endl;
        }
    }
    return 0;
 }