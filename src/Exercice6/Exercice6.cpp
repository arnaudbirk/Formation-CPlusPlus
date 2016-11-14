#include <iostream>

using namespace std;

void multipliePar2(int & n){
    n *= 2;
}

int main()
{
    int a = 3;

    multipliePar2(a);
    cout << a << endl;

    return 0;
}
