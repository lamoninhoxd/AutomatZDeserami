#include <iostream>
#include <string>
#include <vector>
#include "Paragon.h"
using namespace std;

class Desery{
    private:
        string nazwa;
        double cena;
        vector<string> Wielkosc;
        vector<double> Wielkosc_Cena;
        vector<string> Rodzaje;
        vector<double> Rodzaje_Cena;
        vector<string> Skladniki;
        vector<double> Skladniki_Cena;
        vector<string> Dodatki;
        vector<double> Dodatki_Cena;
    public:
        Desery(string nazwa, double cena){
            this->nazwa = nazwa;
            this->cena = cena;
        }
        Desery(){
            this->nazwa = "default";
            this->cena = 0.00;
        }

    //Funkcje dodające atrybuty klasy do vectorów
        void DodajWielkosc(string wielkosc, double cena){
            Wielkosc.push_back(wielkosc);
            Wielkosc_Cena.push_back(cena);
         }
        void DodajRodzaj(string nazwa, double cena){
            Rodzaje.push_back(nazwa);
            Rodzaje_Cena.push_back(cena);
        }
        void DodajSkladniki(string nazwa, double cena){
            Skladniki.push_back(nazwa);
            Skladniki_Cena.push_back(cena);
        }
        void DodajDodatki(string nazwa, double cena){
            Dodatki.push_back(nazwa);
            Dodatki_Cena.push_back(cena);
        }

    //Gettery i Settery
        void SetNazwa(string nazwa){ this->nazwa = nazwa;  }
        void SetCena(double cena){ this->cena = cena; }
        string GetNazwa(){return nazwa;}
        double GetCena(){return cena;}
        string GetWielkosc( int indeks ){ return Wielkosc[indeks]; }
        double GetWielkoscCena( int indeks ){ return Wielkosc_Cena[indeks]; }
        string GetRodzaj(int indeks ){ return Rodzaje[indeks]; }
        double GetRodzajCena(int indeks ){ return Rodzaje_Cena[indeks]; }
        string GetSkladnik(int indeks ){ return Skladniki[indeks]; }
        double GetSkladnikCena( int indeks ){ return Skladniki_Cena[indeks]; }
        string GetDodatki( int indeks ){ return Dodatki[indeks]; }
        double GetDodatkiCena( int indeks ){ return Dodatki_Cena[indeks]; }

    //Funkcja wypisująca zawartość obiektu klasy - głównie do testów
        void Wypisz(){ 
            cout<<GetCena()<<endl<<GetNazwa()<<endl; 
            WypiszWielkosci();
            WypiszRodzaje();
            WypiszSkladniki();
            WypiszDodatki();
        }

        void WypiszWielkosci(){
            cout<<"-----Rozmiary-----"<<endl;
            for(int i=0; i<Wielkosc.size(); i++){
                cout<<i+1<<": "<<Wielkosc[i]<<endl<<"      "<<Wielkosc_Cena[i]<<endl;
            } 
        }
        void WypiszRodzaje(){  
            cout<<"-----Rodzaje-----"<<endl;  
            for(int i=0; i<Rodzaje.size(); i++){
                cout<<i+1<<": "<<Rodzaje[i]<<"     "<<Rodzaje_Cena[i]<<endl;
            }
        }
        void WypiszSkladniki(){
            cout<<"-----Skladniki-----"<<endl;
            for(int i=0; i<Skladniki.size(); i++){
                cout<<i+1<<": "<<Skladniki[i]<<"     "<<Skladniki_Cena[i]<<endl;
            }
        }
        void WypiszDodatki(){
            cout<<"-----Dodatki-----"<<endl;
            for(int i=0; i<Dodatki.size(); i++){
                cout<<i+1<<": "<<Dodatki[i]<<"    "<<Dodatki_Cena[i]<<endl;
            }
        }
        void DoAutomatu(Paragon p1, Desery Deser){
            int wybor;
            int skladniki = 0;
            p1.DodajDoParagonu(Deser.GetNazwa(), Deser.GetCena());
			if(Deser.Wielkosc.size()!=0) { 
                Deser.WypiszWielkosci(); 
			    cin>>wybor;
                p1.DodajDoParagonu(Deser.GetWielkosc(wybor-1), Deser.GetWielkoscCena(wybor-1));
                if(Deser.GetNazwa().find("Lody") != string::npos){
                    cout<<"Do wybranego rozmiaru można wybrać "<<wybor<<" smaków: "<<endl;
                    Deser.WypiszSkladniki();
                    int smaki=0;
                    int dozwolone=wybor;
                    do{
                        cin>>wybor;
                        p1.DodajDoParagonu(Deser.GetSkladnik(wybor-1), Deser.GetSkladnikCena(wybor-1));
                        smaki++;
                    }while(smaki < dozwolone);
                }
            }
            if(Deser.Rodzaje.size()!=0){
            Deser.WypiszRodzaje();
			cin>>wybor;
			p1.DodajDoParagonu(Deser.GetRodzaj(wybor-1), Deser.GetRodzajCena(wybor-1));
            }
            if(Deser.Dodatki.size()!=0){
            cout<<"Do wybranego rodzaju deseru można dobrać 2 dodatki"<<endl;
			cout<<"Wybierz '0' dla pominięcia wyboru"<<endl;
			Deser.WypiszDodatki();
			do{
			cin>>wybor;
			if(wybor==0) break;
			p1.DodajDoParagonu(Deser.GetDodatki(wybor-1), Deser.GetDodatkiCena(wybor-1));
			skladniki++;
			}while(skladniki!=2);
            }
            p1.PodajParagon();
        }
};