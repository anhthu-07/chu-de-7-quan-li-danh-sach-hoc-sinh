#include "TimKiemHocSinh.h"
#include <iostream>
#include <string>

using namespace std;

// Tim theo ma hoc sinh
void TimKiemHocSinh::timTheoMa(DanhSachHocSinh &dshs) {

    string ma;

    cout << "Nhap ma hoc sinh can tim: ";
    cin >> ma;

    for (int i = 0; i < dshs.n; i++) {

        if (dshs.ds[i].maHS == ma) {

            cout << "\nTim thay hoc sinh:\n";

            dshs.ds[i].xuat();

            return;
        }
    }

    cout << "Khong tim thay hoc sinh co ma " << ma << "!\n";
}


// Tim theo ho ten
void TimKiemHocSinh::timTheoTen(DanhSachHocSinh &dshs) {

    string ten;

    cin.ignore();

    cout << "Nhap ho ten can tim: ";
    getline(cin, ten);

    bool timThay = false;

    for (int i = 0; i < dshs.n; i++) {

        if (dshs.ds[i].hoTen == ten) {

            if (!timThay) {
                cout << "\nCac hoc sinh tim thay:\n";
            }

            dshs.ds[i].xuat();

            timThay = true;
        }
    }

    if (!timThay) {
        cout << "Khong tim thay hoc sinh co ho ten " << ten << "!\n";
    }
}