/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_2d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 21:47:19 by nchairun          #+#    #+#             */
/*   Updated: 2025/03/12 21:47:21 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_2d(char **array)
{
	int	i;

	i = 0;
	if (array == NULL)
		return ;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

void	free_2d_index(char **array, int index)
{
	if (array == NULL)
		return ;
	if (index == 0)
		return (free(array[index]));
	index--;
	while (index >= 0)
	{
		if (array[index])
			free(array[index]);
		index--;
	}
	free(array);
}
