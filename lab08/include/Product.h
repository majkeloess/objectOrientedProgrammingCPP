#ifndef PRODUCT_H
#define PRODUCT_H

#include <vector>


class Product{
public:
    /** @brief Konstruktor defaultowy
    *
    * @param[in] quantityC wartosc 
    * @param[in] typeC typ
    * @return Funkcja nic nie zwraca
    */
    Product(int typeC, int quantityC);
    
    /** @brief print
    *
    * wypisywanie pol
    * @return funckja nic nie zwraca
    */
    void Print();
    
    /** @brief Zmieniamy wartosc
    *
    * Zamiana wartosci quantity
    * @return Funkcja nic nie zwraca
    */
    void SetCard(int quantityF);


private:
    int type;
    int quantity;

};


#endif