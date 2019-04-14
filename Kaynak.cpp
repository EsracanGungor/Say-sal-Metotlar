#include<iostream>
//Dosyadan okuma yazma islemi yapmak icin eklenmesi gereken kütüphane:
#include<fstream>
//Bu kod sadece 3 sayi oldugunda gecerlidir.
using namespace std;
int main() {
	//Dosya olusturma islemi
	ifstream dosya;
	int noktasayisi;
	double x0, y0, x1, y1, x2, y2,h;
	double turev1;//ilk sayi icin türev
	double turev2;/*ortadakiler icin türev ortadaki sayilar icin
				  hepsi tek tek hesaplanacagindan y0 degerlerinde kayma olur.
	*/double turev3;//son sayi icin türev
	double turevsonuc;
	dosya.open("veri.txt");
	//Dosyanin varliginin kontrolü
	if (!dosya) {
		cerr << "Dosya acilamadi!" << endl;
		exit(1);
	}
	while (!dosya.eof()) {//eof->dosya sonu gelene kadar oku 
		dosya>>noktasayisi;
		dosya >> x0 >> y0;//dosyadan satır satır değerleri okuyoruz.
		dosya >> x1 >> y1;
		dosya >> x2 >> y2;
	dosya.close();

	h = x1 - x0;//iki sayi arasindaki uzaklık

	turev1 = ((-3 * y0) + (4 * y1) - y2) / 2*h;//ilk sayi icin türev hesaplanmasi
	cout << "Ilk degerin turev sonucu    :"<<turev1<<endl;
	turev2 = (-y0 + y2) / 2 * h;//ortadaki sayilar icin genel türev formülü(sayi arttikca y0 y2'nin sayisal degeri degisir.)
	cout << "İkinci degerin turev sonucu :" << turev2<<endl;
	turev3 = (y0+ (- 4 * y1 )+( 3*y2)) / 2 * h;//son sayi icin türev hesaplanmasi
	cout << "Ucuncu degerin turev sonucu :" << turev3 << endl;
	turevsonuc = turev1 + turev2 + turev3;//hata payi olmadan formül
	cout << "Sonuc                       :" << turevsonuc << endl;
	}
			 

	system("pause");
	return 0;

}