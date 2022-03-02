#include <iostream>

int main()
{
    int q, l, r, d;

    std::cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x = 1;
        std::cin >> l >> r >> d;

        while (!(x % d == 0 && ((l > x && x < r) || (l < x && x > r)))) {
            x++;
        }
        std::cout << x << "\n";
    }

    return 0;
}