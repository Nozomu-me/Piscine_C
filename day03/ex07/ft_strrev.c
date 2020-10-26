/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 14:49:56 by amouassi          #+#    #+#             */
/*   Updated: 2019/08/26 15:46:19 by amouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (str[i] != '\0')
		i++;
	j = 0;
	while (j < (i / 2))
	{
		c = str[j];
		str[j] = str[i - j - 1];
		str[i - j - 1] = c;
		j++;
	}
	return (str);
}

int		main(void)
{
	char	chaine[] = "amal";

	printf("%s", ft_strrev(chaine));
}
