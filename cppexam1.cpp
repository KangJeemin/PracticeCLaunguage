#include <iostream>

int main() {
    int sum = 0;

    for (int i = 1; i <= 100; ++i) {
        sum += i;
    }

    std::cout << "1부터 100까지의 합: " << sum << std::endl;

    return 0;
}
