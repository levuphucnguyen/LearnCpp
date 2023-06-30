#include <iostream>
//abs(n) : tri tuyet doi
//pow(a, b): a ^ b
//sqrt(n): can bac hai
//round(n): lam tron so
using namespace std;

int main (){
    unsigned int nam;
    unsigned int thang;
    cout << "Nhap so thang: ";
    cin >> thang;
    cout << "Nhap so nam: ";
    cin >> nam;
    if ((thang == 1) || (thang == 3) || (thang == 5) || (thang == 7) || (thang == 8) || (thang == 10) || (thang == 12)) {
        cout << "Thang do co 31 ngay\n";
    }
    else if ((thang == 4) || (thang == 6) || (thang == 9) || (thang == 11)) {
        cout << "Thang do co 30 ngay\n";
    }
    else if (thang == 2) {
        if (nam % 4 == 0) {
            if ((nam % 100 == 0) && (nam % 400 != 0)) {
                cout << "Thang do co 28 ngay\n";
            }
            else {
                cout << "Thang do co 29 ngay\n";
            }
        }
        else {
            cout << "Thang do co 28 ngay\n";
        }
    } else {
        cout << "Du lieu khong hop le\n";
    }
    return 0;
}