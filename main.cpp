#include <iostream>
#include "Article.h"

using namespace std;

//********************** main menu function ******************************//

int mainMenu(){
    system("cls");
    int choice;
    do {
        cout<<"||**************************************************************************************************||"<<endl;
        cout<<"||*********************************          Anicet Shops         **********************************||"<<endl;
        cout<<"||**************************************************************************************************||"<<endl;
        cout<<"||*    ***    *    *            Application de gestion des commandes.            *    *    ***     *||"<<endl;
        cout<<"||**************************************************************************************************||"<<endl;
        cout<<"||                                   (1)  Gerer les Articles                                        ||"<<endl;
        cout<<"||                                   (2)  Gerer les commandes                                       ||"<<endl;
        cout<<"||                                                                                                  ||"<<endl;
        cout<<"||                                                                                                  ||"<<endl;
        cout<<"||                                   (0)  Quitter                                                   ||"<<endl;
        cout<<"||**************************************************************************************************||"<<endl;
        cout<<"||                                  Veuillez selectionner un numero                                 ||"<<endl;
        cout<<"||**************************************************************************************************||"<<endl;
        cin>>choice;
    } while ((choice <0 || choice>2));
    return choice;
}

//********************** articles menu function **************************//

int articlesMenu(){
    system("cls");
    int choice;
    do {
        cout<<"||**************************************************************************************************||"<<endl;
        cout<<"||*********************************          Anicet Shops         **********************************||"<<endl;
        cout<<"||**************************************************************************************************||"<<endl;
        cout<<"||*    ***    *    *                      Gerer les Articles                     *    *    ***     *||"<<endl;
        cout<<"||**************************************************************************************************||"<<endl;
        cout<<"||                                         (1)  Enregistrer                                         ||"<<endl;
        cout<<"||                                         (2)  Modifier                                            ||"<<endl;
        cout<<"||                                         (3)  Lister                                              ||"<<endl;
        cout<<"||                                         (4)  Supprimer                                           ||"<<endl;
        cout<<"||                                                                                                  ||"<<endl;
        cout<<"||                                         (0)  Retour                                              ||"<<endl;
        cout<<"||**************************************************************************************************||"<<endl;
        cout<<"||                                  Veuillez selectionner un numero                                 ||"<<endl;
        cout<<"||**************************************************************************************************||"<<endl;
        cin>>choice;
    } while (choice <0 || choice>4);
    return choice;
}

//********************** command menu function ***************************//

int commandMenu(){
    system("cls");
    int choice;
    do {
        cout<<"||**************************************************************************************************||"<<endl;
        cout<<"||*********************************          Anicet Shops         **********************************||"<<endl;
        cout<<"||**************************************************************************************************||"<<endl;
        cout<<"||*    ***    *    *                      Gerer les Commandes                    *    *    ***     *||"<<endl;
        cout<<"||**************************************************************************************************||"<<endl;
        cout<<"||                                         (1)  Enregistrer                                         ||"<<endl;
        cout<<"||                                         (2)  Modifier                                            ||"<<endl;
        cout<<"||                                         (3)  Lister                                              ||"<<endl;
        cout<<"||                                         (4)  Supprimer                                           ||"<<endl;
        cout<<"||                                                                                                  ||"<<endl;
        cout<<"||                                         (0)  Retour                                              ||"<<endl;
        cout<<"||**************************************************************************************************||"<<endl;
        cout<<"||                                  Veuillez selectionner un numero                                 ||"<<endl;
        cout<<"||**************************************************************************************************||"<<endl;
        cin>>choice;
    } while (choice <0 || choice>4);
    return choice;
}

void gestArticle(int choice){
    Article a;
    switch (choice) {
        case 1:
            //Enregistrer
            a.addArticle();
            break;
        case 2:
            //Modification
            break;
        case 3:
            //lister
            break;
        case 4:
            //supprimer
            break;
        case 0:
            break;
    };
}

void gestCommande(int choice){
    switch (choice) {
        case 1:
            //Enregistrer
            break;
        case 2:
            //Modification
            break;
        case 3:
            //lister
            break;
        case 4:
            //supprimer
            break;
        case 0:
            break;
    }
}

void gestion(){
    int choice = mainMenu();
    switch (choice) {
        case 1:
            choice = articlesMenu();
            gestArticle(choice);
            break;
        case 2:
            choice = commandMenu();
            gestCommande(choice);
            break;
        case 0:
            break;
    }
}


int main() {
    gestion();
    return 0;
}


