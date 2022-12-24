#include <iostream>
#include<conio.h> 
#include"classes.h"
#include"definition.h"    
using namespace std; 
int main(int argc, char** argv) { 
	menu:cout<<endl;
	cout<<"\t\t MENU \n\n";
	cout<<"\t1-Ajouter une voiture \n\n";
	cout<<"\t2-afficher une voiture \n\n";
	cout<<"\t3-rechercher une voiture \n\n";
	cout<<"\t4-Modifier une voiture \n\n";
	cout<<"\t5-Quitter \n\n";
	int ch,i,nb,idd;
	char m[20], c[20];
	float p;
	Voiture voitures[33];    
	do{cin>>ch;}while(ch<1||ch>6);   
	switch(ch){
		case 1:{
			do{cout<<"\tdonner le nombre de voitures a ajouter ";cin>>nb;}while(nb<0);
			for(i=0;i<nb;i++){voitures[i].saisieVoiture();}
			system("pause");system("cls");goto menu;break;}
		case 2:{
			for(i=0;i<nb;i++){voitures[i].afficherVoiture();}
			cout<<"\n\n";system("pause");system("cls");goto menu;break;}
		case 3:{
			int verification; cout<<"Donner ID de la voiture : ";cin>>verification;
			for(i=0;i<nb;i++){
			if(verification==voitures[i].getId()){
				voitures[i].rechercherVoiture();}
			else{
				cout<<"Cet id existe pas reassayer";
			}
			}
			cout<<"\n\n";system("pause");system("cls");goto menu;break;}
		case 4:{
			int verification; cout<<"Donner ID de la voiture : ";cin>>verification;
			for(i=0;i<nb;i++){
			if(verification==voitures[i].getId()){voitures[i].modifierVoiture(m,c,p,idd);}}
			cout<<"\n\n";system("pause");system("cls");goto menu;break;}
		case 5:{exit(0);break;}   
	}
	return 0;
}
