#ifndef DANHSACHHOCSINH_H
#define DANHSACHHOCSINH_H

#include "HocSinh.h"

class DanhSachHocSinh {
public:
    HocSinh ds[200];
    int n;

    DanhSachHocSinh();

    void nhapDanhSach();
    void inDanhSach();
};

#endif