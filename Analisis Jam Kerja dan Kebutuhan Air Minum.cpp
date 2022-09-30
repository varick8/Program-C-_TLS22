#include <iostream>
using namespace std;

int main()
{
    int jam_kerja;
    double air;

    cout << "Hai,gimana harimu? Udah berapa jam kamu bekerja hari ini?  " << endl;
    cin >> jam_kerja;
    cout << "jam" << endl
         << endl;

    if (jam_kerja >= 0 && jam_kerja < 4)
    {
        cout << "Wah!! Tau gak sih kalo jam kerja ideal manusia itu 8 jam per hari, jadi kamu masih punya  " << (8 - jam_kerja) << "  "
             << "jam lagi nih. Semangat produktif" << endl;
    }
    if (jam_kerja >= 4 && jam_kerja < 6)
    {
        cout << "Keren!! Kamu sudah setengah jalan, nih!! Yok  " << (8 - jam_kerja) << "  "
             << "jam lagi." << endl;
    }
    if (jam_kerja >= 6 && jam_kerja < 8)
    {
        cout << "Kerja yang bagus!! Kamu sudah termasuk produktif. Untuk informasi, kamu masih mempunyai  " << (8 - jam_kerja) << "  "
             << "jam lagi nih. Semangat!!" << endl;
    }
    if (jam_kerja == 8)
    {
        cout << "Kerja yang bagus!! Kamu sudah termasuk produktif." << endl;
    }
    if (jam_kerja > 8)
    {
        cout << "Waduh, kamu sudah melewati batas ideal jam kerja nih. Istirahat dulu yaa!!" << endl;
    }

    cout << endl;
    cout << "Ngomong-ngomong, udah berapa liter air yang kamu minum hari ini??" << endl;
    cin >> air;

    if (air < 2)
    {
        cout << "Okee, jangan lupa kamu masih perlu minum  " << (2 - air) << "  "
             << "liter lagi yaa." << endl;
    }
    if (air == 2)
    {
        cout << "Kerja bagus!!. Kamu sudah mencukupi kebutuhan tubuhmu akan mineral.";
    }
    if (air > 2)
    {
        cout << "Waduh, banyak juga ya. Hati-hati jangan sampai kembung yaa.";
    }

    return 0;
}