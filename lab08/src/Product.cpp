#include <iostream>
#include "Product.h"
using namespace std;
Product::Product(int typeC, int quantityC): type(typeC), quantity(quantityC){

}
void Product::Print(){
    cout << "typ: " <<  type << ", ilosc sztuk:" << quantity << endl;
}
void Product::SetCard(int quantityF){
    quantity = quantityF;
}