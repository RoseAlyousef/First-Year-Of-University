#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int ARRAYSIZE = 7;
    int frequency[ARRAYSIZE] = {0};

    srand(time(0));

    for (int roll = 1; roll <= 6000; roll++) {
        ++frequency[1 + rand() % 6];
    }
    cout << "Face" << setw(13) << "Frequency" << endl;
    for (int face = 1; face < ARRAYSIZE; face++) {
        cout << setw(4) << face << setw(13) << frequency[face] << endl;
    }

    return 0;
}
