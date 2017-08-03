#ifndef FOO_H_
#define FOO_H_

typedef struct {
    char *name;
} foo_struct_t;

extern foo_struct_t foo_struct;

#if defined(FOO_APPLY_WORKAROUND)
extern int foo_int;
#endif

#endif // FOO_H_
