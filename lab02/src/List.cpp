#include "List.h"
#include <iostream>

using namespace std;


void init(slist * list)
{
  list->head = NULL;
}

void push_back(slist * list, char c)
{
  slistEl * p, * e;

  e = new slistEl;  
  e->next = NULL;   
  e->data = c;
  p = list->head;
  if( p )
  {
     while( p->next ) p = p->next;
     p->next = e;
  }
  else list->head = e;
}

slistEl * find(slist * list, char c)
{
  slistEl * p = list->head;
  while(p != NULL)
  {
  	if( p->data == c )
  	  break;
  	p = p->next;
  }
  
  return p;
}

void pop_front(slist * list)
{
  if (list->head)
  {
    slistEl *temp = list->head;
    list->head=list->head->next;  
    delete temp;
  } 
}

void printl(slist * list)
{
  slistEl *temp = list->head;
  cout << "Moja lista: <";
  while (temp != NULL)
  {
    cout << temp->data;
    temp = temp->next;  
  }
  cout << ">" << endl;

}