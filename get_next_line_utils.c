#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strncpy(char *dst, char *src, size_t n)
{
	size_t	i;

	if (!src)
		return (0);
	i = 0;
	while (src[i] && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strdup(char *s1)
{
	char	*s_copy;
	int		len;
	int		i;

	if (!s1)
		return (0);
	len = ft_strlen(s1);
	s_copy = (char *)malloc(len * sizeof(char) + 1);
	if (s_copy == 0)
		return (0);
	i = 0;
	while (s1[i])
	{
		s_copy[i] = s1[i];
		i++;
	}
	s_copy[i] = '\0';
	return (s_copy);
}

static char	*ft_strcpy(char *dst, char *src, int *len)
{
	int	j;
	int	i;

	i = *len;
	j = 0;
	while (src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	*len = i;
	return (dst);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = 0;
	if (!s2)
		return (0);
	if (s1)
		while (s1[i])
			i++;
	if (s2)
		while (s2[j])
			j++;
	ptr = (char *)malloc(i + j + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	if (s1)
		ft_strcpy(ptr, (char *)s1, &i);
	ft_strcpy(ptr, (char *)s2, &i);
	ptr[i] = '\0';
	free(s1);
	s1 = NULL;
	return (ptr);
}
