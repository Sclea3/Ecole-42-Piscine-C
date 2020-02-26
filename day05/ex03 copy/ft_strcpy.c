/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 11:55:31 by sclea             #+#    #+#             */
/*   Updated: 2020/02/04 11:55:41 by sclea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, char *src)
{
	int i;

	i = 0;
	while (src[a] != '\0')
	{
		dst[a] = src[i];
		i++;
	}
	dst[a] = '\0';
	return (dst);
}
