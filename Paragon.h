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
			int wybor;
			double kasa;
			cout<<"--------------PARAGON--------------"<<endl;
			cout<<endl<<numerParagonu<<endl;
			for(int i=0 ; i < ParagonCeny.size() ; i++){
				cout<<endl<<i+1<<": "<<ParagonNazwy[i]<<"	"<<ParagonCeny[i]<<endl;
			}
			cout<<"Do zaplaty: "<<sumaCen<<endl;
			zaplata:
			cout<<"W jaki sposób Państwo płacą: "<<endl;
			cout<<"1. Karta"<<endl;
			cout<<"2. Gotówka"<<endl;
			cin>>wybor;
			switch(wybor){
				case 1:
					cout<<"Dziękuję za zapłatę i zapraszamy ponownie."<<endl;
					break;
				case 2:
					cout<<"Proszę wprowadzić ile gotówki wprowadzono do kasy: ";
					cin>>kasa;
					if(kasa > sumaCen){ cout<<"Wydaję resztę: "<<kasa-sumaCen<<endl; }
					if(kasa == sumaCen) { cout<<"Dziękuję za policzoną kwotę"<<endl; }
					if(kasa < sumaCen){ 
						cout<<"Dano za małą kwotę, brakuje: "<<sumaCen-kasa<<endl;
						cout<<"Proszę ponownie przeliczyć i zapłacić"<<endl;
						goto zaplata;
					}
			}
		}
};
