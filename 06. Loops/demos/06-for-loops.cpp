#include <iostream>
using namespace std;

int main()
{
    cout<<"Print the numbers from 0 to 10:"<<endl;
    for (int number = 0; number < 10; number++)
    {
        cout<<number<<" ";
    }
    cout<<endl<<"---------------------------------------"<<endl;

    cout<<"Calculated N!:"<<endl;
    cout<<"N= ";
    int n;
    cin>>n;
    long int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    cout<<"N!= "<<factorial<<endl<<"---------------------------------------"<<endl;

    cout<<"Print values with complex for loops:"<<endl;
    for (int i=1, sum=1; i<=128; i=i*2, sum+=i)
    {
        cout<<"i="<<i<<", sum="<<sum<<endl;
    }
    return 0;
}
