#include <iostream>
#include <chrono>
#include <vector>

using namespace std;
using namespace std::chrono;

long long fiboRecursive(int n) {
    if (n <= 1)
        return n;
    return fiboRecursive(n - 1) + fiboRecursive(n - 2);
}

long long fiboDP(int n) {
    if (n <= 1)
        return n;
    vector<long long> fib(n + 1, 0);
    fib[1] = 1;
    for (int i = 2; i <= n; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib[n];
}


template <typename Func>
long long measureExecutionTime(Func func, int n, const char* funcName) {
    auto start = high_resolution_clock::now();
    long long result = func(n);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start).count();
    cout << funcName << " (n=" << n << "): " << result << "    Waktu Eksekusi: " << duration << " microseconds" << endl;
    return duration;
}

int main() {
    const int testValues[] = {10, 25, 30, 40, 50};
    const int numTests = sizeof(testValues) / sizeof(testValues[0]);

    cout << "Menghitung waktu eksekusi untuk Fibonacci dengan Rekursif:" << endl;
    for (int i = 0; i < numTests; ++i) {
        measureExecutionTime(fiboRecursive, testValues[i], "Recursive Fibonacci");
    }

    cout << "\nMenghitung waktu eksekusi untuk Fibonacci dengan Pemrograman Dynamic:" << endl;
    for (int i = 0; i < numTests; ++i) {
        measureExecutionTime(fiboDP, testValues[i], "DynamicP Fibonacci");
    }

    return 0;
}

