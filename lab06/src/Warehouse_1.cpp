#include <iostream>
#include "Warehouse_1.h"

Warehouse_1::Warehouse_1(): size(0){}
bool Warehouse_1::IsEmpty(){
    return size == 0;
}
bool Warehouse_1::IsFull(){
    return size == 4;
}
int Warehouse_1::Remove(){
    if(size > 0){
        int value = arr[size];
        size--;
        return value;
    }
    else 
    {
        std::cout << "#BLAD: Obiekt zapelniony" << std::endl;
        return -1;
    }

}
void Warehouse_1::Insert(int value){
    if(size <4)
    {
        arr[size++] = value;
    }
    else
    {
        std::cout << "#BLAD: Obiekt zapelniony" << std::endl;
    }

}
void Warehouse_1::Print(){
    std::cout << "#Zawartosc obiektu:" << std::endl;
    for (int i=0; i< size;i++)
    {
        std::cout << arr[i] << ',';
    }
    putchar('\n');
}
int Warehouse_1::Size(){
    return size;
}
void Warehouse_1::Clear(){
    size = 0;
}
