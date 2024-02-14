#include <iostream>
#include <vector>

int main() {

    std::vector<int> v = {1, 2, 3, 4, 5};
    v.push_back(6);

    for (const auto& elem : v) {
        std::cout << elem << std::endl;
    }

    // std::cout << elem << std::endl;
    v.clear();

    v.push_back(10);
    v.push_back(20);

    for (const auto& elem : v) {
        std::cout << elem << std::endl;
    }

    v.pop_back();

    for (const auto& elem : v) {
        std::cout << elem << std::endl;
    }
}