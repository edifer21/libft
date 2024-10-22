/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-21 10:42:04 by patferna          #+#    #+#             */
/*   Updated: 2024-10-21 10:42:04 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	str_len;

	if (!s)
		return (NULL);
	str_len = strlen(s);
	if (start >= str_len)
		return (NULL);
	if (start + len > str_len)
		len = str_len - start;
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	memcpy (ptr, s + start, len);
	ptr[len] = '\0';
	return (ptr);
}
/*
int main (void)
{
	size_t len;
	size_t start;
	char prhase[]= "me quedan 9 dias";

	len = 3;
	start = 3;
	ft_substr(prhase, start,len);

}
*/
//len es la log max de substring
//start es de donde empeza a copiar la substring desde la string
//es a string
//return la substring y NULL si falla la reserva de memoria
//puedo usar malloc(3) y tengo q añadir len la long maxima
//puedo indicar desde donde empieza start