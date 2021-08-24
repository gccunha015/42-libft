#ifndef LIBFT_H
# define LIBFT_H

typedef unsigned int	t_size;

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
t_size	ft_strlen(const char *s);
void	*ft_memset(void *dest, int c, t_size len);

#endif
