#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<conio.h>
#include<math.h>
#define MAXCHAR 1000

//Lagrange İnterpolasyonu
int main() {
	}
	/*Langrange metodu hesaplanmasi
	n dosyadan alinan kac nokta alinacagi bilgisi 
	p degeri ise bulunmasini istedigimiz ara degeri temsil ediyor.
	Bu kodlar kullanicidan deger aldiginda dogru hesaplamayi yapmistir.
*/
	printf("Nokta sayisini giriniz         : ");
	scanf("%d",&n);
	 for(i=0; i<n; i++)
		{
	 printf("\nX degerlerini giriniz x%d   : ",i);
	 scanf("%f",&x[i]);
	 printf("\nY degerlerini giriniz f(x%d): ",i);
	scanf("%f",&y[i]);
  }
	 printf("\nBulmak istediginiz ara degeri giriniz f(x): ");
	scanf("%f",&p);

	
for (i = 0; i < n; i++)
	{
		temp = 1;
		k = i;
		for (j = 0; j < n; j++)
		{
			if (k == j)
			{
				continue;
			}
			else
			{
				temp = temp * ((p - x[j]) / (x[k] - x[j]));
			}
		}
		f[i] = y[i] * temp;
	}

	for (i = 0; i < n; i++)
	{
		sum = sum + f[i];
	}
	printf("\n\n f(%.1f) = %f ", p, sum);

	_getch();
	fclose(fp);
	return 0;
}
	
	
