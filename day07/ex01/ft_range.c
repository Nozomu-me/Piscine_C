/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 15:07:10 by amouassi          #+#    #+#             */
/*   Updated: 2019/09/09 14:30:43 by amouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*tab;

	tab = NULL;
	if (min >= max)
		return (tab);
	tab = malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		printf("tab[%d] = %d\n", i, tab[i]);
		min++;
		i++;
	}
	return (tab);
}

int		main(void)
{
	int		i;
	int		*tab;
	int		min;
	int		max;

	min = 2;
	max = 6;
	tab = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
