//
// Created by 13476 on 20/11/2023.
//

#include "Article.h"
#include <iostream>
#include <fstream>
using namespace std;

Article::Article(const string &libelle, double price, double codebar) : Libelle(libelle), price(price),
                                                                        codebar(codebar) {}

Article::Article() {}

void Article::addArticle() {

}

void Article::updateArticle() {

}

void Article::findArticle() {

}

void Article::getAllArticle() {

}

void Article::deleteArticle() {

}

const string &Article::getLibelle() const {
    return Libelle;
}

void Article::setLibelle(const string &libelle) {
    Libelle = libelle;
}

double Article::getPrice() const {
    return price;
}

void Article::setPrice(double price) {
    Article::price = price;
}

double Article::getCodebar() const {
    return codebar;
}

void Article::setCodebar(double codebar) {
    Article::codebar = codebar;
}
