#ifndef COMMON_CL
#define COMMON_CL

static unsigned long load_3(const unsigned char *in) {
    unsigned long result;

    result = (unsigned long) in[0];
    result |= ((unsigned long) in[1]) << 8;
    result |= ((unsigned long) in[2]) << 16;

    return result;
}

static uint64_t load_4(const unsigned char *in) {
    unsigned long result;

    result = (unsigned long) in[0];
    result |= ((unsigned long) in[1]) << 8;
    result |= ((unsigned long) in[2]) << 16;
    result |= ((unsigned long) in[3]) << 24;
    
    return result;
}

#endif
