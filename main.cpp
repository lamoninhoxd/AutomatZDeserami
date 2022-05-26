/* AUTOMAT Z DESERAMI
Współtworzyli:
Damian Lamonski
Mateusz Bień
Szczepan Jakubowicz
Wioletta Bochenek
Paweł Sebastian
*/

#include <iostream>
#include <string>
#include "Desery.h"


using namespace std;

Desery LodywKubeczku("Lody w kubeczku", 2.99);
Desery LodywWafelku("Lody w wafelku", 2.50);
Desery LodywRozku("Rożek", 1.50);
Desery Shake("Shake", 4.99);
Desery Gofry("Gofry", 1.99);
Desery KawaMrozona("Kawa mrożona", 4.99);
Paragon p1;


void DeklaracjaLodywKubku(){
    LodywKubeczku.DodajWielkosc("Male - 1 gałka", 0);
	LodywKubeczku.DodajWielkosc("Srednie - 2 gałki", 1);
	LodywKubeczku.DodajWielkosc("Duze - 3 gałki", 1.5);
	LodywKubeczku.DodajRodzaj("Vegan", 1);
	LodywKubeczku.DodajRodzaj("Bez cukru", 0.5);
	LodywKubeczku.DodajRodzaj("Bez laktozy", 1.5);
	LodywKubeczku.DodajRodzaj("Zwykłe", 0);
	LodywKubeczku.DodajSkladniki("Czekoladowy", 0);
	LodywKubeczku.DodajSkladniki("Truskawka", 0);
	LodywKubeczku.DodajSkladniki("Wiśnia", 0);
	LodywKubeczku.DodajSkladniki("Toffi", 0);
	LodywKubeczku.DodajSkladniki("Tiramisu", 0);
	LodywKubeczku.DodajSkladniki("Mix Jagodowy", 0);
	LodywKubeczku.DodajSkladniki("Malina", 0);
	LodywKubeczku.DodajSkladniki("Krówka", 0);
	LodywKubeczku.DodajSkladniki("Karmel", 0);
	LodywKubeczku.DodajSkladniki("Biała Czekolada", 0);
	LodywKubeczku.DodajSkladniki("Adwokat", 0);
	LodywKubeczku.DodajDodatki("Posypka KitKat", 1);
	LodywKubeczku.DodajDodatki("Posypka Lion", 1);
	LodywKubeczku.DodajDodatki("Posypka Smarties", 1);
	LodywKubeczku.DodajDodatki("Oreo", 1);
	LodywKubeczku.DodajDodatki("Polewa Ciemna czekolada", 1);
	LodywKubeczku.DodajDodatki("Polewa Biała czekolada", 1);
	LodywKubeczku.DodajDodatki("Orzeszki Archaidowe w karmelu", 1);
	LodywKubeczku.DodajDodatki("Cukier strzelający", 1);
}

void DeklaracjaLodywWaflu(){
	LodywWafelku.DodajWielkosc("Male - 1 gałka", 0);
	LodywWafelku.DodajWielkosc("Srednie - 2 gałki", 1);
	LodywWafelku.DodajWielkosc("Duze - 3 gałki", 1.5);
	LodywWafelku.DodajRodzaj("Vegan", 1);
	LodywWafelku.DodajRodzaj("Bez cukru", 0.5);
	LodywWafelku.DodajRodzaj("Bez laktozy", 1.5);
	LodywWafelku.DodajRodzaj("Zwykłe", 0);
	LodywWafelku.DodajSkladniki("Czekoladowy", 0);
	LodywWafelku.DodajSkladniki("Truskawka", 0);
	LodywWafelku.DodajSkladniki("Wiśnia", 0);
	LodywWafelku.DodajSkladniki("Toffi", 0);
	LodywWafelku.DodajSkladniki("Tiramisu", 0);
	LodywWafelku.DodajSkladniki("Mix Jagodowy", 0);
	LodywWafelku.DodajSkladniki("Malina", 0);
	LodywWafelku.DodajSkladniki("Krówka", 0);
	LodywWafelku.DodajSkladniki("Karmel", 0);
	LodywWafelku.DodajSkladniki("Biała Czekolada", 0);
	LodywWafelku.DodajSkladniki("Adwokat", 0);
	LodywWafelku.DodajDodatki("Posypka KitKat", 1);
	LodywWafelku.DodajDodatki("Posypka Lion", 1);
	LodywWafelku.DodajDodatki("Posypka Smarties", 1);
	LodywWafelku.DodajDodatki("Oreo", 1);
	LodywWafelku.DodajDodatki("Polewa Ciemna czekolada", 1);
	LodywWafelku.DodajDodatki("Polewa Biała czekolada", 1);
	LodywWafelku.DodajDodatki("Orzeszki Archaidowe w karmelu", 1);
	LodywWafelku.DodajDodatki("Cukier strzelający", 1);
}

void DeklaracjaRozek(){
	LodywRozku.DodajWielkosc("Male", 0);
	LodywRozku.DodajWielkosc("Srednie", 1);
	LodywRozku.DodajWielkosc("Duze", 1.5);
	LodywRozku.DodajRodzaj("Vegan", 1);
	LodywRozku.DodajRodzaj("Bez cukru", 0.5);
	LodywRozku.DodajRodzaj("Bez laktozy", 1.5);
	LodywRozku.DodajRodzaj("Zwykłe", 0);
	LodywRozku.DodajSkladniki("Czekoladowy", 0);
	LodywRozku.DodajSkladniki("Truskawka", 0);
	LodywRozku.DodajSkladniki("Wiśnia", 0);
	LodywRozku.DodajSkladniki("Toffi", 0);
	LodywRozku.DodajSkladniki("Tiramisu", 0);
	LodywRozku.DodajSkladniki("Mix Jagodowy", 0);
	LodywRozku.DodajSkladniki("Malina", 0);
	LodywRozku.DodajSkladniki("Krówka", 0);
	LodywRozku.DodajSkladniki("Karmel", 0);
	LodywRozku.DodajSkladniki("Biała Czekolada", 0);
	LodywRozku.DodajSkladniki("Adwokat", 0);
	LodywRozku.DodajDodatki("Posypka KitKat", 1);
	LodywRozku.DodajDodatki("Posypka Lion", 1);
	LodywRozku.DodajDodatki("Posypka Smarties", 1);
	LodywRozku.DodajDodatki("Oreo", 1);
	LodywRozku.DodajDodatki("Polewa Ciemna czekolada", 1);
	LodywRozku.DodajDodatki("Polewa Biała czekolada", 1);
	LodywRozku.DodajDodatki("Orzeszki Archaidowe w karmelu", 1);
	LodywRozku.DodajDodatki("Cukier strzelający", 1);
}

void DeklaracjaShake(){
	Shake.DodajWielkosc("Maly", 0);
	Shake.DodajWielkosc("Sredni", 1);
	Shake.DodajWielkosc("Duzy", 1.5);
	Shake.DodajRodzaj("Czekoladowy", 0);
	Shake.DodajRodzaj("Truskawka", 0);
	Shake.DodajRodzaj("Wiśnia", 0);
	Shake.DodajRodzaj("Toffi", 0);
	Shake.DodajRodzaj("Tiramisu", 0);
	Shake.DodajRodzaj("Mix Jagodowy", 0);
	Shake.DodajRodzaj("Malina", 0);
	Shake.DodajRodzaj("Krówka", 0);
	Shake.DodajRodzaj("Karmel", 0);
	Shake.DodajRodzaj("Biała Czekolada", 0);
	Shake.DodajRodzaj("Adwokat", 0);

}

void DeklaracjaGofry(){
	Gofry.DodajWielkosc("Maly", 0);
	Gofry.DodajWielkosc("Sredni", 1);
	Gofry.DodajWielkosc("Duzy", 1.5);
	Gofry.DodajDodatki("Bita Śmietana", 1);
	Gofry.DodajDodatki("Cukier Puder", 0.5);
	Gofry.DodajDodatki("Owoce", 1.5);
}

void DeklaracjaKawaMrozona(){
	KawaMrozona.DodajWielkosc("Mała", 0);
	KawaMrozona.DodajWielkosc("Średnia", 1);
	KawaMrozona.DodajWielkosc("Duża", 1.5);
}

void Deklaracje(){
	DeklaracjaLodywKubku();
	DeklaracjaLodywWaflu();
	DeklaracjaRozek();
	DeklaracjaShake();
	DeklaracjaGofry();
	DeklaracjaKawaMrozona();
}

int main(){
	srand(time(NULL));
	Deklaracje();
	int wybor;
	while(1){
	cout<<"==================Kawiarnia=================="<<endl;
	cout<<"Proszę wybrać interesujący Państwa deser: "<<endl;
	cout<<"1. Lody"<<endl;
	cout<<"2. Shake"<<endl;
	cout<<"3. Kawa Mrożona"<<endl;
	cout<<"4. Gofry"<<endl;
	cout<<"0. Wyjście"<<endl;
	cin>>wybor;
	if(wybor == 0) return 0;
	switch(wybor){
		case 1:
			cout<<"1. "<<LodywKubeczku.GetNazwa()<<"	"<<LodywKubeczku.GetCena()<<endl;
			cout<<"2. "<<LodywRozku.GetNazwa()<<"	"<<LodywKubeczku.GetCena()<<endl;
			cout<<"3. "<<LodywWafelku.GetNazwa()<<"		"<<LodywWafelku.GetCena()<<endl;
			cin>>wybor;
			switch(wybor){
				case 1:
					LodywKubeczku.DoAutomatu(p1, LodywKubeczku);
					break;
				case 2:
					LodywRozku.DoAutomatu(p1, LodywRozku);
					break;

				case 3:
					LodywWafelku.DoAutomatu(p1, LodywWafelku);
					break;
			}
			break;
		case 2:
			Shake.DoAutomatu(p1, Shake);
			break;
		case 3:
			KawaMrozona.DoAutomatu(p1, KawaMrozona);
			break;
		case 4:
			Gofry.DoAutomatu(p1, Gofry);
			break;
		
		
		}
	}
}