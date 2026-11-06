#include <iostream>
#include <vector>

long long fib(int n, std::vector<long long>& memo) {
    if (n <= 1) {
        return n;
    }
    if (memo[n] != -1) {
        return memo[n];
    }
    memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
    return memo[n];
}

int main() {
    int n;
    std::cin >> n;

    std::vector<long long> memo(n + 1, -1);
    std::cout << fib(n, memo) << std::endl;

    return 0;
}