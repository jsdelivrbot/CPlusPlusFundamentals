#include <iostream>
using namespace std;

int main()
{
    cout<<"N= ";
    int n;
    cin>>n;
    int factorial = 1;
    do
    {
        factorial *= n;
        n--;
    }
    while (n > 0);
    cout<<"n!= "<<factorial<<endl;

    return 0;
}
