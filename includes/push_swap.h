#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>





int		ft_strlen(char *str);
char	*ft_join_str(char **str);
char	*ft_strjoin(char *str_main, char *str_copy);
char	**ft_split(char const *s, char c);
void    checker(char *str);
int    *char_to_int(int len, char **map);
int     ft_atoi( char *str);
int     matrix_length(char **map);
void check_duplicate(int *a, int len);


#endif