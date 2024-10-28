/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-23 10:46:25 by patferna          #+#    #+#             */
/*   Updated: 2024-10-23 10:46:25 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *put_word(const char *start, const char *ptr)
{
		size_t len_word = ptr - start;
		char *arrstr = (char*) malloc((len_word + 1) * sizeof(char));
		if (!arrstr)
				return (NULL);
		memcpy(arrstr, start, len_word);
		arrstr[len_word] = '\0';
		return arrstr;
}
	int count_c( const char *s,  char c)
{
	int	i;
	int	in_word;
	
	i = 0;
	in_word = 0;
	while (*s == c) 
				s++;
	while (*s != '\0')
	{
		if (*s == c)
		{
			if (in_word)
			in_word = 0;
		}
		else 
		{
			if (!in_word)
			{
				in_word = 1;
				i++;
			}
		}
		s++;
	}
	return i;
}
void put_array(char **arrstr, const char *s, char c)
{
		const char *start = s;
		int i = 0;

		while (*s) {
				if (*s == c) 
				{
					if  (start < s) 
					{
						arrstr[i++] = put_word(start, s);
					}
						start = s + 1;
				}
				s++;
		}
		if (start < s) 
		{
				arrstr[i++] = put_word(start, s);
		}
		arrstr[i] = NULL;
}
char **ft_split(char const *s, char c)
{
		char **arrstr;

		arrstr = malloc((count_c(s,c) + 1) * sizeof(char*));
		if (!arrstr)
			return (NULL);
		put_array(arrstr, s, c);
		return arrstr;
}

int main (void)
{
		char ptr [] = "  h  olam  equedan6dias ";
		char a = ' ';
		ft_split (ptr, a);    
}