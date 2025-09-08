/**
 * _sqrt_helper - recursive helper to find square root
 * @n: number
 * @i: current guess
 *
 * Return: natural square root of n, or -1 if not found
 */
int _sqrt_helper(int n, int i)
{
	if ((i * i) == n)
		return (i);
	if ((i * i) > n)
		return (-1);
	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find sqrt
 *
 * Return: square root, -1 if no natural square root exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if ((n == 0) || (n == 1))
		return (n);
	return (_sqrt_helper(n, 1));
}
