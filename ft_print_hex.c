/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atytaren <atytaren@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 14:20:05 by atytaren          #+#    #+#             */
/*   Updated: 2016/12/15 14:21:15 by atytaren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_hex(unsigned char c)
{
	char	ch[2];

	if (c / 16 > 9)
		ch[0] = c / 16 + 87;
	else
		ch[0] = c / 16 + 48;
	if (c % 16 > 9)
		ch[1] = c % 16 + 87;
	else
		ch[1] = c % 16 + 48;
	write(1, ch, 2);
}