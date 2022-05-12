#include <iostream>
#include <string>
#include "Towar.h"
#include "Paragon.h"

using namespace std;

int main(){

	Towar t1("Lody", 10.59);
	t1.Wypisz();
	t1.SetNazwa("Lody");
	t1.SetCena(10.59);
	t1.Wypisz();
	
    return 0;
}
