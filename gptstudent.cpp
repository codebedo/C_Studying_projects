#include <iostream>
#include <vector>

using namespace std;

// Öðrenci sýnýfý tanýmý
class Ogrenci {
public:
    // Constructor (kurucu)
    Ogrenci(string ad, int numara) : adi(ad), numarasi(numara) {}

    // Öðrenci bilgilerini ekrana yazdýran fonksiyon
    void bilgileriYazdir() const { // const eklendi
        cout << "Ad: " << adi << ", Numara: " << numarasi << endl;
    }

private:
    string adi;
    int numarasi;
};

int main() {
    // Öðrenci nesnelerini saklayacak vektör tanýmý
    vector<Ogrenci> ogrenciler;

    // Öðrenci nesneleri oluþturma ve vektöre ekleme
    ogrenciler.push_back(Ogrenci("Ali", 101));
    ogrenciler.push_back(Ogrenci("Ayþe", 102));
    ogrenciler.push_back(Ogrenci("Mehmet", 103));

    // Vektördeki tüm öðrencilerin bilgilerini yazdýrma
    cout << "Tum Ogrencilerin Bilgileri:" << endl;
    for (const Ogrenci& ogrenci : ogrenciler) {
        ogrenci.bilgileriYazdir();
    }

    return 0;
}

