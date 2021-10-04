/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdenys <mdenys@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 20:43:44 by mdenys            #+#    #+#             */
/*   Updated: 2020/11/01 21:11:41 by mdenys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*test;
	int		len;

	len = ft_strlen((char *)str) + 1;
	test = malloc(len * sizeof(char));
	if (test == NULL)
		return (NULL);
	ft_strlcpy(test, str, (unsigned int)len);
	return (test);
}
