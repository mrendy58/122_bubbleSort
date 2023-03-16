#include <iostream>
using namespace std;


int a[20];                     // Deklarasi array a dengan ukuran 20
int n;                         // Deklarasi variable n untuk menyimpan banyaknya elemen pada array

void input() {                 // Procedur untuk input
    while (true) {             // Looping
        cout << "Masukan banyaknya elemen pada array : ";  // output ke layar
        cin >> n;              // input dari pengguna
        if (n <= 20)           // jika n kurang dari atau sama dengan 20
            break;             // keluar dari loop
        else {                 // jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";    // output ke layar
        }
    }
    cout << endl;                                  // output baris kosong
    cout << "=====================" << endl;      // output ke layar
    cout << "Masukan Elemen Array" << endl;       // output ke layar
    cout << "=====================" << endl;      // output ke layar

    for (int i = 1; i < n; i++) {                 // looping dengan i dimulai dari 0 hingga n-1
        cout << "Data ke- " << (i + 1) << ":";    // output ke layar
        cin >> a[i];                              //input dari pengguna
    }
}
int main()                   
{
    std::cout << "Hello World!\n";
}
