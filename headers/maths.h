#ifndef LIBUTILS_MATHS_ID
#define LIBUTILS_MATHS_ID

#define BASIS_BIN       "01"
#define BASIS_OCT       "01234567"
#define BASIS_DEC       "0123456789"
#define BASIS_HEX       "0123465789ABCDEF"
#define MATH_SUCCESS    0x01
#define MATH_ADD        0x02
#define MATH_SUB        0x04
#define MATH_MUL        0x04
#define MATH_DIV        0x10
#define MATH_MOD        0x20
#define MATH_POSITIVE   0x40
#define MATH_NEGATIVE   0x80
#define MATH_ZERO       0x100

/* PROTOTYPES START */
int         _add(int a, int b, int *flag);
int         _sub(int a, int b, int *flag);
int         _mul(int a, int b, int *flag);
int         _div(int a, int b, int *flag);
int         _mod(int a, int b, int *flag);
int         min(int a, int b);
int         max(int a, int b);
int         _maths_flag(int set, int value);
int         _set_maths_flag(int value);
int         _get_maths_flag(void);
int         _reset_maths_flag(void);
void        _print_maths_infos(void);
/* PROTOTYPES END */

#endif
