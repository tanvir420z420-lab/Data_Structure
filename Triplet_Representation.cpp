#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter the value of rows: " << "\n";
    cin >> rows;
    cout << "Enter the value of columns: " << "\n";
    cin >> cols;

    int arr[rows][cols];
    int index = 0;
    int new_array[100][3];

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
        cout << "\n";
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] != 0)
            {
                index++;
                new_array[index][0] = i;
                new_array[index][1] = j;
                new_array[index][2] = arr[i][j];
            }
        }
    }
    new_array[0][0] = rows;
    new_array[0][1] = cols;
    new_array[0][2] = index;

    cout << "The Triplet Representation :" << "\n";

    for (int i = 0; i < index; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << new_array[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}