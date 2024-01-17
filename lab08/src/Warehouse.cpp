#include <iostream>
#include "Warehouse.h"

using namespace std;


Warehouse::Warehouse(){}
Warehouse::Warehouse(Product &productRef){
    products.push_back(productRef);
}
Warehouse::Warehouse( vector<Product> prodVec){
    products = prodVec;
}
Warehouse::Warehouse(int len, Product *product[]){
    for(int i = 0; i < len; i++){
        products.push_back(*product[i]);
    }
}
Warehouse::Warehouse(Product &product1, Product &product2){
    products.push_back(product1);
    products.push_back(product2);

}
// Warehouse::~Warehouse() {}
void Warehouse::Print() {
    cout << "---" << endl;
    cout << "# Zawartosc/sklad:" << endl;
    for(int i =0; i < products.size(); i++){
        products[i].Product::Print();
    }
    cout << "---" << endl;
}

void Warehouse::Add(Product &p) {
    products.push_back(p);
}
void Warehouse::Remove() {
    if(products.empty()){
        cout << "BLAD: Pusto !" << endl;
    }else{
        products.pop_back();
    }
}
void Warehouse::Clear() {
    products.clear();
}
