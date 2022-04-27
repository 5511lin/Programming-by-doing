#include <iostream>
#include <stdlib.h>
#include <time.h> 
using namespace std;

int main()
{
    srand (time(NULL));
    int array[10];
    int large = 0;
    int arraySize = *(&array + 1) - array;
    int s = 0;
    int *slot = &s;
    cout << "Array: ";
    for(int i = 0; i < arraySize; i++) {
        array[i]=rand() % 50 + 1;
        cout<<array[i]<< " ";
    }
    for(int i = 0; i < arraySize-1; i++) {
            if(large < array[i]) {
                large = array[i];
                *slot = i;
            }
    }
    cout << endl;
    cout << "The largest value is " << large << endl;
    cout << "It is found at slot " << *slot << endl;
    return 0;
}