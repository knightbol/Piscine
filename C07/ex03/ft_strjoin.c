#include <stdlib.h>

int	ft_len(char *str)
{
	int	count;

	if (!str)
		return (0);
	count = 0;
	while (*str)
		count++;
	return (count);
}

char	*ft_strcatsep(char *dest, char *src, char sep)
{
	char	*start;
	if (src == NULL || dest == NULL)
		return (NULL);
	start = dest;
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = sep;
	*dest++ = '\0';
	return (start);
}

char	*ft_strjoin(int size, char **strs, char sep)
{
	int	i;
	int	len;
	char	*cat;

	i = 0;
	if (!size) 				// check for bad size
	{
		char *p_malloc = (char *)malloc(1);
		if (!p_malloc)
			return (cat = NULL);
		cat = p_malloc;
		return (cat);
	}
	if (!strs)				// check if strs isnt empty
		return (NULL);
	while (i < size)			// pass size times
		len += ft_len(strs[i++]);
	len += size;
	cat = (char *)malloc(len);
	if (!cat)
		return (NULL);
	i = 0;
	while (strs[i])					// start catting
		cat = ft_strcat(cat, strs[i++], sep);
	return (cat);	
}
