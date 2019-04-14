#include<iostream>
#include<math.h>
#define TOL 0.001 //Tolerans degeri

using namespace std;

double fonksiyon(double x)    //fonksiyonun tanimi
{
	double a = exp(x) + pow(2, -x) + 2 * cos(x) - 6;
	return a;
}

double fonkturevi(double x)
{
	double b = exp(x) - (pow(2, -x)*log(2)) - 2 * sin(x); //fonksiyonun birinci turevi alinir.
	return b;
}

void newtonraphson(double x)
{
	double h = fonksiyon(x) / fonkturevi(x);
	while (abs(h) >= TOL)
	{
		h = fonksiyon(x) / fonkturevi(x);
		//Newton raphson metod formülü
		// x(i+1) = x(i) - f(x) / f'(x)  
		x = x - h;
	}

	cout << "Fonksiyonun sonucu :" << x<<endl;
}
int main() {
	
	cout << "Fonksiyon        :e^2-2^-x+2cosx-6 " << endl;

	double p0= exp(1.5) + pow(2, -1.5) + 2 * cos(1.5) - 6;
	newtonraphson(p0);
	
	system("pause");
	return 0;
}
