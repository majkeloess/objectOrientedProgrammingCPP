#include <iostream>
#include "Warehouse_2.h"

Warehouse_2::Warehouse_2(): size(0){}
bool Warehouse_2::IsEmpty(){
    return size == 0;
}
bool Warehouse_2::IsFull(){
    return size == 4;
}
int Warehouse_2::Remove(){
    if(size > 0){
        int value = arr[size];
        size--;
        return value;
    }
    else 
    {
        std::cout << "#BLAD: Obiekt pusty" << std::endl;
        return -1;
    }

}
void Warehouse_2::Insert(int value){
    if(size <4)
    {
        arr[size++] = value;
    }
    else
    {
        std::cout << "#BLAD: Obiekt zapelniony" << std::endl;
    }

}
void Warehouse_2::Print(){
    std::cout << "#Zawartosc obiektu:" << std::endl;
    for (int i=0; i< size;i++)
    {
        std::cout << arr[i] << ',';
    }
    putchar('\n');
}
int Warehouse_2::Size(){
    return size;
}
void Warehouse_2::Clear(){
    size = 0;
}
