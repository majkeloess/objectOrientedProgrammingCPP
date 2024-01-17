#ifndef WAREHOUSE_2_H
#define WAREHOUSE_2_H

#include <iostream>
#include <array>


class Warehouse_2 {
public:

     /** @brief Defaultowy konstruktor
    *
    * Ustawia wartosc size na 0
    * @return Konstruktor nic nie zwraca
    */
    Warehouse_2();
    
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
    
     /** @brief Usuwa ostatni el z tablicy
    *
    * @return Zwraca wartosc ostatniego el tablicy
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
    std::array<int,4> arr;
    int size;
};

#endif
