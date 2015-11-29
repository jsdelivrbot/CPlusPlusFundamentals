#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    for (int number = n; number <= m; number++)
    {
        bool prime = true;
        int divider = 2;
        int maxDivider = sqrt(number);
        while (divider <= maxDivider)
        {
            if (number % divider == 0)
            {
                prime = false;
                break;
            }
            divider++;
        }
        if (prime)
        {
            cout<<number<<" ";
        }
    }
    cout<<endl;

    return 0;
}
