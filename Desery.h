#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Desery{
    private:
        string nazwa;
        double cena;
        vector<string> Wielkosc;
        vector<string> Rodzaje;
        vector<double> Rodzaje_Cena;
        vector<string> Skladniki;
        vector<double> Skladniki_Cena;
        vector<string> Sosy;
        vector<double> Sosy_Cena;
    public:
        Desery(string nazwa, double cena){
            this->nazwa = nazwa;
            this->cena = cena;
        }
        Desery(){
            this->nazwa = "default";
            this->cena = 0.00;
        }
        void DodajWielkosc(string wielkosc){
            Wielkosc.push_back(wielkosc);
         }
        void DodajRodzaj(string nazwa, double cena){
            Rodzaje.push_back(nazwa);
            Rodzaje_Cena.push_back(cena);
        }
        void DodajSkladniki(string nazwa, double cena){
            Skladniki.push_back(nazwa);
            Skladniki_Cena.push_back(cena);
        }
        void DodajSos(string nazwa, double cena){
            Sosy.push_back(nazwa);
            Sosy_Cena.push_back(cena);
        }
        void SetNazwa(string nazwa){ this->nazwa = nazwa;  }
        void SetCena(double cena){ this->cena = cena; }
        string GetNazwa(){return nazwa;}
        double GetCena(){return cena;}
        string GetWielkosc( int indeks ){ return Wielkosc[indeks]; }
        string GetRodzaj(int indeks ){ return Rodzaje[indeks]; }
        double GetRodzajCena(int indeks ){ return Rodzaje_Cena[indeks]; }
        string GetSkladnik(int indeks ){ return Skladniki[indeks]; }
        double GetSkladnikCena( int indeks ){ return Skladniki_Cena[indeks]; }
        string GetSos( int indeks ){ return Sosy[indeks]; }
        double GetSosCena( int indeks ){ return Sosy_Cena[indeks]; }
        void Wypisz(){ 
            cout<<GetCena()<<endl<<GetNazwa()<<endl; 
            int i=0;
            while(i!=Wielkosc[i].size()){
                cout<<Wielkosc[i]<<endl;
                i++;
            }   
            i=0; 
            while(i!=Rodzaje[i].size()){
                cout<<Rodzaje[i]<<"     "<<Rodzaje_Cena[i]<<endl;
                i++;
            }
            i=0;
            while(i!=Skladniki[i].size()){
                cout<<Skladniki[i]<<"   "<<Skladniki_Cena[i]<<endl;
                i++;
            }
            i=0;
            while(i!=Sosy[i].size()){
                cout<<Sosy[i]<<"    "<<Sosy_Cena[i]<<endl;
                i++;
            }
        }

};