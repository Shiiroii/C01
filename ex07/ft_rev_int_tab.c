/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:22:49 by liulm             #+#    #+#             */
/*   Updated: 2024/07/18 15:04:22 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	 ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

#include <stdio.h>

int	main()
{
	int	tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	i;

	ft_rev_int_tab(tab, 10);
	i = -1;
	while (++i < 10)
		printf("%i", tab[i]);
}
