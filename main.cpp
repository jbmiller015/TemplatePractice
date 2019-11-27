#include "list.h"
#include <iostream>

using namespace std;

void print(List<int> list)
{
    for (int i = 0; i < list.size(); i++)
        cout << list.get(i) << " ";
    cout << endl;
}

int main()
{
    const int SIZE = 10;

    // create list of integers
    List<int> intList(SIZE);

    // populate lists
    for (int i = 0; i < SIZE; i++)
        intList.add(i * 2);

    //print lists
    cout << "integer list values: " << endl;
    print(intList);

    // populate again
    for (int i = 0; i < SIZE; i++)
        intList[i]++;

    //print lists
    cout << "integer list values: " << endl;
    print(intList);

    return 0;
}