#include<iostream>
using namespace std;
int main()
{
    int vint = 55;
    int *pint;
    cout<<"Initial vint = "<<vint<<endl;
    pint = &vint;
    *pint = 77;

    cout<<"Vint now = "<<vint<<endl;

    return 0;
}
