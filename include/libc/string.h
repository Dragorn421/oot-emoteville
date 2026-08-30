#ifndef STRING_H
#define STRING_H

#include "stddef.h"

char* strchr(const char*, int);
size_t strlen(const char*);

void* memcpy(void*, const void*, size_t);
void* memset(void* ptr, int val, size_t size);
void* memmove(void* dst, const void* src, size_t size);

#endif
