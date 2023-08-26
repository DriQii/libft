
#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t len;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	if (size == 0)
		return (len);
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
