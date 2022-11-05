#include <iostream>
using namespace std;

void SplitWordsFromRow(char arr1[], char arr2[], char arr3[], const int SIZE)
{
    int len = strlen(arr1);
    arr1[len - 1] = '\0';

    for (int i = 0; i < SIZE; i++)
    {
        if (arr1[i] == '0')
            arr1[i] = ',';
    }

    len = strlen(arr2);
    arr2[len - 1] = '\0';

    for (int i = 0; i < SIZE; i++)
    {
        if (arr2[i] == '0')
            arr2[i] = ',';
    }

    len = strlen(arr3);
    arr3[len - 1] = '\0';

    for (int i = 0; i < SIZE; i++)
    {
        if (arr3[i] == '0')
            arr3[i] = ',';
    }

    cout << "\n(" << arr1 << ")\n" << endl;

    cout << "(" << arr2 << ")\n" << endl;

    cout << "(" << arr3 << ")\n" << endl;
}


int main()
{
    setlocale(LC_ALL, "rus");

    const int SIZE = 60;

    char arr1[SIZE], arr2[SIZE], arr3[SIZE];

    cout << "Введите первую строку :" << endl;

    cin >> arr1;

    cout << "Введите вторую строку :" << endl;

    cin >> arr2;

    cout << "Введите тртью строку :" << endl;

    cin >> arr3;

    SplitWordsFromRow(arr1, arr2, arr3, SIZE);

    return 0;
}