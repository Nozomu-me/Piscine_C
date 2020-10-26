/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 14:04:10 by amouassi          #+#    #+#             */
/*   Updated: 2019/09/11 17:09:35 by amouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

char					*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*dest;

	len = 0;
	while (src[len] != '\0')
		len++;
	dest = malloc(sizeof(char) * (len + 1));
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int						ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

struct s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	int				i;
	int				k;
	t_stock_par		*tab;

	tab = malloc(sizeof(t_stock_par) * ac + 1);
	i = 0;
	k = 0;
	while (i < ac)
	{
		tab[k].size_param = ft_strlen(av[i]);
		tab[k].str = av[i];
		tab[k].copy = ft_strdup(av[i]);
		tab[k].tab = ft_split_whitespaces(av[i]);
		k++;
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
