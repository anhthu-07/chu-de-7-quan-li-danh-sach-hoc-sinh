#include "QuanLy.h"
#include <iostream>

using namespace std;


// Them hoc sinh vao vi tri
void QuanLy::themHocSinh() {

    if (danhSach.n >= 199) {
        cout << "Danh sach da day!\n";
        return;
    }

    int viTri;

    cout << "Nhap vi tri muon them (1 -> "
         << danhSach.n + 1 << "): ";

    cin >> viTri;

    if (viTri < 1 || viTri > danhSach.n + 1) {
        cout << "Vi tri khong hop le!\n";
        return;
    }

    // Dich cac hoc sinh sang phai
    for (int i = danhSach.n; i >= viTri; i--) {
        danhSach.ds[i] = danhSach.ds[i - 1];
    }

    cout << "\nNhap thong tin hoc sinh moi:\n";

    danhSach.ds[viTri - 1].nhap();

    danhSach.n++;

    cout << "Them hoc sinh thanh cong!\n";
}


// Xoa hoc sinh tai vi tri
void QuanLy::xoaHocSinh() {

    if (danhSach.n == 0) {
        cout << "Danh sach dang rong!\n";
        return;
    }

    int viTri;

    cout << "Nhap vi tri muon xoa (1 -> "
         << danhSach.n << "): ";

    cin >> viTri;

    if (viTri < 1 || viTri > danhSach.n) {
        cout << "Vi tri khong hop le!\n";
        return;
    }

    // Dich cac hoc sinh sang trai
    for (int i = viTri - 1; i < danhSach.n - 1; i++) {
        danhSach.ds[i] = danhSach.ds[i + 1];
    }

    danhSach.n--;

    cout << "Xoa hoc sinh thanh cong!\n";
}


// Menu chuong trinh
void QuanLy::menu() {

    int luaChon;

    do {

        cout << "\n\n========== QUAN LY HOC SINH ==========\n";
        cout << "1. Nhap danh sach hoc sinh\n";
        cout << "2. In danh sach hoc sinh\n";
        cout << "3. Sap xep DTB giam dan\n";
        cout << "4. Tim hoc sinh theo ma\n";
        cout << "5. Tim hoc sinh theo ho ten\n";
        cout << "6. Them hoc sinh vao vi tri\n";
        cout << "7. Xoa hoc sinh tai vi tri\n";
        cout << "0. Thoat\n";
        cout << "======================================\n";

        cout << "Nhap lua chon: ";
        cin >> luaChon;


        if (luaChon == 1) {

            danhSach.nhapDanhSach();

        }
        else if (luaChon == 2) {

            danhSach.inDanhSach();

        }
        else if (luaChon == 3) {

            sapXep.sapXep(danhSach);

        }
        else if (luaChon == 4) {

            timKiem.timTheoMa(danhSach);

        }
        else if (luaChon == 5) {

            timKiem.timTheoTen(danhSach);

        }
        else if (luaChon == 6) {

            themHocSinh();

        }
        else if (luaChon == 7) {

            xoaHocSinh();

        }
        else if (luaChon == 0) {

            cout << "Da thoat chuong trinh!\n";

        }
        else {

            cout << "Lua chon khong hop le!\n";
        }

    } while (luaChon != 0);
}