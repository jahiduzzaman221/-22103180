#include <iostream>
int main() {
    int n;
    std::cin >> n;
    int* arr = new int[n]; // heap with runtime size
    for (int i = 0; i < n; ++i) arr[i] = i;
    for (int i = 0; i < n; ++i) std::cout << arr[i] << " ";
    delete[] arr;
    return 0;
}
