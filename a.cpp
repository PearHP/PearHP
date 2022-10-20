#include<iostream>

using namespace std;

class PhanSo{

int tuso;
int mauso;


public:
    void NhapPhanSo()
    {
    cout << "Moi nhap tu so: ";
    cin >> tuso;
    cout << "Moi nhap mau so: ";
    cin >> mauso;
    }

    void XuatPhanSo();
    };

    void PhanSo::XuatPhanSo()
    {
    cout << "Tu so: " << tuso << endl;
    cout << "Mau so: " << mauso << endl;
    }
int main(){

    PhanSo a;

    a.NhapPhanSo();
    return 0;
}
