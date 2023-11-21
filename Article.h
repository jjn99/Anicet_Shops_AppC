//
// Created by 13476 on 20/11/2023.
//

#ifndef ANICET_SHOPS_APPC___ARTICLE_H
#define ANICET_SHOPS_APPC___ARTICLE_H

#include <string>


using namespace std;

class Article {
    string Libelle;
    float codebar;
    float price;
public:
    Article();

    Article(const string &libelle, float codebar, float price);

    void addArticle();

    void updateArticle();

    void findArticle();

    void getAllArticle();

    void deleteArticle();

    float getPrice() const;

    void setPrice(float price);

    float getCodebar() const;

    void setCodebar(float codebar);
};


#endif //ANICET_SHOPS_APPC___ARTICLE_H
