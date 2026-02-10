#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
      // Yerel Dil Tanımlaması
   setlocale(LC_ALL, "Turkish");

   // Kdvsiz fiyatı ve kdv oranı verilen ürünün kdv sini ve satış fiyatını hesaplama
   
   float temelfiyat, kdvOrani, sonFiyat, kdvtutarı;
   char devamMi;

   while (true) {

       cout << "Kdv tutarını ve kdv li  fiyatını hesaplama aracı (Rakam olarak giriş yapınız):" << endl << endl;

       cout << "Lütfen ürünün temel fiyatını giriniz: " << endl;
       cin >> temelfiyat;

       if (cin.fail()) {

           cout << "Lütfen rakam giriniz, sayı veya farklı bir sembol değil: " << endl << endl;
           cin.clear();
           cin.ignore(INT_MAX, '\n');
           continue;

       }

       cout << " Lütfen ürünün kdv oranını giriniz: " << endl;
       cin >> kdvOrani;

       if (cin.fail()) {

           cout << "Lütfen rakam giriniz, sayı veya farklı bir sembol değil" << endl << endl;
           cin.clear();
           cin.ignore(INT_MAX, '\n');
           continue;

       }

       if (temelfiyat > 0 && kdvOrani >= 0) {

           kdvtutarı = temelfiyat * kdvOrani / 100;
           sonFiyat = temelfiyat + kdvtutarı;
        
           cout << " Girmiş olduğunuz ürünün kdv tutarı: " << kdvtutarı << " birimdir." << endl;
           cout << "Girmiş olduğunuz ürünün kdv li fiyatı: " << sonFiyat << " birimdir." << endl;
       

       }

       cout << "başka ürün hesaplamak ister misiniz ? (e / h)" << endl;
       cin >> devamMi;

       if (devamMi == 'h' || devamMi == 'H') {

           cout << "çıkış yapıldı.";
           break;

       }

   }

  return 0;      
   
}
