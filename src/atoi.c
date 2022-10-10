#include "../includes/push_swap.h"

int	ft_atoi( char *str)
{
	int	i;
	int	n;
	long int	result;

	result = 0;
	n = 1;
	i = 0;
	if (!str)
		return (0);
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		n = n * -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}

	if(result * n > 2147483647 ||  result * n < -2147483648)
 { 

        printf("error int size\n");
		exit(0);
 }
	else {	 	
	
		return (result * n);

	}
}