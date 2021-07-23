#include <iostream.h>
#include <conio.h>

main ()
{
 int taban=0, tavan, tahmin, sonuc, deneme_sayisi=0;
 cout<<"0 ile kac arasinda sayi tutmak istersiniz:";
 cin>>tavan;
 do
 {
	 cout<<"Benim tahminim ";
	 tahmin=(taban+tavan)/2;
	 cout<<tahmin<<endl;
	 deneme_sayisi=deneme_sayisi+1;
	 cout<<"Tahminim sizin tuttugunuz sayidan kucuk ise 1,"<<endl;
	 cout<<"Tahminim sizin tuttugunuz sayidan buyuk ise 2,"<<endl;
	 cout<<"Tahminim sizin tuttugunuz sayiya esit ise 0 giriniz:"<<endl;
	 cin>>sonuc;
	 if(sonuc==1)
		taban=tahmin;
	 if(sonuc==2)
		tavan=tahmin;
 }
  while (sonuc!=0);
  cout<<"Aferin bana "<<deneme_sayisi<<" denemede buldum";

getch();
}

