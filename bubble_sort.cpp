#include <iostream>

int main() {
    int numbers[] = {8, 3, 6, 2, 7, 1};
    const int n = 6;

    // 每一轮将未排序部分的最大值移动到右端。
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        if (i > 0) {
            std::cout << ' ';
        }
        std::cout << numbers[i];
    }
    std::cout << '\n';

    return 0;
}
