#include <iostream>
using namespace std;

int main()
{
    cout<<"N= ";
    int n;
    cin>>n;
    cout<<"M= ";
    int m;
    cin>>m;
    int number = n;
    long product = 1;
    do
    {
        product *= number;
        number++;
    }
    while (number <= m);
    cout<<"product[n..m] = "<<product<<endl;

    return 0;
}
