//
// Created by 13476 on 20/11/2023.
//

#ifndef ANICET_SHOPS_APPC___ARTICLE_H
#define ANICET_SHOPS_APPC___ARTICLE_H

#include <string>

using namespace std;

class Article {
    string Libelle;
    double price;
    double codebar;
public:
    Article();

    Article(const string &libelle, double price, double codebar);

    void addArticle();

    void updateArticle();

    void findArticle();

    void getAllArticle();

    void deleteArticle();

    const string &getLibelle() const;

    void setLibelle(const string &libelle);

    double getPrice() const;

    void setPrice(double price);

    double getCodebar() const;

    void setCodebar(double codebar);
};


#endif //ANICET_SHOPS_APPC___ARTICLE_H
