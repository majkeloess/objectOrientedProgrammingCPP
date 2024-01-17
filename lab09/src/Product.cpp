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

string Product::ToString()
{
    return to_string(quantity);
}

Product::Product(int val)
{
    type = val;
}

Product::operator string() const 
{
    return "<ilosc=" + to_string(quantity) + " type="+ to_string(type) +">";
}

Product::operator int() const 
{
    return this->type;
}


int Compare(const Product &p1, const Product &p2)
{
    if(p1.quantity > p2.quantity) return 1;
    else if(p1.quantity < p2.quantity) return -1;
    else return 0;
}
