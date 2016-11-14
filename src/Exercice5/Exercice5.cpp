#include<iostream>
using namespace std;

int swap(int *pa, int *pb)
{
    int tmp;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
    return 0;
}

int main()
{
    int a, b;
    cout << "Saisissez un entier : ";
    cin >> a;
    cout << "Saisissez un autre entier : ";
    cin >> b;
    cout << "Vous avez saisi : " << a << " " << b << endl;
    swap(&a, &b);
    cout << "Apres swap : " << a << " " << b << endl;
    return 0;
}
