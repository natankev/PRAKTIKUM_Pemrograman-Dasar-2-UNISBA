#include <iostream>
using namespace std;

int main() {
    int data[] = { 11, 12, 13, 14, 15 };

    int ukuranArray = sizeof(data);
    int ukuranElemen = sizeof(data[0]);
    int jumlahElemen = ukuranArray / ukuranElemen;

    cout << "Ukuran array : " << ukuranArray << " byte" << endl;
    cout << "Ukuran satu elemen : " << ukuranElemen << " byte" << endl;
    cout << "Jumlah elemen array: " << jumlahElemen << endl;

    return 0;
}
