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

    long int result = 1;
    for (int i=0; i<m; i++)
    {
        result *= n;
    }
    cout<<"n^m = "<<result<<endl;

    return 0;
}
