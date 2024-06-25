#include <iostream>
#include <vector>

int main() {
    int N; // Number of friends
    std::cout << "Enter the number of friends (N): ";
    std::cin >> N;

    std::vector<int> candies(N);
    int totalCandies = 0;

    // Input the initial number of candies for each friend and calculate the total
    for (int i = 0; i < N; i++) {
        std::cout << "Enter the initial number of candies for friend " << i + 1 << ": ";
        std::cin >> candies[i];
        totalCandies += candies[i];
    }

    // Check if the sum is divisible by the number of friends
    if (totalCandies % N != 0) {
        std::cout << "It's impossible to distribute the candies evenly." << std::endl;
        return 0;
    }

    int targetCandies = totalCandies / N;

    for (int i = 0; i < N; i++) {
        int diff = candies[i] - targetCandies;
        if (diff % 2 != 0) {
            std::cout << "It's impossible to distribute the candies evenly." << std::endl;
            return 0;
        }
    }

    std::cout << "It's possible to distribute the candies evenly." << std::endl;

    return 0;
}
