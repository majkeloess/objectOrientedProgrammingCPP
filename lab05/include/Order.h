#ifndef ORDER_H
#define ORDER_H
#include <iostream>
#include "Item.h"
class Order {
public:
     /** @brief Defaultowy konstruktor
    *
    * @return Konstruktor nic nie zwraca
    */
    Order();
     /** @brief Defaultowy konstruktor
    *
    * @param[in] orderName name nazwa
    * @return Konstruktor nic nie zwraca
    */
    Order(const std::string &orderName);

     /** @brief Defaultowy konstruktor
    *
    * @param[in] orderName name nazwa
    * @return Konstruktor nic nie zwraca
    */
    Order(const std::string &orderName, double itemQuantity, const Item newItems[]);
     /** @brief Defaultowy konstruktor
    *
    * @param[in] orderName name nazwa
    * @return Konstruktor nic nie zwraca
    */
    Order(const std::string &orderName,  const Item &p1, const Item &p2, const Item &p3);
     /** @brief Defaultowy konstruktor
    *
    * @param[in] orderName name nazwa
    * @return Konstruktor nic nie zwraca
    */
    Order(const std::string &orderName,  const Item &p1, const Item &p2, const Item &p3, const Item &p4);
     /** @brief Defaultowy konstruktor
    *
    * @param[in] orderName name nazwa
    * @return Konstruktor nic nie zwraca
    */
    ~Order();

     /** @brief Defaultowy konstruktor
    *
    * @param[in] orderName name nazwa
    * @return Konstruktor nic nie zwraca
    */
    void Presentation() const;

     /** @brief Defaultowy konstruktor
    *
    * @param[in] orderName name nazwa
    * @return Konstruktor nic nie zwraca
    */
    void SetName(const std::string &orderName);

     /** @brief Defaultowy konstruktor
    *
    * @param[in] orderName name nazwa
    * @return Konstruktor nic nie zwraca
    */
    void SetItem(int index, const std::string &itemName, double itemPrice, double itemQuantity);

     /** @brief Defaultowy konstruktor
    *
    * @param[in] orderName name nazwa
    * @return Konstruktor nic nie zwraca
    */
    void SetNewItems(int itemCount, const Item newItems[]);

     /** @brief Defaultowy konstruktor
    *
    * @param[in] orderName name nazwa
    * @return Konstruktor nic nie zwraca
    */
    Item *GetItems() const;
private:
    std::string name;
    int itemCount;
    Item* items; 
};



#endif