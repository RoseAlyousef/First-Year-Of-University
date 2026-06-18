#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

// تابع لخلط الأوراق عشوائياً في الذاكرة
void shuffle(int deck[][13]) {
    int row, column;
    for (int card = 1; card <= 52; card++) {
        do {
            row = rand() % 4;
            column = rand() % 13;
        } while (deck[row][column] != 0); // البحث عن مكان فارغ

        deck[row][column] = card;
    }
}

// تابع لتوزيع الأوراق وطباعة أسمائها
void deal(const int deck[][13], const char *face[], const char *suit[]) {
    for (int card = 1; card <= 52; card++) {
        for (int row = 0; row <= 3; row++) {
            for (int column = 0; column <= 12; column++) {
                if (deck[row][column] == card) {
                    cout << setw(5) << right << face[column]
                         << " of " << setw(8) << left << suit[row]
                         << (card % 2 == 0 ? '\n' : '\t');
                }
            }
        }
    }
}

int main() {
    // مصفوفة مؤشرات نصية لأنواع الأوراق
    const char *suit[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};

    // مصفوفة مؤشرات نصية لقيم الأوراق
    const char *face[13] = {"Ace", "Deuce", "Three", "Four", "Five",
                            "Six", "Seven", "Eight", "Nine", "Ten",
                            "Jack", "Queen", "King"};

    int deck[4][13] = {0}; // تهيئة المصفوفة بالكامل بالصفر

    srand(time(0)); // تهيئة البذرة العشوائية زمنياً

    shuffle(deck);
    deal(deck, face, suit);

    return 0;
}
