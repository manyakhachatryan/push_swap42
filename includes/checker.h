/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <manykhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 13:13:14 by manykhac          #+#    #+#             */
/*   Updated: 2022/11/06 15:56:54 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_list	t_list;

struct s_list
{
	int		data;
	t_list	*next;
	int		index;
};

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

int		ft_strlen(char *str);
char	*ft_join_str(char **str);
char	*ft_strjoin(char *str_main, char *str_copy);
char	**ft_split(char const *s, char c);
void	checker(char *str);
int		*char_to_int(int len, char **map);
int		ft_atoi( char *str);
int		matrix_length(char **map);
void	check_duplicate(int *a, int len);
void	arr_to_list(int *a, int len);
void	sa(t_list **list);
void	sb(t_list **list);
void	ss(t_list **a_list, t_list **b_list);
void	pa(t_list **a_list, t_list **b_list);
void	pb(t_list **a_list, t_list **b_list);
void	ra_rb(t_list **list);
int		cat_list_beg(t_list **list);
void	rr(t_list **list_a, t_list **list_b);
void	rra_rrb(t_list **list);
void	rrr(t_list **list_a, t_list **list_b);
void	sort_2(t_list **stack_a);
void	sort_3(t_list **stack_a);
void	sort_4(t_list **stack_a, t_list **stack_b);
void	sort_5(t_list **stack_a, t_list **stack_b);
void	sort_6(t_list **stack_a, t_list **stack_b, int n);
int		max_list(t_list **list);
void	fill_a(t_list **stack_a, t_list **stack_b, int len);
int		is_sorted(int *arr, int len);
void	free_list(t_list **stack_a);
void	error(void);
char	*fill_line(char *line, int fd, int len);
char	*get_next_line(int fd);
char	*ft_substr(char	*s, unsigned int start, size_t len);
char	*ft_strjoin1(char *s1, char *s2);
char	*ft_strchr(char *s, int c);
int		ft_strlen1(char *s);
char	*ft_strdup(char *s1);
int		issorted(t_list **stack_a);
int		ft_strcmp(char *s1, char *s2);
void	do_the_move(char *op, t_list **stack_a, t_list **stack_b);
void	read_data(t_list **stack_a, t_list **stack_b);
int		is_space(char **str);

#endif
