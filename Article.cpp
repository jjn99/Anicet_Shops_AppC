//
// Created by 13476 on 20/11/2023.
//

#include "Article.h"
#include <iostream>
#include <fstream>
#include <string>
#include "Response.cpp"
using namespace std;

Article::Article() {

}

Article::Article(const string &libelle, float codebar, float price) : Libelle(libelle), codebar(codebar),
                                                                      price(price) {}

void Article::addArticle() {
    //Ici on aura la saisie la creation la mise dans un fichier
    float code , price;
    string libelle;
    cout << "||======>  Entrez le Code Barre de l'article  :   "<<endl;
    cin>>code;
    cin.ignore();
    cout << "||======>  Entrez le Libelle de l'article  :  "<<endl;
    cin>>libelle;
    cin.ignore();
    cout << "||======>  Entrez le Prix de l'article   : "<<endl;
    cin>>price;
    cout<< "code "<< code << " libelle "<<libelle<<" prix "<< price;

    //parti sur les fichiers
    fstream file;
    file.open("C://Users//13476//Documents//GitHub//Anicet_Shops_AppC++//ArticleData.txt",ios::out | ios::app);
    file << " " << code << " " << libelle << "  " << price << "\n";
    file.close();
    success();
}

void Article::updateArticle() {

}

void Article::findArticle() {

}

void Article::getAllArticle() {

}

void Article::deleteArticle() {

}

float Article::getPrice() const {
    return price;
}

void Article::setPrice(float prix) {
}

float Article::getCodebar() const {
    return codebar;
}

void Article::setCodebar(float code) {
    Article::codebar = code;
}

