#include <iostream>
#include <string>
#include "Desery.h"
#include "Paragon.h"

using namespace std;

Desery LodywKubeczku("Lody w kubeczku", 2.99);
Desery LodywWafelku("Lodu w wafelku", 2.50);
Desery LodywRozku("Rożek", 1.50);
Desery Shake("Shake", 4.99);
Paragon p1;


void DeklaracjaLodywKubku(){
    LodywKubeczku.DodajWielkosc("Male", 0);
	LodywKubeczku.DodajWielkosc("Srednie", 1);
	LodywKubeczku.DodajWielkosc("Duze", 1.5);
	LodywKubeczku.DodajRodzaj("Vegan", 1);
	LodywKubeczku.DodajRodzaj("Bez cukru", 0.5);
	LodywKubeczku.DodajRodzaj("Bez laktozy", 1.5);
	LodywKubeczku.DodajSkladniki("Oreo", 1);
	LodywKubeczku.DodajSkladniki("Posypka lion", 1);
	LodywKubeczku.DodajDodatki("Czekoladowy", 0);
	LodywKubeczku.DodajDodatki("Karmelowy", 0);
}

void DeklaracjaLodywWaflu(){
	LodywWafelku.DodajWielkosc("Male", 0);
	LodywWafelku.DodajWielkosc("Srednie", 1);
	LodywWafelku.DodajWielkosc("Duze", 1.5);
	LodywWafelku.DodajRodzaj("Vegan", 1);
	LodywWafelku.DodajRodzaj("Bez cukru", 0.5);
	LodywWafelku.DodajRodzaj("Bez laktozy", 1.5);
	LodywWafelku.DodajSkladniki("Oreo", 1);
	LodywWafelku.DodajSkladniki("Posypka lion", 1);
	LodywWafelku.DodajDodatki("Czekoladowy", 0);
	LodywWafelku.DodajDodatki("Karmelowy", 0);
}

void DeklaracjaRozek(){
	LodywRozku.DodajWielkosc("Male", 0);
	LodywRozku.DodajWielkosc("Srednie", 1);
	LodywRozku.DodajWielkosc("Duze", 1.5);
	LodywRozku.DodajRodzaj("Vegan", 1);
	LodywRozku.DodajRodzaj("Bez cukru", 0.5);
	LodywRozku.DodajRodzaj("Bez laktozy", 1.5);
	LodywRozku.DodajSkladniki("Oreo", 1);
	LodywRozku.DodajSkladniki("Posypka lion", 1);
	LodywRozku.DodajDodatki("Czekoladowy", 0);
	LodywRozku.DodajDodatki("Karmelowy", 0);
}

void DeklaracjaShake(){
	Shake.DodajWielkosc("Maly", 0);
	Shake.DodajWielkosc("Sredni", 1);
	Shake.DodajWielkosc("Duzy", 1.5);


}

int main(){
	srand(time(NULL));
	DeklaracjaLodywKubku();
	DeklaracjaLodywWaflu();
	DeklaracjaRozek();
	LodywKubeczku.Wypisz();

	int wybor;

	while(1){
		int skladniki=0;

	cout<<"==================Kawiarnia=================="<<endl;
	cout<<"Proszę wybrać interesujący Państwa deser: "<<endl;
	cout<<"1. Lody"<<endl;
	cout<<"2. Shake"<<endl;
	cout<<"3. Kawa Mrożona"<<endl;
	cin>>wybor;
	switch(wybor){
		case 1:
			cout<<"1. "<<LodywKubeczku.GetNazwa()<<"	"<<LodywKubeczku.GetCena()<<endl;
			cout<<"2. "<<LodywRozku.GetNazwa()<<"	"<<LodywKubeczku.GetCena()<<endl;
			cout<<"3. "<<LodywWafelku.GetNazwa()<<"		"<<LodywWafelku.GetCena()<<endl;
			cin>>wybor;
			switch(wybor){
				case 1:
					p1.DodajDoParagonu(LodywKubeczku.GetNazwa(), LodywKubeczku.GetCena());
					LodywKubeczku.WypiszWielkosci();
					cin>>wybor;
					p1.DodajDoParagonu(LodywKubeczku.GetWielkosc(wybor-1), LodywKubeczku.GetWielkoscCena(wybor-1));
					LodywKubeczku.WypiszRodzaje();
					cin>>wybor;
					p1.DodajDoParagonu(LodywKubeczku.GetRodzaj(wybor-1), LodywKubeczku.GetRodzajCena(wybor-1));
					cout<<"Do wybranego rodzaju lodów można dobrać 2 składniki"<<endl;
					cout<<"Wybierz '0' dla pominięcia wyboru">>endl;
					LodywKubeczku.WypiszSkladniki();
					do{
					cin>>wybor;
					if(wybor==0) break;
					p1.DodajDoParagonu(LodywKubeczku.GetSkladnik(wybor-1), LodywKubeczku.GetSkladnikCena(wybor-1));
					skladniki++;
					}while(skladniki!=2);
					LodywKubeczku.WypiszDodatki();
					cin>>wybor;
					p1.DodajDoParagonu(LodywKubeczku.GetDodatki(wybor-1), LodywKubeczku.GetDodatkiCena(wybor-1));
					break;

				case 2:
					p1.DodajDoParagonu(LodywRozku.GetNazwa(), LodywRozku.GetCena());
					LodywRozku.WypiszWielkosci();
					cin>>wybor;
					p1.DodajDoParagonu(LodywRozku.GetWielkosc(wybor-1), LodywRozku.GetWielkoscCena(wybor-1));
					LodywRozku.WypiszRodzaje();
					cin>>wybor;
					p1.DodajDoParagonu(LodywRozku.GetRodzaj(wybor-1), LodywRozku.GetRodzajCena(wybor-1));
					cout<<"Do wybranego rodzaju lodów można dobrać 2 składniki"<<endl;
					cout<<"Wybierz '0' dla pominięcia wyboru">>endl;
					LodywRozku.WypiszSkladniki();
					do{
					cin>>wybor;
					if(wybor==0) break;
					p1.DodajDoParagonu(LodywRozku.GetSkladnik(wybor-1), LodywRozku.GetSkladnikCena(wybor-1));
					skladniki++;
					}while(skladniki!=2);
					LodywRozku.WypiszDodatki();
					cin>>wybor;
					p1.DodajDoParagonu(LodywRozku.GetDodatki(wybor-1), LodywRozku.GetDodatkiCena(wybor-1));
					break;

				case 3:
					p1.DodajDoParagonu(LodywWafelku.GetNazwa(), LodywWafelku.GetCena());
					LodywWafelku.WypiszWielkosci();
					cin>>wybor;
					p1.DodajDoParagonu(LodywWafelku.GetWielkosc(wybor-1), LodywWafelku.GetWielkoscCena(wybor-1));
					LodywWafelku.WypiszRodzaje();
					cin>>wybor;
					p1.DodajDoParagonu(LodywWafelku.GetRodzaj(wybor-1), LodywWafelku.GetRodzajCena(wybor-1));
					cout<<"Do wybranego rodzaju lodów można dobrać 2 składniki"<<endl;
					cout<<"Wybierz '0' dla pominięcia wyboru">>endl;
					LodywWafelku.WypiszSkladniki();
					do{
					cin>>wybor;
					if(wybor==0) break;
					p1.DodajDoParagonu(LodywWafelku.GetSkladnik(wybor-1), LodywWafelku.GetSkladnikCena(wybor-1));
					skladniki++;
					}while(skladniki!=2);
					LodywWafelku.WypiszDodatki();
					cin>>wybor;
					p1.DodajDoParagonu(LodywWafelku.GetDodatki(wybor-1), LodywWafelku.GetDodatkiCena(wybor-1));
					break;
			}
		
		
		break;
	}
	p1.PodajParagon();
	}
	
	
	
    return 0;
}