/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuyukfe <mbuyukfe@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:11:26 by mbuyukfe          #+#    #+#             */
/*   Updated: 2024/08/21 16:57:33 by mbuyukfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}
int	main(void)
{
	int tab[] = {7, 6, 3, 4, 2, 5};
	int size = 6;

	printf("%d, %d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4],
		tab[5]);
	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4],
		tab[5]);
	return (0);
}