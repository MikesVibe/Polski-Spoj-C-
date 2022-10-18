#include <iostream>

int recursion(int S, int iteration = 0);

int main()
{
    int input;
    int number_of_tests;
    std::cin >> number_of_tests;

    for (int i = 0; i < number_of_tests; i++)
    {
        std::cin >> input;
        std::cout << recursion(input) << "\n";
    }

    return 0;
}

int recursion(int S, int iteration)
{
    if (S == 1)
        return iteration;

    int Xn1 = S;
    Xn1 = (S % 2 == 1) ? 3 * S + 1 : Xn1 = S / 2;
    return recursion(Xn1, ++iteration);
}