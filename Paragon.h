#include <string>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

class Paragon{
	private:
		int numerParagonu;
		double sumaCen=0.0;
		vector<string> ParagonNazwy;
		vector<double> ParagonCeny;
	public:
		Paragon(double sumaCen){
			this->numerParagonu = rand()%899999999+100000000;
			this->sumaCen = sumaCen;
		}
		Paragon(){
			this->numerParagonu=rand()%899999999+100000000;
			this->sumaCen=0.0;
		}
	//Funkcja regularnie aktualizująca łączną cenę
		void SetsumaCen(double podanacena){ sumaCen += podanacena; }
	//Funkcja dodająca towary, składniki i dodatki do paragonu
		void DodajDoParagonu(string nazwa, double cena){ 
			ParagonNazwy.push_back(nazwa);
			ParagonCeny.push_back(cena);
			this->SetsumaCen(cena);
			}
	//Funkcja drukująca paragon wraz z wszystkimi wybranymi przez użytkownika produktami
		void PodajParagon(){
			cout<<endl<<numerParagonu<<endl;
			for(int i=0 ; i < ParagonCeny.size() ; i++){
				cout<<endl<<i+1<<": "<<ParagonNazwy[i]<<"	"<<ParagonCeny[i]<<endl;
			}
			cout<<"Do zaplaty: "<<sumaCen<<endl;
		}
};
