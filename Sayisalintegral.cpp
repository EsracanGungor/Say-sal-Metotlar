#include<iostream>
#include<math.h>//e sayisi icin ekledim.
using namespace std;
//fonk:e uzeri x ve araligimiz:0-4 hata payi dikkate alinmamistir.
//hata payi icin e uzeri x in 2.dereceden turevi alinir
int main() {
	 
	cout << "f(x)=e^x=exp(x)" << endl << "Integralin hesaplanacagi aralik 0-4" << endl;
	//Trapez kuralina gore integral hesaplama
	double h;
	double  x0 = 0, x1 = 4;
	double y0 = exp(0), y1 = exp(4);
	h = (x1 - x0) / 1;//x1 araligin ust degeri x0 ise alt degeridir.n=1
	double trapezsonuc =( h/2)*(y0 + y1)-(h*h*h/12*exp(2.3));//sondaki hata payidir ve aralik arasinda bir deger secilir.
	cout << "Trapez kurali ile bulunan sonuc     :" << trapezsonuc << endl;
	
	//Simpson kuralina gore integral hesaplama
	double xsimp0 = 0, xsimp1 = 2, xsimp2 = 4;
	double ysimp0 = exp(0), ysimp1 = exp(2), ysimp2 = exp(4);
	h = (xsimp2 - xsimp0) / 2;//n=2
	double simpsonsonuc;
	simpsonsonuc = (h / 3)*(ysimp0 + 4 * ysimp1 + ysimp2);
	cout << "Simpson kurali ile bulunan sonuc    :" << simpsonsonuc << endl;

	//Simpson'un 3/8 kuralina gore integral hesaplama
	double xs0 = 0, xs1 = 1.3333, xs2 = 2.6666,xs3=4;
	double ys0 = exp(0), ys1 = exp(1.3333), ys2 = exp(2.6666), ys3 = exp(4);
	h = (xs3 - xs0) / 3;//n=3 
	double ssonuc;
	ssonuc = (3*h / 8)*(ys0+(3*ys1)+(3*ys2)+ys3);
	cout << "Simpson 3/8 kurali ile bulunan sonuc:" << ssonuc << endl;
	
	//Boole kuralina gore integral hesaplama
	double xb0 = 0, xb1 = 1, xb2 = 2, xb3 = 3,xb4=4;
	double yb0 = exp(0), yb1 = exp(1), yb2 = exp(2), yb3 = exp(3),yb4=exp(4);
	h = (xb4 - xb0) /4;//n=4
	double sbonuc;
	sbonuc = ((2 * h) / 45)*((7*yb0 )+( 32 * yb1) + (12 * yb2) + (32*yb3)+(7*yb4));
	cout << "Boole kurali ile bulunan sonuc      :" << sbonuc << endl;
	system("Pause");
	return 0;
}
