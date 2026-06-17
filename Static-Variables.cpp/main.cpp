#include <iostream>
using namespace std;

static int globalStatic = 100;

void showGlobalStatic() {
    cout << "Inside showGlobalStatic: globalStatic = " << globalStatic << endl;
    globalStatic += 10;
    cout << "Inside showGlobalStatic after increment: globalStatic = " << globalStatic << endl;
}

void counterFunction() {

    static int count = 0;


    int temp = 0;

    count++;
    temp++;

    cout << " static count = " << count << " | non-static temp = " << temp << endl;
}

int main() {
    cout << "===== Static Local Variable =====" << endl;
    cout << "First call to counterFunction:" << endl;
    counterFunction();

    cout << "Second call to counterFunction:" << endl;
    counterFunction();

    cout << "Third call to counterFunction:" << endl;
    counterFunction();

    cout << "\n===== Static Global Variable =====" << endl;
    cout << "In main before: globalStatic = " << globalStatic << endl;
    showGlobalStatic();
    cout << "In main after: globalStatic = " << globalStatic << endl;

    return 0;
}
