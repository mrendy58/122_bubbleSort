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

    for (int i = 0; i < n; i++) {                 // looping dengan i dimulai dari 0 hingga n-1
        cout << "Data ke- " << (i + 1) << ":";    // output ke layar
        cin >> a[i];                              //input dari pengguna
    }
}
void bubbleSortArray() {                        //procedur untuk mengurutkan array dengan metode bubble sort
    for (int i = 1; i < n; i++) {               // looping dengan 1 dimulai dari hingga n-1
        for (int j = 0; j < n - i;j++) {        // looping dengan j dimulai dari 0 hingga n-i-1
            if (a[j] > a[j + 1]) {              // jika nilai pada a[j] lebih besar dari a[j+1]
                int temp = a[j];                // simpan nilai a[j] ke variabel sementra temp
                a[j] = a[j + 1];                // Assign nilai a[j+1] ke a[j]
                a[j + 1] = temp;                // Assign nilai temp ke a[j+1]
            }
        }
    }
}

void unsorted() {
    cout << endl;                              //output baris kosong
    cout << "==================================" << endl;  //output ke layar
    cout << "Element Array yang telah tersusun" << endl;  //output ke layar
    cout << "==================================" << endl; //output ke layar
    for (int j = 0; j < n; j++) {               //looping dengan j dimulai dari 0 hingga n-1
        cout << a[j] << endl;                   // output ke layar
    }
    cout << endl;
}

void display() {                            //procedur untuk menampilkan hasil
    cout << endl;                          //output ke layar
    cout << "=================================" << endl; //output ke layar
    cout << "Element Array yang telah tersusun" << endl; // output ke layar
    cout << "=================================" << endl; // output ke layar
    for (int j = 0; j < n; j++) {          // looping dari j dimulai 0 hingga n-1
        cout << a[j] << endl;              // output ke layar
    }
    cout << endl;                          // output baris kosong
}
int main() {                            
    input();                           // memanggil procedur read()
    unsorted();                        //memanggil prosedur unsorted()
    bubbleSortArray();                // memanggil prosedur bubbleSortArray()
    display();                        // memanggil prosedur display()


    return 0;
}
