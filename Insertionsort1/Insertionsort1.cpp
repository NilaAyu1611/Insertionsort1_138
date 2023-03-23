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


