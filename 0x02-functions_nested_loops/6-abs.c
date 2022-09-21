#include "main.h"

/**
 * _abs - sends absolute value of integer to standard output
 * @mh: integer
 * Return:always 0
 */

int _abs(int mh)
{
	if (mh < 0)
	{
		return (-(mh));
	}
	else
	{
		return (mh);
	}
}

