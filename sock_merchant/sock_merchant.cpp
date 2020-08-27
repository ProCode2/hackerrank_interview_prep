/*
 * Problem: https://www.hackerrank.com/challenges/sock-merchant/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup
 */
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> ar = { 1, 2, 3, 1, 2, 1, 2 };
    int freq_array[101] = {0};

    for (auto x : ar)
    {
        freq_array[x] += 1;
    }

    int count = 0;

    for (int i = 0; i < 101; i++)
    {
        if (freq_array[i] >= 2)
        {
            count += freq_array[i] / 2;
        }
    }
    
    printf("%d\n", count);
    return 0;
}

