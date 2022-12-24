#include <iostream>
#include<conio.h>
#include<string.h>
Voiture::Voiture(){}
Voiture::Voiture(char m[20],char c[20],float p){
	strcpy(marque,m);
	strcpy(couleur,c);
	prix=p;
}
Voiture::Voiture(const Voiture &v){
	strcpy(marque,v.marque);
	strcpy(couleur,v.couleur);
	prix=v.prix;
}
Voiture::~Voiture(){}
char* Voiture::getMarque(){
	return marque;
}
char* Voiture::getCouleur(){
	return couleur;
}
float Voiture::getPrix(){
	return prix;
}
int Voiture::getId(){
	return id;
}
void Voiture::setCouleur(char c[22]){
	strcpy(couleur,c);
}
void Voiture::setMarque(char m[22]){
	strcpy(marque,m);
}
void Voiture::setPrix(float p){
	prix=p;
}
void Voiture::setID(int idd){
	id=idd;
}
void Voiture::saisieVoiture(){
	cout<<"\n\tId Voiture : ";
	cin>>id;
	cout<<"\tDonner La marque : ";
	cin>>marque;
	cout<<"\tDonner La couleur : ";
	cin>>couleur;
	cout<<"\tDonner Le prix : ";
	cin>>prix;
	
}
void Voiture::afficherVoiture(){
	cout<<"\n Id:"<<id<<"\t Marque : "<<marque<<"\t"<<"Couleur: "<<couleur<<"\t "<<"Prix : "<<prix<<endl;
}
void Voiture::modifierVoiture(char m[20],char c[20],float p,int idd){
	cout<<"\n\tDonner le nouveau ID : ";
	cin>>idd;
	Voiture::setID(idd);
	cout<<"\tDonner La nouvelle marque : ";
	cin>>m;
	Voiture::setMarque(m);
	cout<<"\tDonner La nouvelle couleur : ";
	cin>>c;
	Voiture::setCouleur(c);
	cout<<"\tDonner Le nouveau prix : ";
	cin>>p;
	Voiture::setPrix(p);
}
void Voiture::rechercherVoiture(){
	cout<<"\n Id:"<<id<<"\t Marque : "<<marque<<"\t"<<"Couleur: "<<couleur<<"\t "<<"Prix : "<<prix<<endl;
}






