#ifndef WAREHOUSE_H
#define WAREHOUSE_H
#include "Product.h"
#include <vector>

using namespace std;
class Warehouse{
public:
    
    /** @brief print
    *
    * wypisywanie pol
    * @return konstruktor nic nie zwraca
    */
    Warehouse();
    
    /** @brief print
    *
    * wypisywanie pol
    * @return konstruktor nic nie zwraca
    */
    Warehouse(Product &productRef);
    
    /** @brief 
    *
    
    * @return konstruktor nic nie zwraca
    */
    Warehouse(Product &product1, Product &product2);
    
    /** @brief print
    *
    
    * @return konstruktor nic nie zwraca
    */
    Warehouse(vector<Product> prodVec);
    
    /** @brief print
    *
    * @return konstruktor nic nie zwraca
    */
    Warehouse(int len, Product *product[]);
    
    /** @brief 
    *
    
    * @return destruktor nic nie zwraca
    */
    // ~Warehouse();
    
    /** @brief print
    *
    * wypisywanie pol
    * @return konstruktor nic nie zwraca
    */
    void Print();
    
    /** @brief dodawanie wartosci na koniec
    * @param[in] p wartosc
    * 
    * @return konstruktor nic nie zwraca
    */
    void Add(Product &p); 
    
    /** @brief usuwanie ostatniej wartosci
    *
    * wypisywanie pol
    * @return funckja nic nie zwraca
    */
    void Remove();

    /** @brief clearowanie
    *
    * 
    * @return funckja nic nie zwraca
    */
    void Clear();


private:
    vector <Product> products;

};


#endif