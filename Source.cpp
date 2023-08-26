#include <cstring>
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    system("chcp 1251");
    system("cls");
    {
        char* string = new char[25];
        const int m = 5;
        const int n = 5;
        int i, j;
        cout << "  The Polybius Cipher " << endl;
        cout << endl;

        char A[m][n] = { {'A', 'B', 'C', 'D', 'E'},
                {'F', 'G', 'H', 'I', 'K'},
                {'L', 'M', 'N', 'O', 'P'},
                {'Q', 'R', 'S', 'T', 'U'},
                {'V', 'W', 'X', 'Y', 'Z'} };
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << setw(2) << A[i][j] << ' ';

            }
            cout << endl;

        }
        cout << "¬ведите слово : ";
        cin >> string;
        for (int k = 0; k < strlen(string); k++)
        {
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    if (string[k] == A[i][j])
                    {
                        cout << i + 1 << j + 1 << setw(2);

                    }

                }

            }

        }
        cout << endl;

    }
    system("pause");
    return 0;

}