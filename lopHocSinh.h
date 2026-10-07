#ifndef HOCSINH_H
#define HOCSINH_H

#include <string>

using namespace std;

class HocSinh {
public:
    string maHS;
    string hoTen;
    string lop;
    float diemToan;
    float diemVan;
    float diemAnh;
    float diemTB;
    string xepLoai;

    void nhap();
    void tinhDiemTB();
    void xepLoaiHocLuc();
    void xuat();
};

#endif