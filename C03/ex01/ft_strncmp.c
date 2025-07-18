/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emurbane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:53:04 by emurbane          #+#    #+#             */
/*   Updated: 2025/07/09 22:34:42 by emurbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && j < n)
	{
		i ++;
		j ++;
	}
	if (j == n)
		return (0);
	return (s1[i] - s2[i]);
}
