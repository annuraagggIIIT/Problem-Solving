#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int searchDecimal(string &str)
{

    size_t position = str.find('.');

    if (position != string::npos)
    {
        return position;
    }
    else
    {
        return -1;
    }
}

double binaryToDecimal(string &str)
{

    int startPower = str.length() - 1;
    // search the decimal and set index accordingly
    int decimalPos = searchDecimal(str);
    if (decimalPos != -1)
    {
        startPower = decimalPos - 1;
    }

    double decimalValue = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '1')
        {
            decimalValue += 1 * pow(2, startPower);
            startPower--;
        }
        else if (str[i] == '.')
        {
            continue;
        }
        else if (str[i] == '0')
        {
            decimalValue += 0 * pow(2, startPower);
            startPower--;
        }
    }

    return decimalValue;
}

bool isValid(string &str)
{
    int dotCount = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != '0' && str[i] != '1' && str[i] != '.')
        {
            return false;
        }
        if (str[i] == '.')
        {
            dotCount++;
        }
    }
    if (dotCount > 1)
    {
        return false;
    }
    return true;
}

int main()
{
    string str;
    cout << "Enter a binary number: ";
    cin >> str;

    if (!isValid(str))
    {
        cout << "Invalid input!"<<endl;
        return 0;
    }

    cout <<"Decimal: "<<binaryToDecimal(str)<<endl;;

    return 0;
}