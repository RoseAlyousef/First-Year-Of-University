#include <iostream>
using namespace std;

void copy1(char s1[], const char *s2) {
    for (int i = 0; (s1[i] = s2[i]) != '\0'; i++) { }
}
void copy2(char *s1, const char *s2) {
    for (; (*s1 = *s2) != '\0'; s1++, s2++) { }
}

int main() {
    char arr1[10];
    char arr2[10];
    const char *string2 = "Hello";
    char string4[] = "Good Bye";

    copy1(arr1, string2);
    cout << "string1 = " << arr1 << endl;

    copy2(arr2, string4);
    cout << "string3 = " << arr2 << endl;

    return 0;
}
