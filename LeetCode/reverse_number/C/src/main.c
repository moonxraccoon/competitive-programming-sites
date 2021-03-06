#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>
#include <limits.h>


int reverse_number(int n);


int main() {
    printf("non-reversed: %d\n", 153423646);
    printf("reversed: %d\n", reverse_number(153423646));

    return 0;
}

int reverse_number(int x) {
    int64_t out = 0;
    int64_t last_digit = 0;

    if(x == 0)
    {
        return 1;
        exit(1);
    }

    while (x > 0 || x < 0) {
        last_digit = x % 10;
        if ((out*10) >= INT_MAX || (out*10) <= INT_MIN) {
            return 0;
        }
        out = (out * 10) + last_digit;     
        x /= 10;
    }

    
    return out;
}
