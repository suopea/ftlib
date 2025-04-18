/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuopea <ssuopea@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 12:37:54 by ssuopea           #+#    #+#             */
/*   Updated: 2025/04/18 21:55:27 by ssuopea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	c = (unsigned char) c;
	if (32 <= c && c <= 126)
		return (1);
	else
		return (0);
}
