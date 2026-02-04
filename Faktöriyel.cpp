#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
       
// Yerel Dil Tanımlaması
setlocale(LC_ALL, "Turkish");

int girilenSayi;
unsigned long long sonuc = 1; // Faktöriyel büyük sayılara ulaşabileceği için unsigned long long kullanıldı

while (true) {
    cout << "Lütfen faktöriyelini almak istediğiniz tam sayıyı giriniz: ";
    cin >> girilenSayi;

    // Hatalı giriş kontrolü
    if (cin.fail()) {
        cout << "Lütfen geçerli bir tam sayı giriniz." << endl;
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    }
    else {
        break; 
    }
}

if (girilenSayi >= 0) {
    if (girilenSayi == 0) {
        sonuc = 1;
    }
    else {
        for (int i = 1; i <= girilenSayi; ++i) {
            sonuc *= i;
        }
    }
    cout << "Girilen sayının faktöriyeli: " << sonuc << endl;
}
else {
    cout << "Lütfen 0 ve 0'dan büyük bir tam sayı giriniz" << endl;
}
  
 return 0; 
}
