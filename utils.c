/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akortvel <akortvel@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 10:21:04 by akortvel          #+#    #+#             */
/*   Updated: 2024/02/03 15:50:29 by akortvel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_strncmp_12hd(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (s1[i] == s2[i] && n > 0)
	{
		if (s1[i] == '\0')
			return (0);
		i++;
		n--;
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}

void	ft_close(int fd)
{
	if (fd > 0)
		close(fd);
}

void	ft_free_array(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

int	update_quote_state(int i)
{
	if (i == 0)
		return (1);
	else
		return (0);
}

void	ft_3(char *first, char *second, char *third)
{
	ft_putstr_fd(first, 2);
	ft_putstr_fd(second, 2);
	ft_putstr_fd(third, 2);
}
