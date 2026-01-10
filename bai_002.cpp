#include <bits/stdc++.h>
using namespace std;

//Định nghĩa struct tên thứ
string tenThu(int ngay) {
switch (ngay) {
case 0: return "Chu Nhat";
case 1: return "Thu Hai";
case 2: return "Thu Ba";
case 3: return "Thu Tu";
case 4: return "Thu Nam";
case 5: return "Thu Sau";
case 6: return "Thu Bay";
default: return "Khong hop le";
}
}

int main() { int thu, x;

cout << "Nhap thu hien tai: ";
cin >> thu;

cout << "Nhap so ngay can cong them: ";
cin >> x;

int thuMoi = (thu + x) % 7;

cout << "Sau " << x << " ngay la: " << tenThu(thuMoi) << endl;

return 0;
}
