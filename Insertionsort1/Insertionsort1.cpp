#include <iostream>
using namespace std;

int arr[20];         // Membuat array dengan panjang data 20
int n;

void input()
{   // Procedure Input
    while (true)
    {
        cout << "Masukkan Jumlah Data pada Array : ";   // Mmebuaut inputan jumlah elemnet Array
        cin >> n;                                       // Memanggil variabel inputan n

        if (n <= 20)
        {   // Mmebuat kondisi n tidak lebih dari 20
            break;

        }
        else
        {
            cout << "\nArray yang anda masukkan maksimal 20 elemen. \n";    // Menampilkan pesan jika data lebih dari 20
        }
    }
    cout << endl;                               // Membuat jarak per baris program
    cout << "======================" << endl;    // Mmembuat tampilan susunan data elemen array
    cout << "Masukkan Element Array" << endl;
    cout << "======================" << endl;

    for (int i = 0; i < n; i++)         // Menggunakan perulangan for untuk menyimpan data pada array
    {
        cout << "Data ke-" << (i + 1) << "; ";  // Memasukkan atau menginputkan nilai data n
        cin >> arr[i];                          // Memasukkan nilai data n kedalam Array arr

    }




