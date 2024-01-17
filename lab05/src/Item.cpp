#include <iostream>
#include "Item.h"

Item::Item(): name(""), price(0.0), quantity(0.0){
    std::cout << "Wywolanie konstruktora Item..." <<std::endl;
}
Item::Item(const std::string &name):name(name), price(0.0), quantity(0.0){

}
Item::Item(const std::string &name, double price, double quantity):name(name), price(price), quantity(quantity){

}
Item::Item(const Item &other){

}
Item::~Item(){
    std::cout << "Wywolanie destruktora Item..." <<std::endl;
}
void Item::Presentation() const{
    std::cout << "### Prezentacja pozycji zamowienia ###" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Cena: " << price << std::endl;
    std::cout << "Ilosc: " << quantity << std::endl;
}
void Item::SetName(const std::string &name){
    this->name = name;
}
void Item::SetPrice(double price){
    this->price = price;
}
void Item::SetQuantity(double quantity){
    this->quantity = quantity;
}