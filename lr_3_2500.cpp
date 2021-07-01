// lr_3_2500.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <time.h>
using namespace std;


void delete_otrichateln() {
    srand(time (NULL));
    int n = 20;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
        arr[i] = -5 + (rand() % 11); // Случайные числа от -5 до 5

    cout << "начальный массив" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int count_poloj = 0;
    for (int i = 0; i < n; i++) { // Считаем количество положительным чисел в массиве
        if (arr[i] >= 0)
            count_poloj++;
    }

    int* new_arr = new int[count_poloj];

    for (int i = 0, j = 0; i < n; i++) {
        if (arr[i] >= 0)
            new_arr[j++] = arr[i];
    }

    cout << "Итоговый массив" << endl;
    for (int i = 0; i < count_poloj; i++) {
        cout << new_arr[i] << " ";
    }

    delete[]arr;
    delete[]new_arr;
}


void find_glasnie() {
    char glasnie[20] = { 'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y' };
    string stroka;
    cout << "Введите строку: " << endl;
    cin >> stroka;
    bool flag;
    for (char& c : stroka) {
        flag = false;
        for (int j = 0; j < 18; j++) {
            if (int(c) == int(glasnie[j])) {
                flag = true;
                break;
            }
        }
        if (flag) {
            cout << c << " ";
        }
    }
    cout << endl;
}


int main()
{
    setlocale(LC_ALL, "ru");
    //delete_otrichateln();
    find_glasnie();

}
