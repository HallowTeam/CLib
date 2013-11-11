#ifndef LIBUTILS_TYPES_ID
#define LIBUTILS_TYPES_ID

typedef enum e_var
{
	INT, CHAR, STR, PTR

} e_var;

typedef union u_var
{
	int   _int;
	char  _char;
	char  *_str;
	void  *_ptr;

} u_var;

typedef struct s_var
{
	e_var type;
	u_var value;

} s_var;

/* PROTOTYPES START */
void        printVar(s_var *var);
int         setInt(s_var *var, int value);
char        *setStr(s_var *var, char *value);
void        *setPtr(s_var *var, void *value);
char        setChar(s_var *var, char value);
int         getInt(s_var *var);
char        *getStr(s_var *var);
void        *getPtr(s_var *var);
char        getChar(s_var *var);
/* PROTOTYPES END */

#endif
