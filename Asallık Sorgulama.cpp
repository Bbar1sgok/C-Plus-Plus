#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>
using namespace std;

int main()
{  
          // Yerel Dil Tanımlaması
      setlocale(LC_ALL, "Turkish");

    // ASALLIK SORGULAMA

       
      
      int girilenSayi, i;
      bool asal = true;
      
      cout << "Lütfen kontrol etmek istediğiniz sayıyı giriniz:  " << endl << endl;
      
      // Hatalı giriş kontrolü
      while (true) {
          cin >> girilenSayi;
          if (cin.fail() || girilenSayi <= 0) {
              cout << "Lütfen geçerli bir tam sayı giriniz: " << endl;
              cin.clear(); 
              cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
          }
          else {
              break; 
          }
      }
      
      if (girilenSayi <= 1) {
          cout << girilenSayi << " asal sayı değildir." << endl;
      }
      else {
          for (i = 2; i <= girilenSayi / 2; i++) {
              if (girilenSayi % i == 0) {
                  asal = false;
                  break;
              }
          }
      
          if (asal)
              cout << girilenSayi << " asal sayıdır." << endl;
         
      }
    

    return 0;

}
