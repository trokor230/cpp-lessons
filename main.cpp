#include <iostream>
#include "main.h"
#include <iomanip>
#include <locale>

using namespace std;
int main(int argc, char const *argv[])

{

    int numbers[100];
    int e = 0;
    int sum_3 = 0;

    int i = 0;
    int sum_2 = 0;
    int sum_1 = 0;
    int sum = 0;
    for (int i = 0; i < 101; i++)
    {
        sum = sum + i;
    }
    cout << sum << endl;
    while (i < 101)
    {

        sum_1 = sum_1 + i;
        i++;
    }
    cout << sum_1 << endl;

    i = 0;
    do
    {

        sum_2 = sum_2 + i;
        i++;
    } while (i < 101);

    cout << sum_2 << endl;

    while (e < 100)
    {
        numbers[e] = e;
        e++;
    }
    cout << e << endl;
    for (size_t i = 0; i < 100; i++)
    {
        // cout << numbers[i] << endl;
    }
    int matrix[10][10];
    for (size_t i = 0; i < 10; i++)
    {

        for (size_t j = 0; j < 10; j++)
        {
            matrix[i][j] = i * j;
        }
        //обход матрицы 1010010
    }

    for (size_t i = 0; i < 10; i++)
    {

        for (size_t j = 0; j < 10; j++)
        {
            cout << setw(5) << matrix[i][j] << " ";
        }

        cout << endl;
    }
    cout << "main string" << endl;

    for (size_t i = 0; i < 10; i++)
    {

        cout << setw(5) << matrix[i][i] << " ";
    }
    cout << endl;
    cout << "second string" << endl;
    for (size_t i = 0; i < 10; i++)
    {

        cout << setw(5) << matrix[9 - i][0 + i] << " ";
    }
    cout << endl;
    for (size_t i = 0; i < 10; i++)
    {

        for (size_t j = 0; j < 10; j++)
        {
            if (matrix[i][j] % 2 == 1)
            {
                matrix[i][j] = 1;
            }
            else
            {
                matrix[i][j] = 0;
            }
        }
    }
    for (size_t i = 0; i < 10; i++)
    {

        for (size_t j = 0; j < 10; j++)
        {
            cout << setw(5) << matrix[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
