#include <iostream>

using namespace std;

int main()
{

    int liczba, suma=0;
    cin >> liczba;

    for(int i=1; i<liczba; i++)
        if(liczba%i==0)
        {
            suma+=i;
            cout << i << " ";
        }

    if(liczba==suma)
        cout << "\n\n To jest liczba doskonala" << endl;
    else
        cout << "\n\n To nie jest liczba doskonala" << endl;


    return 0;
}
