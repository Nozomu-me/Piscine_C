/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 16:34:01 by amouassi          #+#    #+#             */
/*   Updated: 2019/09/09 13:54:39 by amouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*tab;

	tab = NULL;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	tab = malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		printf("tab[%d] = %d\n", i, tab[i]);
		min++;
		i++;
	}
	*range = tab;
	return (i);
}

int		main(void)
{
	int		*range;
	int		min;
	int		max;

	min = 2;
	max = 6;
	printf("taille = %d", ft_ultimate_range(&range, min, max));
}
