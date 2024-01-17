#include <iostream>
#include "Order.h"

Order::Order(): name(""), itemCount(0) {
        std::cout << "Wywolanie konstruktora Order..." <<std::endl;
    }
Order::Order(const std::string &orderName): name(orderName), itemCount(0){

    }
Order::Order(const std::string &orderName,  const Item &p1, const Item &p2, const Item &p3): name(orderName), itemCount(3), items(items){

    }
Order::Order(const std::string &orderName,  const Item &p1, const Item &p2, const Item &p3, const Item &p4): name(orderName), itemCount(4), items(items){

    }
Order::Order(const std::string &orderName, double itemQuantity, const Item newItems[]){}
Order::~Order(){
        std::cout << "Wywolanie desstruktora Order..." <<std::endl;
    }

void Order::Presentation() const{

    }
void Order::SetName(const std::string &orderName){

    }
void Order::SetItem(int index, const std::string &itemName, double itemPrice, double itemQuantity){

    }
void Order::SetNewItems(int itemCount, const Item newItems[]){
    }


    Item *Order::GetItems() const {
    return items;
}