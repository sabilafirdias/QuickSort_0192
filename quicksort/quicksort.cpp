// quicksort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int arr[20];
int cmp_count = 0;
int mov_count = 0;
int n;

void input() {
    while (true) {
        cout << "Masukkan panjang element array: ";
        cin >> n;

        if (n <= 20)
            break;
        else
            cout << "n\Maksimum panjang array adalah 20" << endl;
    }

    cout << "\n-------------------" << endl;
    cout << "\nEnter Array Element" << endl;
    cout << "\n-------------------" << endl;
}

int main()
{
    std::cout << "Hello World!\n";
}


