#include <iostream>
int main() {
    int n;
    std::cin >> n;
    int arr[n]; // VLA (stack allocated at runtime)
    for (int i = 0; i < n; ++i) arr[i] = i;
    for (int i = 0; i < n; ++i) std::cout << arr[i] << " ";
    return 0;
}
