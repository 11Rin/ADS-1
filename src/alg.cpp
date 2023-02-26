// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    for (int i = 2; i < value; i++)
        if (value % i == 0) return false;
    return true;
}

uint64_t nPrime(uint64_t n) {
    int value = 2;
    int cnt = 0;
    while (cnt < n) {
        if (checkPrime(value)) {
            cnt++;
        }
        value++;
    }
    return value - 1;
}

uint64_t nextPrime(uint64_t value) {
    value = value + 1;
    for (int i = value; ;i++)
        if (checkPrime(i)) return i;
}

uint64_t sumPrime(uint64_t hbound) {
    long sum = 0;
    for (int j = 2; j < hbound; j++) {
        if (checkPrime(j)) sum = sum + j;
    }
    return sum;
}
