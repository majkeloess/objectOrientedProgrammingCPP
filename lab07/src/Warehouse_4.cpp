#include <iostream>
#include "Warehouse_4.h"

Warehouse_4::Warehouse_4(){}
bool Warehouse_4::IsEmpty(){
    return arr.empty();
}
bool Warehouse_4::IsFull(){
    return false;
}
int Warehouse_4::Remove(){
    if(arr.size() > 0){
        int value = arr[0];
        arr.erase(arr.begin());
        return value;
    }
    else 
    {
        std::cout << "#BLAD: Obiekt pusty" << std::endl;
        return -1;
    }

}
void Warehouse_4::Insert(int value){
    arr.push_back(value);
}
void Warehouse_4::Print(){
    std::cout << "#Zawartosc obiektu:" << std::endl;
    for (const auto &element : arr)
    {
        std::cout << element << ',';
    }
    putchar('\n');
}
int Warehouse_4::Size(){
    return arr.size();
}
void Warehouse_4::Clear(){
    arr.clear();
}
