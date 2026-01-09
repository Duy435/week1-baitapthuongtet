# bai_001 
#include <bits/stdc++.h>
using namespace std;

// Hàm cộng
double cong(double a, double b) {
    return a + b;
}

// Hàm trừ
double tru(double a, double b) {
    return a - b;
}

// Hàm nhân
double nhan(double a, double b) {
    return a * b;
}

// Hàm chia
double chia(double a, double b) {
    if (b == 0) {
        cout << "Khong the chia cho 0" << endl;
        return 0;
    }
    return a / b;
}

int main() {
    double a, b;

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
# bai_002
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

int main() {
    int thu, x;

    cout << "Nhap thu hien tai: ";
    cin >> thu;

    cout << "Nhap so ngay can cong them: ";
    cin >> x;

    int thuMoi = (thu + x) % 7;

    cout << "Sau " << x << " ngay la: " << tenThu(thuMoi) << endl;

    return 0;
}
# bai_003
#include <bits/stdc++.h>
using namespace std;

// Định nghĩa struct đa thức
struct DaThuc {
    double a, b, c;
};

// Hàm nhập đa thức
void nhap(DaThuc &p) {
    cout << "Nhap he so a: ";
    cin >> p.a;
    cout << "Nhap he so b: ";
    cin >> p.b;
    cout << "Nhap he so c: ";
    cin >> p.c;
}

// Hàm xuất đa thức
void xuat(DaThuc p) {
    cout << p.a << "x^2 ";
    if (p.b >= 0) cout << "+ ";
    cout << p.b << "x ";
    if (p.c >= 0) cout << "+ ";
    cout << p.c;
}

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
    return kq;
}

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

// Hàm tính F(0)
double giaTriF0(DaThuc p) {
    return p.c;
}

int main() {
    DaThuc p1, p2;

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
# bai_004
#include <bits/stdc++.h>
using namespace std;

struct ThoiGian {
    int gio;
    int phut;
    int giay;
};

// Hàm nhập thời gian
void nhap(ThoiGian &t) {
    cout << "Nhap gio: ";
    cin >> t.gio;
    cout << "Nhap phut: ";
    cin >> t.phut;
    cout << "Nhap giay: ";
    cin >> t.giay;
}

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

int main() {
    ThoiGian t;
    int x, y, z;

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

