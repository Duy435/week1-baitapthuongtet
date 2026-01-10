#include <bits/stdc++.h>
using namespace std;

// Hàm cộng double cong(double a, double b) { return a + b; }

// Hàm trừ double tru(double a, double b) { return a - b; }

// Hàm nhân double nhan(double a, double b) { return a * b; }

// Hàm chia double chia(double a, double b) { if (b == 0) { cout << "Khong the chia cho 0" << endl; return 0; } return a / b; }

int main() { double a, b;

cout << "Nhap so thu nhat: ";
cin >> a;

cout << "Nhap so thu hai: ";
cin >> b;

cout << "Cong: " << cong(a, b) << endl;
cout << "Tru: " << tru(a, b) << endl;
cout << "Nhan: " << nhan(a, b) << endl;
cout << "Chia: " << chia(a, b) << endl;

return 0;
}
