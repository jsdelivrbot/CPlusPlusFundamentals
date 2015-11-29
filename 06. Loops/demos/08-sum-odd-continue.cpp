#include <iostream>
using namespace std;

int main()
{
    cout<<"Sum all odd numbers in [1, n] that are not divisors of 7:"<<endl;
    cout<<"N= ";
    int n;
    cin>>n;
    int sum = 0;
    for (int i = 1; i <= n; i += 2)
    {
        if (i % 7 == 0)
        {
            continue;
        }
        sum += i;
    }
    cout<<"The sum is "<<sum<<endl;
    return 0;
}
