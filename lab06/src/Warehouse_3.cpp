#include <iostream>
#include "Warehouse_3.h"

Warehouse_3::Warehouse_3(int cap): size(0), capacity(cap){
    arr = new int [capacity];
}

Warehouse_3::~Warehouse_3() {
    delete [] arr;
}

bool Warehouse_3::IsEmpty(){
    return size == 0;
}
bool Warehouse_3::IsFull(){
    return size == 4;
}
int Warehouse_3::Remove(){
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
void Warehouse_3::Insert(int value){
    if(capacity < size)
    {

        arr[size++] = value;
    }
    else
    {
        int *newArr = new int[capacity*2];
        
        for(int i = 0; i < size; i++){
            newArr[i] = arr[i];
        }

        delete [] arr;
        arr = newArr;

        arr[size++] = value;
    }

}
void Warehouse_3::Print(){
    std::cout << "#Zawartosc obiektu:" << std::endl;
    for (int i=0; i< size;i++)
    {
        std::cout << arr[i] << ',';
    }
    putchar('\n');
}
int Warehouse_3::Size(){
    return size;
}
void Warehouse_3::Clear(){
    size = 0;
}
