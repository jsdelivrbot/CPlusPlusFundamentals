//  "Copyright Telerik Academy 2015"

#include <math.h>
#include <iostream>

int main() {
    cout << "N= ";
    int n;
    cin >> n;

    long result = 1l;
    while (1) {
        if (n == 1) {
            break;
        }
        result *= n;
        n--;
    }

    cout << "n! = " << result << endl;

    return 0;
}
