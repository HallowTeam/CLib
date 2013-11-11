#ifndef LIBUTILS_INCLUDES_ID
#define LIBUTILS_INCLUDES_ID

#define _XOPEN_SOURCE 700

#include <math.h>
#include <fcntl.h>
#include <errno.h>
#include <ctype.h>
#include <stdio.h>
#include <netdb.h>
#include <signal.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <pthread.h>
#include <sys/stat.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/select.h>
#include <netinet/in.h>

/******************************************************************************/
/******************************************************************************/

#define MALLOC_FAIL     printf("Error : malloc()")

typedef enum e_bool
{
	true, false

} bool;

/******************************************************************************/
/******************************************************************************/

#include "allocs.h"
#include "maths.h"
#include "types.h"
#include "strings.h"
#include "files.h"
#include "lists.h"
#include "bytes.h"
#include "sockets.h"
#include "sources.h"

#endif
