#ifndef WAREHOUSE_1_H
#define WAREHOUSE_1_H

#include <iostream>


class Warehouse_1 {
public:
    
     /** @brief Defaultowy konstruktor
    *
    * Ustawia wartosc size na 0
    * @return Konstruktor nic nie zwraca
    */
    Warehouse_1();
    
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
    int arr[4];
    int size;
};

#endif
