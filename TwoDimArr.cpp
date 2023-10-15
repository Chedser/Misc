#include <iostream>
using namespace std;

int main(){
    setlocale(0, "ru");
    
    int rows = 3;
    int cols = 4;
    int** arr = new int*[rows];

    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = rand() % 10;
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
        arr[i] = nullptr;
    }
    
    delete[] arr;
    arr = nullptr;

    return 0;
}
