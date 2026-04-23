#include <iostream>

using namespace std;

int compare (int x , int y , int z)
{
    if (x>y && x>z)
        return x;
    else if (y>x && y>z)
        return y;
    else
        return z;
}
int main()
{
    int a , b , c ;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b"<<endl;
    cin>>b;
    cout<<"enter c"<<endl;
    cin>>c;
    cout<<"the biggest number is"<<" "<<compare(a,b,c)<<endl;
    return 0;
}
