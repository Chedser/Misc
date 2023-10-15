#include <iostream>
using namespace std;

void FillArray(int* const arr, const int size){
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10;
    }
}

void PrintArray(const int* const arr, const int size){
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

void push_back(int *&arr, int& size, const int value){
    int* newArray = new int[size + 1];

    for (int i = 0; i < size; i++) {
        newArray[i] = arr[i];
    }

    newArray[size] = value;
    size++;
    delete[] arr;
    arr = newArray;
}

void  pop_back(int *&arr, int& size){
    size--;
    int* newArray = new int[size];
    for (int i = 0; i < size; i++) {
        newArray[i] = arr[i];
    }
    
    delete[] arr;

    arr = newArray;

}

int main(){
    setlocale(0, "ru");
    
    int size = 5;
    int* arr = new int[size];

    FillArray(arr, size);
    PrintArray(arr, size);
    cout << endl;
    push_back(arr, size, 111);
    PrintArray(arr, size);

    cout << endl;
    pop_back(arr, size);
    PrintArray(arr, size);

    delete [] arr;

    return 0;
}

