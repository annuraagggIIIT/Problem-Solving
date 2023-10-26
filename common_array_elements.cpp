#include <iostream>
#include <vector>
using namespace std;

int isPresent(int k, vector<int> &vec)
{
    for (int element : vec)
    {
        if (element == k)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int size1, size2;
    cout << "Enter the size of the first array: ";
    cin >> size1;

    if (size1 == 0)
    {
        cout << "-1" << endl;
        return 0;
    }

    int array1[size1];
    cout << "Enter " << size1 << " elements for the first array: ";
    for (int i = 0; i < size1; i++)
    {
        cin >> array1[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> size2;

    if (size2 == 0)
    {
        cout << "-1" << endl;
        return 0;
    }

    int array2[size2];
    cout << "Enter " << size2 << " elements for the second array: ";
    for (int i = 0; i < size2; i++)
    {
        cin >> array2[i];
    }

    vector<int> commonElements;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (array1[i] == array2[j] && !isPresent(array1[i], commonElements))
            {
                commonElements.push_back(array1[i]);
            }
        }
    }

    if (commonElements.empty())
    {
        cout << "No common elements found." << endl;
    }
    else
    {
        cout << "Common elements: ";
        for (int element : commonElements)
        {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}