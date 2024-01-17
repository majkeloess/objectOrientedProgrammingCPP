#ifndef LIST_H
#define LIST_H


// Element listy
struct slistEl
{
  slistEl * next;
  char data;
};

// Lista
struct slist
{
  slistEl * head;
};


/** @brief Inicjalizacja listy
*
* Funkcja zostaje zainicjalizowana
*  
* @param[in] list  wskaznik do listy
*  
* @return Funkcja nie zwraca niczego 
*/
void init(slist * list);


/** @brief Dodawanie elementu na koniec listy
*
* Funkcja dodaje na koniec listy wartosc, ktora jest podana jako drugi 
* parametr
*
* @param[in] list  wskaznik do listy
* @param[in] c  wartosc szukanego elementu 
* @return Funkcja nie zwraca niczego
*/
void push_back(slist * list, char c);


/** @brief Usuwanie pierwszego elementu w liscie.
*
* Funkcja sprawdza czy na poczatku listy znajduje sie cokolowiek, jesli tak
*  
*
*
* @param[in] list  wskaznik do listy
*  
* @return Funkcja nie zwraca niczego 
*/
void pop_front(slist * list);


/** @brief Wyszukanie elementu w liscie.
*
* Funkcja przeszukuje liste w celu znalezienia podanego elementu.
*
* @param[in] list  wskaznik do listy
* @param[in] c  wartosc szukanego elementu 
* @return wskaznik do pierwszego elementu listy o wartosci c jesli taki element jest w liscie \n
* NULL jesli lista nie posiada elementu o wartosci c
*/
slistEl * find(slist * list, char c);


/** @brief Wyswietlanie elementow listy
*
* Funkcja przechodzi kolejno po kazdym elemencie listy i wyswietla
*jego wartosc
*  
* @param[in] list  wskaznik do listy
*  
* @return Funkcja nie zwraca niczego 
*/
void printl(slist * list);

#endif
