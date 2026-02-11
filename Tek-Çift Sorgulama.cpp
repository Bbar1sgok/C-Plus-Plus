#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
       
    // Yerel Dil Tanımlaması
    setlocale(LC_ALL, "Turkish");
  
     // GIRILEN SAYININ TEK YA DA CIFT OLDUGUNU BELIRLEME

 while (true)
 {
     int girilenSayi, sayininModu;
     char cikis;

     cout << "Sayının tek mi çift mi olduğunu belirleme aracı: " << endl << endl;
     cout << "Lütfen sorgulamak istediğiniz sayıyı giriniz: " << endl;

     cin >> girilenSayi;

     if (cin.fail()) {

         cout << "Lütfen pozitif bir tam sayı giriniz:" << endl << endl;
         cin.clear();
         cin.ignore(INT_MAX, '\n');
         continue;

     }

     sayininModu = girilenSayi % 2;

     if (sayininModu == 1)
     {
         cout << "Girilen sayı tek sayıdır: " << girilenSayi << endl;
     }
     else
     {
         cout << "Girilen sayı çift sayıdır: " << girilenSayi << endl;
     }

     cout << "Başka sayı sorgulamak ister misiniz: (e/h)" << endl << endl;
     cin >> cikis;

     if (cikis == 'h' || cikis == 'H') {

         cout << "Çıkış yapıldı...";
         break;

     }
 }
  
  return 0 ;
}
