#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    cin >> n;
    printf("10 = %d\n", n / 10);
    printf("5 = %d\n", (n % 10) / 5);
    printf("2 = %d\n", ((n % 10) % 5) / 2);
    printf("1 = %d\n", ((n % 10) % 5) % 2 / 1);
    return 0;
}