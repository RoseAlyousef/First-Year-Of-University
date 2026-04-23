#include <iostream>

using namespace std;

int add (int x , int y)
{
    int sum ;
    sum = x + y ;
    return sum ;
}

int main ()
{
    int x , y  ;
    cout << "enter x" << endl;
    cin >> x;
    cout << "enter y" << endl;
    cin >> y;
    cout << "the add is " <<" " << add (x,y) << endl;
    return 0;
}
