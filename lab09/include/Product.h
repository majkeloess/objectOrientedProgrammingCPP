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
    
    
    /** @brief funkcja zamienia inta  na stringa
    *
    * 
    * @return funkcja zwraca stringa
    */
    std::string ToString();

    /** @brief konstruktor
    *
    * @param[in] val wartosc ktora zamieniamy
    * @return konstruktor nic nie zwraca
    */
    Product(int val);

    /** @brief przeladowanie operatora string
    *
    * 
    * @return funkcja zwraca stringa
    */
    operator std::string() const;
    
    /** @brief przeladowanie operatora sumowania
    *
    * 
    * @return funckja zwraca sume ilosci
    */
    operator int() const;

    int quantity;
private:
    int type;

};


/** @brief komparator
*
* 
* @return funkcja zwraca 1, 0 ,-1
*/
int Compare(const Product &p1,const Product &p2);


#endif