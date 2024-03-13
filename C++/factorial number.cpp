#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int number;
    cin>>number;
    int result = 1;

    while (i <= number) {
        result = result * i;
        ++i;
        }
    cout<<result<<endl;
    return 0;
}
