#ifndef LIBUTILS_ALLOCS_ID
#define LIBUTILS_ALLOCS_ID

/* PROTOTYPES START */
void        *xmalloc(size_t size);
void        *xcalloc(size_t members, size_t size);
void        *xrealloc(void *ptr, size_t size);
void        *xfree(void *ptr);
/* PROTOTYPES END */

#endif

