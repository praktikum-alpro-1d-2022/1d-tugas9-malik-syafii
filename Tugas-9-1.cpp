#include <iostream>
#include <string>
using namespace std;
void tentukan_zodiak();
// Deklarasi struktur untuk data zodiak
struct zodiak
{
string nama;
int tanggal_mulai;
int tanggal_selesai;
int bulan_mulai;
int bulan_selesai;
};

// Deklarasi variabel global
const int jumlah_zodiak = 12;
zodiak daftar_zodiak[jumlah_zodiak] =
{
{"AQUARIUS", 20, 18, 1, 2},         //Aquarius (20 Januari – 18 Februari)
{"PISCES", 19, 20, 2, 3},           //Pisces (19 Februari – 20 Maret)
{"ARIES", 21, 19, 3, 4},            //Aries (21 Maret – 19 April)
{"TAURUS", 20, 20, 4, 5},           //Taurus (20 April – 20 Mei)
{"GEMINI", 21, 20, 5, 6},           //Gemini (21 Mei – 20 Juni)
{"CANCER", 21, 22, 6, 7},           //Cancer (21 Juni – 22 Juli)
{"LEO", 22, 22, 7, 8},                //Leo (23 Juli – 22 Agustus)
{"VIRGO", 23, 22, 8, 9},            //Virgo (23 Agustus – 22 September)
{"LIBRA", 23, 22,9 ,10},            //Libra (23 September – 22 Oktober)
{"SCORPIO", 23, 21, 10, 11},        //Scorpio (23 Oktober – 21 November)
{"SAGITTARIUS", 22, 21, 11, 12 },   //Sagitarius (22 November – 21 Desember)
{"CAPRICORN", 22, 19, 12, 1},       //Capricorn (22 Desember – 19 Januari)
}; // Array untuk menyimpan data zodiak
int tanggal_lahir, bulan_lahir, tahun_lahir; // Variabel untuk menyimpan tanggal, bulan, dan tahun kelahiran

int main(){
    cout << "Silahkan masukkan tanggal_lahir, bulan_lahir, tahun_lahir" << endl;
    cout << "Tanggal : ";
    cin >> tanggal_lahir;
    cout << "Bulan : ";
    cin >> bulan_lahir;
    cout << "Tahun : ";
    cin >> tahun_lahir;
    cout << "Tanggal Lahir Anda [tgl-bln-tahun]: " << tanggal_lahir << "-" << bulan_lahir << "-" << tahun_lahir <<  endl;
    tentukan_zodiak();
    return 0;
}

// Fungsi untuk menentukan zodiak
void tentukan_zodiak()
{
    // Penentuan zodiak berdasarkan tanggal kelahiran
    for (int i = 0; i< jumlah_zodiak; i++)
        {
            if (bulan_lahir == daftar_zodiak[i].bulan_mulai)
            {
                if (tanggal_lahir >= daftar_zodiak[i].tanggal_mulai){
                    cout << "Zodiak Anda adalah: " << daftar_zodiak[i].nama << endl;
                }
                 
            }
            else if(bulan_lahir == daftar_zodiak[i].bulan_selesai)
            {
                if (tanggal_lahir <= daftar_zodiak[i].tanggal_selesai)
                {
                    cout << "Zodiak Anda adalah: " << daftar_zodiak[i].nama << endl;
                }
            }
        }
}

