#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
       
    // Yerel Dil Tanımlaması
    setlocale(LC_ALL, "Turkish");

    int girilenSayi, toplam = 0, i;

cout << "Lütfen hesaplamak istediğiniz sayıyı giriniz: " << endl;

// Hatalı giriş kontrolü
while (true) {
    cin >> girilenSayi;
    if (cin.fail()) {
        cout << "Lütfen geçerli bir tam sayı giriniz: " << endl;
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    }
    else {
        break; 
    }
}

for (i = 1; i < girilenSayi; i++) {
    if ((girilenSayi % i) == 0) {
        toplam += i;
    }
}

if (toplam == girilenSayi)
cout << "Girilen " << girilenSayi << " sayısı mükemmel sayıdır." << endl;
else
cout << "Girilen " << girilenSayi << " sayısı mükemmel sayı değildir." << endl;


  return = 0;
}
