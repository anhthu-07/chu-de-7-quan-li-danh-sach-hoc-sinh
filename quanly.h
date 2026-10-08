#ifndef QUANLY_H
#define QUANLY_H

#include "DanhSachHocSinh.h"
#include "SapXepHocSinh.h"
#include "TimKiemHocSinh.h"

class QuanLy {
public:
    DanhSachHocSinh danhSach;
    SapXepHocSinh sapXep;
    TimKiemHocSinh timKiem;

    void themHocSinh();
    void xoaHocSinh();
    void menu();
};

#endif