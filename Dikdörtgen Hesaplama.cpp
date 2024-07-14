#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    // Yerel Dil Tanımlaması
    setlocale(LC_ALL, "Turkish");

     // kenarları verilen dindörtgenin alanını ve çevresini hesaplama

 float uzunKenar, kisaKenar, alan, cevre;
 char cikis;

 while (true) {
     
     cout << " Kenarları verilen diktörtgenin alanını ve çevresini hesaplama uygulaması: " << endl << endl;

     cout << "Lütfen dikdörtgenin uzun kenarını giriniz: " << endl;
     cin >> uzunKenar;

     if (cin.fail()) {
         cout << "Lütfen sayıları rakam olarak giriniz yazı olarak değil" << endl;
         cin.clear(); // Hata bayraklarını temizle
         cin.ignore(INT_MAX, '\n'); // Girdi akışını temizle
         continue;
     }

     cout << "Lütfen dikdörtgenin kısa kenarını giriniz: " << endl;
     cin >> kisaKenar;

     if (cin.fail()) {
         cout << "Lütfen sayıları rakam olarak giriniz yazı olarak değil" << endl;
         cin.clear();
         cin.ignore(INT_MAX, '\n');
         continue;
     }

     // Kenar uzunluklarını 0 dan büyük mü diye kontrol etme

     if ((uzunKenar > 0 && kisaKenar > 0) && (uzunKenar >= kisaKenar)) {

         //  Karede bir dikdörtgen olduğu için eşitliğide kabul ediyoruz

         alan = kisaKenar * uzunKenar;
         cevre = 2 * (kisaKenar + uzunKenar);

         cout << "Girmiş olduğnuz bilgilere göre dikdörtgenin alanı: " << alan << endl;
         cout << "Girmiş olduğnuz bilgilere göre dikdörtgenin çevresi: " << cevre << endl;
        

     }

     cout << "Çıkmak ister misiniz ? (e/h)" << endl;
     cin >> cikis;

     if (cikis == 'h' || cikis == 'H') {

         cout << "çıkış yapıldı.";
         break;

     }

 }   
    
    
}
    
