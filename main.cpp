#include <iostream>
#include <string>
#include "Desery.h"
#include "Paragon.h"

using namespace std;

int main(){
	srand(time(NULL));
	Desery t1("Lody", 10.69);
	Paragon p1;
	p1.DodajDoParagonu(t1.GetNazwa(), t1.GetCena());
	cin.get();
	p1.PodajParagon();
	
    return 0;
}