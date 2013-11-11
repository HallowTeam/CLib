int     _add(int a, int b, int *flag)
{
	bool  error = false;

	if (a > 0 && b > 0 && INT_MAX - b < a)
	{
		_set_maths_flag(MATH_ADD | MATH_POSITIVE); error = true;
	}
	else if (a < 0 && b < 0 && INT_MIN - b > a)
	{
		_set_maths_flag(MATH_ADD | MATH_NEGATIVE); error = true;
	}

	if (error == true)
	{
		return ((flag == NULL)? _get_maths_flag() : (*flag = _get_maths_flag()));
	}

	_reset_maths_flag();

	return (a + b);
}

int     _sub(int a, int b, int *flag)
{
	bool  error = false;

	if (a >= 0 && b < 0 && INT_MAX + b < a)
	{
		_set_maths_flag(MATH_SUB + MATH_POSITIVE); error = true;
	}
	else if (a < 0 && b > 0 && INT_MIN + b > a)
	{
		_set_maths_flag(MATH_SUB + MATH_NEGATIVE); error = true;
	}

	if (error == true)
	{
		return ((flag == NULL)? _get_maths_flag() : (*flag = _get_maths_flag()));
	}

	_reset_maths_flag();

	return (a - b);
}

int     _mul(int a, int b, int *flag)
{
	bool  error = false;

	if ((a < 0 && b > 0) || (a > 0 && b < 0))
	{
		if ((a < 0 && INT_MIN / b > a) || (a > 0 && INT_MIN / a > b))
		{
			_set_maths_flag(MATH_MUL + MATH_NEGATIVE); error = true;
		}
	}
	else if (a != 0 && b != 0)
	{
		if ((a < 0 && INT_MAX / a > b) || (a > 0 && INT_MAX / a < b))
		{
			_set_maths_flag(MATH_MUL + MATH_POSITIVE); error = true;
		}
	}

	if (error == true)
	{
		return ((flag == NULL)? _get_maths_flag() : (*flag = _get_maths_flag()));
	}

	_reset_maths_flag();

	return (a * b);
}


int     _div(int a, int b, int *flag)
{
	if (b == 0)
	{
		_set_maths_flag(MATH_DIV | MATH_ZERO);

		return ((flag == NULL)? _get_maths_flag() : (*flag = _get_maths_flag()));
	}

	_reset_maths_flag();

	return (a / b);
}

int     _mod(int a, int b, int *flag)
{
	if (b == 0)
	{
		_set_maths_flag(MATH_MOD | MATH_ZERO);

		return ((flag == NULL)? _get_maths_flag() : (*flag = _get_maths_flag()));
	}

	_reset_maths_flag();

	return (a % b);
}
