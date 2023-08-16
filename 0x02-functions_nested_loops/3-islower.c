#include "main.h"
#include <ctype.h>
/**
 * _islower - Confirms lowercase leters
 *@c : char to confirm its lowercase
 *
 * Return : Return 1 on sucess and 0 otherwise
 */ 

int _islower(int c)
{
	if(islower(c))
	{	return (1);
	}else {
		return (0);
	}
}
