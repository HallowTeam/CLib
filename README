################################################################################
### General
################################################################################

Les headers se situent dans : ./headers
Les sources se situent dans : ./sources

NOTE:
-----
	- Les fonctions prefixees d'un _ sont des fonctions privees. Elles ne
	doivent pas etre appelees directement (sauf indications contraires)
	- Les mot prefixes d'un @ font reference aux arguments

################################################################################
### Types
################################################################################

Description:
============

	Fonctions permettant une meilleur gestion des allocations memoires.
	Ces fonctions remplacent les fonction malloc, realloc, calloc, free.

Fonctions:
==========

xfree
-----
	description : identique a free()
	prototype   : void    *xfree(void *ptr)
	return      : NULL

xrealloc
--------
	description : identique a realloc()
	prototype   : void    *xrealloc(void *ptr, size_t size)
	return      : @ptr ou NULL (erreur)

xcalloc
-------
	description : identique a calloc()
	prototype   : void    *xcalloc(size_t members, size_t size)
	return      : pointeur ou NULL (erreur)

xmalloc
-------
	description : identique a malloc()
	prototype   : void    *xmalloc(size_t size)
	return      : pointeur ou NULL (erreur)

Defines:
========

MALLOC_FAIL
-----------
	description: fonction appelee lorsqu'un malloc echoue

################################################################################
### Maths
################################################################################

Description:
============

	Fonctions complementaires a la libmath.
	Ces fonctions possedent un flag qui est mit a jour apres chaque
	operation. Des macros permettent de controller le type d'erreur (cf: headers).
	Un message est affiche en cas d'erreur.

Fonctions:
==========

min
---
	description : retourne la plus petite valeur entre deux entiers
	prototype   : int     min(int a, int b)
	return      : @a ou @b

max
---
	description : retourne la plus grande valeur entre deux entiers
	prototype   : int     max(int a, int b)
	return      : @a ou @b

_add
----
	description : additione deux entiers tout en controllant les overflows
	prototype   : int     _add(int a, int b, int *flag)
	@flag       : si non NULL, contient la valeur du flag
	return      : @a + @b

_sub
----
	description : identique a _add, mais execute une soustraction
	prototype   : int     _sub(int a, int b, int *flag)

_mul
----
	description : identique a _add, mais execute une multiplication
	prototype   : int     _mul(int a, int b, int *flag)

_div
----
	description : identique a _add, mais execute une division
	prototype   : int     _div(int a, int b, int *flag)

_mod
----
	description : identique a _add, mais execute un modulo
	prototype   : int     _mod(int a, int b, int *flag)

################################################################################
### Types
################################################################################

Description:
============

	Fonctions permettant la gestion de variables a contenu variable.
	Le contenu peut etre : un int, un char, un char *, un void *.

Fonctions:
==========

setInt
------
	description : assigne un int a une variable a contenu variable
	prototype   : int     setInt(s_var *var, int value)
	return      : @value

setStr
------
	description : identique a setInt, mais assigne un char *
	prototype   : char    *setStr(s_var *var, char *value)

setPtr
------
	description : identique a setInt, mais assigne un void *
	prototype   : void    *setStr(s_var *var, void *value)

setChar
-------
	description : identique a setInt, mais assigne un char *
	prototype   : char    *setChar(s_var *var, char value)

getInt
------
	description : recupere la valeur int d'une variable a contenu variable
	prototype   : int     getInt(s_var *var)
	return      : valeur

getStr
------
	description : identique a getInt, mais recupere un char *
	prototype   : char    *getStr(s_var *var)

getPtr
------
	description : identique a getInt, mais recupere un void *
	prototype   : void    *getPtr(s_var *var)

getChar
-------
	description : identique a getChar, mais recupere un void *
	prototype   : char    getChar(s_var *var)

printVar
--------
	description : affiche une variable a contenu variable
	prototype   : void    printVar(s_var *var)

################################################################################
### Lists
################################################################################

Description:
============

	Fonctions permettant la gestion de listes.
	Elles utilisent les fonctions de la partie "types" pour permettre d'enchainer
	n'importe quel type de donnees.

Fonctions:
==========

intItem
-------
	description : ajoute un int dans la liste
	prototype   : s_item  *intItem(s_list *list, int index, int value)
	return      : s_item ou NULL (erreur)

strItem
-------
	description : identique a intItem, mais aujoute un char *
	prototype   : s_item  *strItem(s_list *list, int index, int value)

ptrItem
-------
	description : identique a intItem, mais aujoute un void *
	prototype   : s_item  *ptrItem(s_list *list, int index, int value)

charItem
--------
	description : identique a intItem, mais aujoute un char
	prototype   : s_item  *charItem(s_list *list, int index, int value)

newItems
--------
	description : ajoute un ou plusieurs elemement du meme type a la liste
	prototype   : s_item  *newItems(s_list *list, int index, e_var type, int amount, ...)
	return      : s_item (dernier) ou NULL (error)

getItem
-------
	description : recupere un item par son index dans la liste
	prototypes  : s_item  *getItem(s_list *list, int index)
	return      : s_item ou NULL (aucun item)

nextItem
--------
	description : retourne le prochain maillon d'une liste (circulaire)
	prototype   : s_item  *nextItem(s_list *list)

prevItem
--------
	description : retourne le precedent maillon d'une liste (circulaire)
	prototype   : s_item  *nextItem(s_list *list)

printList
---------
	description : affiche le contenu d'une liste
	prototype   : void    printList(s_list *list)

freeItem
--------
	description : free un item (pas le contenu !)
	prototype   : int     freeItem(s_list *list, s_item *item)

freeList
--------
	description : free une list (pas le contenu des items !)
	prototype   : void    freeList(s_list *list)

################################################################################
### Files
################################################################################

Description:
============

	Fonctions facilitant la gestion des fichiers.

Fonctions:
==========

blockFile
---------
	description : modifie le statut bloquant d'une socket
	prototype   : int     blockFile(int fd, bool blocking)
	return      : 0 ou -1 (erreur)

################################################################################
### Sockets
################################################################################

Description:
============

	Fonctions facilitant la gestion des sockets clients / serveur

Fonctions:
==========

newTCPClient
------------
	description : creation d'une socket client
	prototype   : s_socket        *newTCPClient(char *server, int port)
	return      : s_socket ou NULL (erreur)

newTCPServer
------------
	description : creation d'une socket serveur
	prototype   : s_socket        *newTCPServer(int port)
	return      : s_socket ou NULL (erreur)

recvTCP
-------
	description : recupere le contenu present sur une socket (pas besoin de malloc)
	prototype   : int     recvTCP(s_socket *sock, char **message)
	return      : longueur du message ou -1 (erreur)

sendTCP
-------
	description : envoie un message
	prototype   : int     sendTCP(s_socket *sock, char *message)
	return      : 0 ou -1 (erreur)

serverAccept
------------
	description : met le serveur en attente d'invitation
	prototype   : s_socket        *serverAccept(s_socket *server)
	return      : s_socket ou NULL (erreur)

freeSocket
----------
	description : ferme une socket
	prototype   : void    *freeSocket(s_socket *sock)
	return      : NULL

################################################################################
### Bytes
################################################################################

Description:
============

	Fonctions facilitant la gestion des zones memoires

Fonctions:
==========

invertEndian
------------
	description: inverse les bits d'une addresse
	prototype  : long    invertEndian(long addr)
	return     : long
