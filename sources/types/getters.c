int     getInt(s_var *var)
{
	if (var->type != INT)
	{
		printf("WARNING: var is not an INT\n");
	}

	return (var->value._int);
}

char    *getStr(s_var *var)
{
	if (var->type != STR)
	{
		printf("WARNING: var is not an STR\n");
	}

	return (var->value._str);
}

void    *getPtr(s_var *var)
{
	if (var->type != PTR)
	{
		printf("WARNING: var is not a PTR\n");
	}

	return (var->value._ptr);
}

char    getChar(s_var *var)
{
	if (var->type != CHAR)
	{
		printf("WARNING: var is not a CHAR\n");
	}

	return (var->value._char);
}
