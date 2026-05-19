#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int RESPONSESIZE = 40;
    const int FREQUENCYSIZE = 11;
    int responses[RESPONSESIZE];
    int frequency[FREQUENCYSIZE] = {0};
    srand(time(0));
    for (int i = 0; i < RESPONSESIZE; i++) {
        responses[i] = 1 + rand() % 10;
        ++frequency[responses[i]];
    }
    cout << "Rating" << setw(17) << "Frequency" << endl;
    for (int rating = 1; rating < FREQUENCYSIZE; rating++) {
        cout << setw(6) << rating << setw(17) << frequency[rating] << endl;
    }

    return 0;
}
