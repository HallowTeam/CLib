int     _maths_flag(int set, int value)
{
	static int flag = MATH_SUCCESS;

	if (set == 1)
	{
		flag = value;

		_print_maths_infos();
	}
	else if (set == -1)
	{
		flag = MATH_SUCCESS;
	}

	return flag;
}

int     _set_maths_flag(int value)
{
	return _maths_flag(1, value);
}

int     _get_maths_flag(void)
{
	return _maths_flag(0, 0);
}

int     _reset_maths_flag(void)
{
	return _maths_flag(-1, 0);
}

void    _print_maths_infos(void)
{
	int   flag = _get_maths_flag();

	printf("Math error: %s (%s)\n", (((flag & MATH_ADD)      != 0) ? "add" :
																	 ((flag & MATH_SUB)      != 0) ? "sub" :
																	 ((flag & MATH_MUL)      != 0) ? "mul" :
																	 ((flag & MATH_DIV)      != 0) ? "div" :
																	 ((flag & MATH_MOD)      != 0) ? "mod" : ""),
																	(((flag & MATH_POSITIVE) != 0) ? "+" :
																	 ((flag & MATH_NEGATIVE) != 0) ? "-" :
																	 ((flag & MATH_ZERO)     != 0) ? "0" : ""));
}
