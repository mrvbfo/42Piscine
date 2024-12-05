/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuyukfe <mbuyukfe@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:32:48 by mbuyukfe          #+#    #+#             */
/*   Updated: 2024/08/19 14:12:04 by mbuyukfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	sayi;

	sayi = '0';
	while (sayi <= '9')
	{
		write(1, &sayi, 1);
		sayi++;
	}
}
