#include <string>

using namespace std;

class Towar{
    private:
        string nazwa;
        double cena;
    public:
        Towar(string nazwa, double cena){
            this->nazwa = nazwa;
            this->cena = cena;
        }
        Towar(){
            this->nazwa = "default";
            this->cena = 0.00;
        }
        void SetNazwa(string nazwa){ this->nazwa = nazwa;  }
        void SetCena(double cena){ this->cena = cena; }
        string GetNazwa(){return nazwa;}
        double GetCena(){return cena;}
        void Wypisz(){ cout<<GetCena()<<endl<<GetNazwa()<<endl; }

};
