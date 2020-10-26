/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 22:22:51 by amouassi          #+#    #+#             */
/*   Updated: 2019/09/01 13:02:33 by amouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, int nb)
{
	int		i;
	int		j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(void)
{
	char	dest[] = "amal";
	char	src[] = "ouassit";

	printf("%s", ft_strncat(dest, src, 3));
}
