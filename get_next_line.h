#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 2
# endif

char	*get_next_line(int fd);
size_t	ft_strlen(char *s);
char	*ft_strncpy(char *dst, char *src, size_t n);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *s1);
char	*ft_free(char **remainder, int final);
char	*ft_strchr(const char *s, int c);
char	*get_line(char *remainder, char *str);

#endif
