#include <iostream>
#include <cmath> // Karekök (sqrt) fonksiyonu için gerekli
 
using namespace std;
 
int main() {
    double a, b, c, delta, x1, x2;
 
    cout << "--- Ikinci Dereceden Denklem Kok Bulma Programi ---" << endl;
    cout << "ax^2 + bx + c = 0 formundaki denklem icin katsayilari giriniz." << endl;
 
    // 1. Kullanicidan katsayilarin alinmasi
    cout << "a katsayisini giriniz: ";
    cin >> a;
    cout << "b katsayisini giriniz: ";
    cin >> b;
    cout << "c katsayisini giriniz: ";
    cin >> c;
 
    // a sifir olamaz, eger olursa denklem birinci dereceden olur
    if (a == 0) {
        cout << "Hata: 'a' katsayisi 0 olamaz (Denklem ikinci dereceden olmaz)." << endl;
        return 0;
    }
 
    // 2. Diskriminant (Delta) hesaplanmasi
    delta = pow(b, 2) - (4 * a * c);
    cout << "\nDiskriminant (Delta): " << delta << endl;
 
    // 3. Diskriminant degerine gore koklerin kontrolu
    if (delta < 0) {
        // Delta < 0 durumu
        cout << "Sonuc: Delta < 0 oldugu icin gercek kok yoktur." << endl;
    } 
    else if (delta == 0) {
        // Delta = 0 durumu
        x1 = -b / (2 * a);
        cout << "Sonuc: Delta = 0 oldugu icin tek bir gercek kok (cakisik kok) vardir." << endl;
        cout << "Kok x1 = x2 = " << x1 << endl;
    } 
    else {
        // Delta > 0 durumu
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Sonuc: Delta > 0 oldugu icin iki farkli gercek kok vardir." << endl;
        cout << "Kok 1 (x1): " << x1 << endl;
        cout << "Kok 2 (x2): " << x2 << endl;
    }
 
    return 0;
}
 
