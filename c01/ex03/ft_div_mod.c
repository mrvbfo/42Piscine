/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuyukfe <mbuyukfe@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:27:04 by mbuyukfe          #+#    #+#             */
/*   Updated: 2024/08/20 14:29:20 by mbuyukfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int	main(void)
{
	int a = 15;
	int b = 5;
	int *div;
	int *mod;

	int c = 0;
	int d = 0;

	div = &c;
	mod = &d;
	printf("BEFORE div:  %p - %d \n", div, *div);
	printf("BEFORE mod:  %p - %d \n", mod, *mod);
	ft_div_mod(a, b, div, mod);
	printf("AFTER div  %p - %d \n", div, *div);
	printf("AFTER mod:  %p - %d \n", mod, *mod);
}