#ifndef GET_NUM_H
#define GET_NUM_H

#define GN_NONEG 01
#define GN_GT_0  02

#define GN_ANY_BASE 0100
#define GN_BASE_8 0200
#define GN_BASE_16 0400

long getLong(const char* arg, int flag, const char* num);
int getInt(const char* arg, int flag, const char* num);

#endif