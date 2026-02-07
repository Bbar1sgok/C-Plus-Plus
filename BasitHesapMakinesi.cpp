#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
       
    // Yerel Dil Tanımlaması
    setlocale(LC_ALL, "Turkish");

     // BASIC HESAP MAKINESI

 while (true)
 {

     double sayi1, sayi2, sonuc;
     char islem,cikis;

     cout << " ****** Basit Hesap Makinesi Aracı ******" << endl << endl;
    
 
     cout << "Lütfen işleme dahil etmek isteğiniz ilk sayıyı giriniz" << endl;
     cin >> sayi1;

     if (cin.fail()) {

         cout << "Lütfen rakam olarak giriş yapınız";
         cin.clear();
         cin.ignore(INT_MAX, '\n');
         continue;
 
     }
 
     cout << "Lütfen işleme dahil etmek isteğiniz ikinci sayıyı giriniz" << endl;
     cin >> sayi2;

     if (cin.fail()) {

         cout << "Lütfen rakam olarak giriş yapınız";
         cin.clear();
         cin.ignore(INT_MAX, '\n');
         continue;

     }


     cout << "Lütfen yapmak istediğiniz işlemi seçiniz"<< endl << endl;
     cout << " 1-> Toplama  / " << " 2-> Çıkarma " << endl << " 3-> Bölme  / " << " 4-> Çarpma " << endl << " 5-> Üssünü Alma  / " << " 6-> Karekökleri toplamı " << endl << " 7-> Mutlak Değerleri Toplamı" << endl << endl;
     cin >> islem;
     


     switch (islem)
     {   

         // Toplama
         case '1': {
             
             cout << "Toplama işleminin sonucu: " << sayi1 + sayi2 << endl;
             break;

         }

         // Çıkarma
         case '2': {

             cout << "Çıkarma işleminin sonucu: " << sayi1 - sayi2 << endl;
             break;

         }
         
         // Bölme
         case '3': {

             if (sayi2 != 0) {

                 cout << "Bölme işleminin sonucu: " << sayi1 / sayi2 << endl;
                 break;

             }
             else if (sayi1 != 0) {

                 cout << "Bölme işleminin sonucu: " << sayi2 / sayi1 << endl;
                 break;

             }
             else if (sayi1 == 0 && sayi2 == 0) {

                 cout << " 0/0 Matematiksel olarak belirsizlik doğurur" << endl;
                 break;

             }
             else {

                 cout << "0 / (0 harici bir tam sayı), matematiksel olarak tanımsızlık doğurur" << endl;
                 break;

             }

         }
         
         // Çarpma
         case '4': {

             cout << "Çarpma işleminin sonucu: " << sayi1 * sayi2 << endl;
             break;

         }

         // Üssünü Alma
         case '5': {

             cout << "üs alma işleminin sonucu: " << pow(sayi1,sayi2) << endl;
             break;

         }

         // Karekökleri toplamı
         case '6': {

             cout << "Karekökleri toplamı sonucu: " << sqrt(sayi1) + sqrt(sayi2) << endl;
             break;

         }
         
         // Mutlak Değerleri Toplamı
         case '7': {

             cout << "Mutlak değerleri toplamı sonucu: " << abs(sayi1) + abs(sayi2) << endl;
             break;

         }
         
         default:
             cout << "Hata: Geçersiz işlem seçimi! Lütfen geçerli bir işlem seçin." << endl;
             break;
     
     }

     cout << "Başka hesaplama yapmak ister misiniz: (e/h)" << endl << endl;
     cin >> cikis;

     if (cikis == 'h' || cikis == 'H') {

         cout << "Çıkış yapıldı";
         break;

     }

 }


}
