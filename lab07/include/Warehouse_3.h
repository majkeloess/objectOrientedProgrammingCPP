#ifndef WAREHOUSE_3_H
#define WAREHOUSE_3_H

#include <iostream>
#include <array>


class Warehouse_3 {
public:
     /** @brief Defaultowy konstruktor
    *
    * Ustawia wartosc size na 0
    * @return Konstruktor nic nie zwraca
    */
    Warehouse_3(int cap);
    
    /** @brief Defaultowy destruktor
    *
    * czysci dane
    * @return Konstruktor nic nie zwraca
    */
    ~Warehouse_3();
    
     /** @brief Sprawdza czy tablica jest pusta
    *
    * 
    * @return Zwraca wartosc boolean
    */
    bool IsEmpty();
    
     /** @brief Sprawdza czy tablica jest pelna
    *
    * 
    * @return Zwraca wartosc boolean
    */
    bool IsFull();
    
     /** @brief Usuwa pierwszy el z tablicy
    *
    * @return Zwraca wartosc pierszego el tablicy
    */
    int Remove();
    
     /** @brief Dodaje podana wartosc na koniec tablicy
    *
    * @param[in] value wartosc ktora dodajemy na koniec
    * @return Funkcja nic nie zwraca
    */
    void Insert(int value);
    
     /** @brief Wypisywanie tablicy
    *
    * @return Funkcja nic nie zwraca
    */
    void Print();
    
     /** @brief funkcja dzieki ktorej mamy rozmiar tablicy
    *
    * @return Funkcja zwraca rozmiar tablicy
    */
    int Size();
    
     /** @brief Czyszczenie tablicy
    *
    * @return  Funkcja nic nie zwraca
    */
    void Clear();

private:
    int *arr;
    int size;
    int capacity;
};

#endif
