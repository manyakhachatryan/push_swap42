

#include "../includes/push_swap.h"

char	*ft_first_join(char *str)
{	
	int		len ;
	char	*arr;
	int		j;

	j = 0;
	len = ft_strlen(str);
	arr = malloc(len + 1);
	while (str[j])
	{
		arr[j] = str[j];
		j++;
	}
	arr[len] = ' ';
	arr[len + 1] = '\0';
	return (arr);
}

char	*ft_join_str(char **str)
{
	int		i;
	char	*arr;

	i = 1;
	arr = ft_first_join(str[i]);
	i++;
	while (str[i])
	{
		arr = ft_strjoin(arr, str[i]);
		i++;
	}

// 	int k = 0;
// 	while(arr[k]){
// printf("%d\n", arr[k]);
// k++;
// 	}

	return (arr);
}
