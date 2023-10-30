#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, L, s, p;

    cout << "Do dai canh a= ";
    cin >> a;
    cout << "Do dai canh b= ";
    cin >> b;
    cout << "Do dai canh c= ";
    cin >> c;
    
    L = a + b + c;
    cout << "Chu vi L= " << L << endl;

    p = L / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << "Dien tich tam giac s= " << s << endl;

    if (a == b && b == c) {
        cout << "Tam giac deu" << endl;
    } else if (a == b || b == c || a == c) {
        if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            cout << "Tam giac vuong can" << endl;
        } else {
            cout << "Tam giac can" << endl;
        }
    } else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
        cout << "Tam giac vuong" << endl;
    } else {
        cout << "Tam giac thuong" << endl;
    }

    return 0;
}

