#pragma once
#include <vector>

#define T uint8_t

typedef struct SingleFrame_NPDU_s {
    union N_PCIbyte {
        T Byte1;
        struct B1 {
            T SF_DL : 4;
            T N_PCItype : 4;
        } b1;
    } N_PCIbyte1;
    std::vector<T> N_DATA;
} sfHeader_t;