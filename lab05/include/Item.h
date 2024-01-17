#ifndef ITEM_H
#define ITEM_H

class Item {
public:
    
    /** @brief Defaultowy konstruktor  
    * @return Konstruktor nic nie zwraca
    */
    Item();

    /** @brief Defaultowy konstruktor
    *
    * @param[in] name nazwa
    * @return Konstruktor nic nie zwraca
    */
    Item(const std::string &name);

    /** @brief Defaultowy konstruktor
    *
    * @param[in] name nazwa
    * @param[in] price cena
    * @param[in] quantity  ilosc
    * @return Konstruktor nic nie zwraca
    */
    Item(const std::string &name, double price, double quantity);
    
    /** @brief Defaultowy konstruktor
    *
    * @param[in] other inne itemy 
    * @return Konstruktor nic nie zwraca
    */
    Item(const Item &other);
    
    /** @brief Destruktor
    * @return Destruktor nic nie zwraca
    */
    ~Item();
    
    /** @brief Defaultowy konstruktor
    *
    * @param[in] state  
    * @return Konstruktor nic nie zwraca
    */
    void Presentation() const;
    
    /** @brief Defaultowy konstruktor
    *
    * @param[in] state  
    * @return Konstruktor nic nie zwraca
    */
    void SetName(const std::string &name);
    
    /** @brief Ustawiamy cene
    *
    * @param[in] price cena  
    * @return Funkcja nic nie zwraca
    */
    void SetPrice(double price);
    
    /** @brief Podajemy ilosc
    *
    * @param[in] quantity ilosc  
    * @return Funkcja nic nie zwraca
    */
    void SetQuantity(double quantity);
private:
    std::string name;
    double price;
    double quantity;

};



#endif