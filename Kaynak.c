#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<conio.h>
#include<math.h>
#define MAXCHAR 1000

/*Hocam dosya islemlerini hic derslerde görmedik bu yüzden sadece internetten arastirarak
bu kadarýný bulabildim char diziyle okudugumu nasýl float dizisine aktarabilecegimi bulamadim.
Bu yüzden lagrange metodunun hesaplanmasi ile dosyadan okuma kodlarini birlestiremedim.*/
int main() {
	float x[10], y[10], temp = 1, f[10], sum=0, p;
	int i, n, j, k = 0, c;
	
	FILE *fp;
	char str[MAXCHAR];
	fp = fopen("veri.txt", "r");
	
	if (fp = fopen("veri.txt", "r")) {
		while (fgets(str, MAXCHAR, fp) != NULL)
			printf("%s", str);//Dosyadaki degerleri ekrana yazdiriyor.
	}
	else {
		printf("Dosya bulunamadi!..");
	}
	/*Langrange metodu hesaplanmasi
	n dosyadan alinan kac nokta alinacagi bilgisi
	döngüyle x0 y0...xnyn bilgileri aliniyor
	p degeri ise bulunmasini istedigimiz ara degeri temsil ediyor.
	Bu kodlar kullanicidan deger aldiginda dogru hesaplamayi yapmistir. 

	printf("\nNokta sayisini giriniz: ");
	scanf("%d",&n);
	 for(i=0; i<n; i++)
		{
	 printf("\n\nX degerlerini girinizx%d: ",i);
	 scanf("%f",&x[i]);
	 printf("\n\nY degerlerini giriniz f(x%d): ",i);
	scanf("%f",&y[i]);
  }
	 printf("\n\nBulmak istediginiz ara degeri giriniz f(x): ");
	scanf("%f",&p);

	*/
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
	
	