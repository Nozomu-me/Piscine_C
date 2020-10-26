/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:31:10 by amouassi          #+#    #+#             */
/*   Updated: 2019/09/09 14:33:23 by amouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_count_caract(int argc, char **argv)
{
	int		i;
	int		j;
	int		s;

	s = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			j++;
		s = s + j;
		i++;
	}
	return (s);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*tab;

	tab = malloc(sizeof(char) * (argc + ft_count_caract(argc, argv)));
	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			tab[k] = argv[i][j];
			j++;
			k++;
		}
		tab[k] = '\n';
		k++;
		i++;
	}
	tab[k - 1] = '\0';
	return (tab);
}

int		main(int argc, char **argv)
{
	printf("%d\n", ft_count_caract(argc, argv));
	printf("%s", ft_concat_params(argc, argv));
}
