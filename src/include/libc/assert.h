#ifndef ASSERT_H
#define ASSERT_H

#ifdef NDEBUG
#define assert(expression) ((void)0)
#else
void throw_assert(const char *expression, const char *filename, unsigned int line);
#define assert(expression) \
    if (!expression)       \
        throw_assert(#expression, __FILE__, (unsigned int)__LINE__);
#endif

#endif // ASSERT_H