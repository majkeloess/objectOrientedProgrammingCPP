#ifndef ARRAY_H 
#define ARRAY_H

/** @brief
* Funkcja zwalnia pamiec z zaalokowanej wczesniej tablicy  
* @param array Wskaznik na poczatek tablicy
* @return Funkcja nic nie zwraca
*/
void DeleteArray(int *array);

/** @brief
* Funkcja zmienia rozmiar tablicy 
* @param array Wskaznik na poczatek tablicy
* @param n Nowa dlugosc tablicy
* @return Funkcja nic nie zwraca
*/
int * ChangeArraySize(int *array, int n, int k);

/** @brief
* Funkcja podnosi do kwadratu odpowiadajacy indeks tablicy i zapisuje go do niej
* @param array Wskaznik na poczatek tablicy
* @param n dlugosc tablicy
* @param k nowa dlugosc tablicy
* @return Funkcja zwraca wskanik na pierwszy element tablicy
*/
void CreateSequence(int *array, int n);

/** @brief
* Dynamiczna inicjalizacja tablicy
* @param array Wskaznik na poczatek tablicy
* @return Funkcja zwraca wskaznik na pierwszy element tablicy
*/    
int *InitArray(int n);

#endif