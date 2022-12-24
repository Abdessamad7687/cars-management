#include<iostream>
using namespace std;
class Voiture{
	private:
		char marque[20];
		char couleur[20];
		float prix;
		int id;
	public:
		Voiture();
		Voiture(char m[20],char c[20],float p);
		Voiture(const Voiture &v);
		void saisieVoiture();
		void afficherVoiture();
		void rechercherVoiture();
		void modifierVoiture(char m[20],char c[20],float p,int idd);
		void supprimerVoiture();
		char* getMarque();
		char* getCouleur();
		float getPrix();
		int getId();
		void setMarque(char m[20]);
		void setCouleur(char c[20]);
		void setPrix(float p);
		void setID(int idd);
		~Voiture();
};
