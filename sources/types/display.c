void    printVar(s_var *var)
{
	switch (var->type)
	{
		case INT : printf("INT : %d\n",  getInt(var));  break;
		case STR : printf("STR : %s\n",  getStr(var));  break;
		case PTR : printf("PTR : %p\n",  getPtr(var));  break;
		case CHAR: printf("CHAR : %c\n", getChar(var)); break;
		default  : printf("UNDEF\n")                  ; break;
	}
}
