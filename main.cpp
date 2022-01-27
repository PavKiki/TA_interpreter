#include <iostream>
#include <exception>
#include <bitset>

int main() {
    std::bitset<32> a(-5);
    std::cout << static_cast<int>(a.to_ulong());
    // std::cout << "KEllo woeld!";
    return 0;
}