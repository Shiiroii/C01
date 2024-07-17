/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:25:09 by liulm             #+#    #+#             */
/*   Updated: 2024/07/17 17:31:52 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>

int	main()
{
	int	*aptr;
	int	*bptr;
	int	anb;
	int	bnb;

	anb = 2;
	bnb = 4;
	aptr = &anb;
	bptr = &bnb;
	ft_swap(aptr, bptr);
	printf("%d %d", anb, bnb);
	return (0);
}
