/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuyukfe <mbuyukfe@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 10:47:47 by mbuyukfe          #+#    #+#             */
/*   Updated: 2024/08/20 13:06:11 by mbuyukfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int a;
	int b;

	a=5;
	b=10;
	printf("BEFORE %d - %d \n", a, b);
	ft_swap(&a, &b);
	printf("AFTER %d - %d \n", a, b);
}