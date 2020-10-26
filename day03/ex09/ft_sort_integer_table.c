/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 18:37:52 by amouassi          #+#    #+#             */
/*   Updated: 2019/08/26 21:22:50 by amouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_integer_table(int *tab, int size)
{
	int		i;
	int		j;
	int		a;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[i] < tab[j])
			{
				a = tab[i];
				tab[i] = tab[j];
				tab[j] = a;
			}
			j++;
		}
		i++;
	}
}

int		main(void)
{
	int		tab[] = {1,6,7,2,8,1,4,5,1,5,221};
	
	int		i;
	ft_sort_integer_table(tab,11);
	i = 0;
	while(i < 11)
	{
		printf("%d ", tab[i]);
		i++;
	}
}
