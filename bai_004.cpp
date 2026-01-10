#include <bits/stdc++.h>
using namespace std;

struct ThoiGian {
int gio; int phut; int giay;
};

// Hàm nhập thời gian
void nhap(ThoiGian &t) {
cout << "Nhap gio: ";
cin >> t.gio;
cout << "Nhap phut: ";
cin >> t.phut;
cout << "Nhap giay: ";
cin >> t.giay; }

// Hàm xuất thời gian
void xuat(ThoiGian t) {
if (t.gio < 10) cout << "0";
cout << t.gio << ":";

if (t.phut < 10) cout << "0";
cout << t.phut << ":";

if (t.giay < 10) cout << "0";
cout << t.giay;
}

// Hàm cộng thêm thời gian
ThoiGian cong(ThoiGian t, int x, int y, int z) {
t.giay += z;
t.phut += y + t.giay / 60;
t.giay %= 60;

t.gio += x + t.phut / 60;
t.phut %= 60;

t.gio %= 24;

return t;
}

int main() { ThoiGian t; int x, y, z;

cout << "Nhap thoi diem hien tai: "<<"\n";
nhap(t);

cout <<"\n"<<"Nhap so gio can cong: ";
cin >> x;
cout << "Nhap so phut can cong: ";
cin >> y;
cout << "Nhap so giay can cong: ";
cin >> z;

ThoiGian T = cong(t, x, y, z);

cout << "\n"<<"Thoi gian sau khi cong: ";
xuat(T);

return 0;
}
