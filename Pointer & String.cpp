#include<iostream>
using namespace std;

int main()
{
    char figure[] = "GatotKaca";
    char *pfigure = "GatotKaca";

    cout<<" Figure   = " <<figure<<endl;
    cout<<" pfigure = " <<pfigure<<endl;

    pfigure++;

    cout<<" ptokoh  = " <<pfigure<<endl;

    return 0;
}
