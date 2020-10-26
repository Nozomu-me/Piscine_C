/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:40:59 by amouassi          #+#    #+#             */
/*   Updated: 2019/10/23 15:59:15 by amouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_count_words(char *str)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (str[0] >= 33 && str[0] <= 126)
		count++;
	while (str[i] != '\0')
	{
		if ((str[i - 1] == ' ' || (str[i - 1] >= 9 && str[i - 1] <= 13)) &&
				(str[i] >= 33 && str[i] <= 126))
			count++;
		i++;
	}
	return (count);
}

int		ft_blank(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

char	*ft_print_tab(char *str, int fin, int deb)
{
	int		k;
	char	*tab;

	tab = malloc(sizeof(char) * (fin - deb + 2));
	k = deb;
	while (k <= fin)
	{
		tab[k - deb] = str[k];
		k++;
	}
	tab[k - deb] = '\0';
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		deb;
	int		fin;
	char	**tab;

	tab = malloc(sizeof(char*) * (ft_count_words(str) + 1));
	j = 0;
	i = 0;
	while (str[j] != '\0')
	{
		if ((j == 0 && !ft_blank(str[j])) ||
				(!ft_blank(str[j]) && ft_blank(str[j - 1])))
			deb = j;
		if (!ft_blank(str[j]) && (ft_blank(str[j + 1]) || str[j + 1] == '\0'))
		{
			fin = j;
			tab[i] = ft_print_tab(str, fin, deb);
			i++;
		}
		j++;
	}
	tab[i] = NULL;
	return (tab);
}

int		main(void)
{
	char	chaine[] = "\t\t\t         *      jgcemhhtb \t mghceg \t mhjm \n kjgcejcekl \t\n\n\n\n\t klehrjkgherhgl\n\n\n trrte\t\t\t rggrgrgrgrgrrgrgrre  r        \n\nrwfwrger \nf ";
	int		i;
	char	**tab;

	i = 0;
	printf("%d\n", ft_count_words(chaine));
	tab = ft_split_whitespaces(chaine);
	while (tab[i] != '\0')
	{
		printf("%s\n", tab[i]);
		i++;
	}
}
