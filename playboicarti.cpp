#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int secim, randsayi;
    int sayac=0;
    do
    {
    cout << "Tas = 1" << endl;
    cout << "Kagit = 2" << endl;
    cout << "Makas = 3" << endl;
    cout << "Seciniz 1/2/3 : ";
    cin >> secim;
    
    if (secim < 1 || secim > 3) {
        cout << "Gecersiz secim!" << endl;
        sayac++ ;
    }
    if(secim==randsayi)
    sayac++;
}while(sayac>0);

    srand(time(0));
    randsayi = rand() % 3 + 1; 

    cout << "Sistem secimi: ";
    switch (randsayi) {
        case 1:
            cout << "Tas" << endl;
            break;
        case 2:
            cout << "Kagit" << endl;
            break;
        case 3:
            cout << "Makas" << endl;
            break;
    }

    switch (secim) {
        case 1:
            if (randsayi == 1)
                cout << "Tasa sectiniz, sistem tas secti. BERABERLIK!" << endl;
            else if (randsayi == 2)
                cout << "Tasa sectiniz, sistem kagit secti. KAYBETTINIZ!" << endl;
            else
                cout << "Tasa sectiniz, sistem makas secti. KAZANDINIZ!" << endl;
            break;

        case 2:
            if (randsayi == 1)
                cout << "Kagit sectiniz, sistem tas secti. KAZANDINIZ!" << endl;
            else if (randsayi == 2)
                cout << "Kagit sectiniz, sistem kagit secti. BERABERLIK!" << endl;
            else
                cout << "Kagit sectiniz, sistem makas secti. KAYBETTINIZ!" << endl;
            break;

        case 3:
            if (randsayi == 1)
                cout << "Makas sectiniz, sistem tas secti. KAYBETTINIZ!" << endl;
            else if (randsayi == 2)
                cout << "Makas sectiniz, sistem kagit secti. KAZANDINIZ!" << endl;
            else
                cout << "Makas sectiniz, sistem makas secti. BERABERLIK!" << endl;
            break;
    }

    return 0;
}
