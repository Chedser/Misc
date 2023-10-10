#include <iostream>
#include "List.h"
using namespace std;

int main(){
    setlocale(LC_ALL, "ru");
    
    List<int> lst;

    int numbersCount;
    cout << "Введите количество элементов списка" << endl;
    cin >> numbersCount;

    if(!cin){
        cout << "Неверный ввод" << endl;
        return 1;
    }

    for (int i = 0; i < numbersCount; i++) {
        lst.push_back(rand() % 10);
    }

    cout << endl << "Элементов в списке " << lst.getSize() << endl;
    lst.print();

    cout << "Выполнение метода pop_front" << endl;
    lst.pop_front();
    cout << "Элементов в списке " << lst.getSize() << endl;
    lst.print();

    cout << "Выполнение метода clear" << endl;
    lst.clear();
    cout << "Элементов в списке " << lst.getSize() << endl;
    lst.print();

    cout << "Выполнение метода push_front" << endl;
    lst.push_front(3);
    cout << "Элементов в списке " << lst.getSize() << endl;
    lst.print();

    cout << "Выполнение метода insert" << endl;
    lst.insert(4, 0);
    lst.insert(1, 1);
    lst.insert(3, 3);
    cout << "Элементов в списке " << lst.getSize() << endl;
    lst.print();

    cout << "Выполнение метода removeAt" << endl;
    lst.removeAt(1);
    cout << "Элементов в списке " << lst.getSize() << endl;
    lst.print();

    cout << "Выполнение метода pop_back" << endl;
    lst.pop_back();
    cout << "Элементов в списке " << lst.getSize() << endl;
    lst.print();
    
    return 0;
}
