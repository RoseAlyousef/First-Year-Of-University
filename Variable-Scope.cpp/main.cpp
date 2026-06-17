#include <iostream>
using namespace std;


int counter = 0;

void showCounter() {
    cout << "Inside showCounter (global counter) = " << counter << endl;
}

void updateGlobal() {
    int counter = 999;
    cout << "Inside updateGlobal (local counter) = " << counter << endl;

    ::counter += 5;
    cout << "Inside updateGlobal (global counter after update) = " << ::counter << endl;
}

int main() {
    int counter = 10; // محلي في main

    cout << "In main: local counter = " << counter << endl;
    cout << "In main: global counter = " << ::counter << endl;

    {
        int counter = 20;
        cout << "Inside block: local block counter = " << counter << endl;

        ::counter = 100;
        cout << "Inside block: global counter after modification = " << ::counter << endl;

        showCounter();
    }

    cout << "\nAfter block: local counter in main = " << counter << endl;
    cout << "After block: global counter = " << ::counter << endl;

    updateGlobal();

    cout << "\nAfter updateGlobal: global counter = " << ::counter << endl;

    return 0;
}
