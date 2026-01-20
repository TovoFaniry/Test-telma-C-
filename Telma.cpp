#include <iostream>
#include <string>
using namespace std;

int main(){
    int choix;
    //#111#
        cout << "YAS et MOI" << endl <<  "1 MVOLA" << endl << "2 Programme Eh'Wa" << endl << "3 SOS Credit" << endl << "4 Services YAS" << endl << "5 Promotion" << endl << "6 Produits et Divertissement" << endl << "7 Meilleures offres" << endl << "8 Mon identite" << endl << "9 Configurer mon mobile"  << endl << "00 Page precedente" << endl << endl <<  "Entrer : ";
        cin >> choix;

        if(choix == 1){

            cout << "MVOLA" << endl;
            cout << "1 Acheter Credit ou Offre Yas" << endl << "2 Transferer argent (vers toute)" << endl << "3 MVola Credit ou Eparne" << endl << "4 Retrait" << endl << "5 Paiement Factures & Partenaires" << endl << "6 Mon compte" << endl << "7 Recevoir de l'argent" << endl << "8 Banques et Micro-Finances" << "00 Page precedente" << endl << endl <<  "Entrer : ";
        
        }else if(choix == 2){
        
            cout << "Programme Eh'Wa" << endl;
            cout << "1 Inscription" << endl << "2 A propos de Eh'Wa" << endl;
        
        }else if(choix == 3){
        
            cout << "SOS Credit" << endl;
            cout << "1 SOS Credit a un ami" << endl << "2 SOS credit a YAS" << endl << "3 SOS offre a YAS" << endl << "4 Rembourser SOS" << endl << "5 Aide" << endl;
        
        }else if(choix == 4){
        
            cout << "Services YAS" << endl;
            cout << "1 Info credit" << endl << "2 Recharge" << endl << "3 Gerer Friends and Family" << endl << "4 Envoyer Credit/Offre/Mega" << endl << "5 Rappelle moi" << endl << "6 Acheter une offre" << endl << "7 Ajouter des jours de validite" << endl << "8 Changement de Langue" << "9 Recuperer mon Numero" << "10 Mon numero" << "00 Page precedente" << endl << endl;
        
        }else if(choix == 5){
        
            cout << "Votre offre tarifaire actuelle est TOKANA" << endl;
            cout << "1 MORA (VOIX - SMS- INTERNET)" << endl << "2 FIRST (VOIX - SMS - INTERNET)" << endl << "3 YELLOW (SMS - INTERNET)" << endl << "4 Yas Net (INTERNET)" << endl << "5 ROAMING (DATA - SMS - VOIX)" << "00 Page precedente" << endl << endl;
        
        }else if(choix == 6){
        
            cout << "Produits et Divertissement" << endl;
            cout << "1 Yas mitsinjo" << endl << "2 MOOZIK" << endl << "3 Zara Soa" << endl << "4 MBALIK" << endl << endl;
            
        }else if(choix == 7){
        
            cout << "Meilleures offres" << endl;
            cout << "Merci d'avoir choisi Yas. Tapez #322# pour acheter une offre." << endl << endl;
        
        }else if(choix == 8){
        
            cout << "Mon identite" << endl;
            cout << "1 Mon identite enregistre" << endl << endl;
            
        }else if(choix == 9){
        
            cout << "Configurer mon mobile" << endl;
            cout << "1 (Des-) Activer INTERNET sur compte principal" << endl << endl;
        
        }else if(choix == 00){
        
            cout << "Page precedente" << endl;
        
        }


    return 0;
}
