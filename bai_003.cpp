#include <bits/stdc++.h>
using namespace std;

// Định nghĩa struct đa thức
 struct DaThuc { double a, b, c; };

// Hàm nhập đa thức
void nhap(DaThuc &p) {
cout << "Nhap he so a: ";
cin >> p.a; cout << "Nhap he so b: ";
cin >> p.b; cout << "Nhap he so c: ";
cin >> p.c; }

// Hàm xuất đa thức
void xuat(DaThuc p) {
cout << p.a << "x^2 ";
if (p.b >= 0) cout << "+ ";
cout << p.b << "x ";
if (p.c >= 0) cout << "+ ";
cout << p.c; }

// tổng hiệu tích hai đa thức
DaThuc tong(DaThuc p1, DaThuc p2) {
DaThuc kq;
kq.a = p1.a + p2.a;
kq.b = p1.b + p2.b;
kq.c = p1.c + p2.c;
return kq;
}

DaThuc hieu(DaThuc p1, DaThuc p2) {
DaThuc kq;
kq.a = p1.a - p2.a;
kq.b = p1.b - p2.b;
kq.c = p1.c - p2.c;
return kq; }

void tich(DaThuc p1, DaThuc p2) {
double A = p1.a * p2.a;
double B = p1.a * p2.b + p1.b * p2.a;
double C = p1.a * p2.c + p1.b * p2.b + p1.c * p2.a;
double D = p1.b * p2.c + p1.c * p2.b;
double E = p1.c * p2.c;

cout << A << "x^4 ";
if (B >= 0) cout << "+ ";
cout << B << "x^3 ";
if (C >= 0) cout << "+ ";
cout << C << "x^2 ";
if (D >= 0) cout << "+ ";
cout << D << "x ";
if (E >= 0) cout << "+ ";
cout << E;
}

// Hàm tính F(0) double giaTriF0(DaThuc p) { return p.c; }

int main() { DaThuc p1, p2;

cout << "Nhap da thuc thu nhat: "<<"\n";
nhap(p1);

cout << "Nhap da thuc thu hai: " << "\n";
nhap(p2);

cout << "\n"<<"Da thuc thu nhat: ";
xuat(p1);

cout << "\n"<<"Da thuc thu hai: ";
xuat(p2);

cout << "\n"<<"Tong hai da thuc: ";
xuat(tong(p1, p2));

cout << "\n"<<"Hieu hai da thuc: ";
xuat(hieu(p1, p2));

cout << "\n"<<"Tich hai da thuc: ";
tich(p1, p2);

cout << "\n"<<"Gia tri F(0) cua da thuc thu nhat: " << giaTriF0(p1) << endl;

return 0;
}
