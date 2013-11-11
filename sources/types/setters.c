int     setInt(s_var *var, int value)
{
	var->type        = INT;
	var->value._int  = value;

	return var->value._int;
}

char    *setStr(s_var *var, char *value)
{
	var->type        = STR;
	var->value._str  = value;

	return var->value._str;
}

void    *setPtr(s_var *var, void *value)
{
	var->type        = PTR;
	var->value._ptr  = value;

	return var->value._ptr;
}

char    setChar(s_var *var, char value)
{
	var->type         = CHAR;
	var->value._char  = value;

	return var->value._char;
}
