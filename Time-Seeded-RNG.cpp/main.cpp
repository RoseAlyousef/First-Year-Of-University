#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator with current time
    srand(time(0));

    // Generate random numbers
    int i = rand();
    int r = rand();
    int t = rand();
    int y = rand();

    // Output the results
    cout << "Number 1: " << i << endl;
    cout << "Number 2: " << r << endl;
    cout << "Number 3: " << t << endl;
    cout << "Number 4: " << y << endl;

    return 0;
}
