/*
 *  Problem: https://www.hackerrank.com/challenges/counting-valleys/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup
 */

#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int n = 8;
    string s = "UDDDUDUU";
    int prev_step  = 0, current_step = 0, valley = 0;
    for (int i = 0; i <= n; i++) {
        char ch = s[i];
        if (current_step == 0 && prev_step < current_step) {
            valley++;
        }
        if (ch == 'D') {
            prev_step = current_step;
            current_step--;
        }else {
            prev_step = current_step;
            current_step++;
        }
    }
    printf("%d\n", valley);
    return 0;
}
