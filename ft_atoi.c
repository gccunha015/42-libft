#include "libft.h"

static int	ft_isspace(int c);
static void	remove_whitespaces(const char **nptr);
static int	determine_sign(const char **nptr);

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	nbr;

	remove_whitespaces(&nptr);
	sign = determine_sign(&nptr);
	nbr = 0;
	while (ft_isdigit(*nptr))
	{
		nbr *= 10;
		nbr += *nptr - '0';
		nptr++;
	}
	return (sign * nbr);
}

static int	determine_sign(const char **nptr)
{
	int	sign;

	sign = 1;
	if (**nptr == '-')
		sign = -1;
	if (**nptr == '-' || **nptr == '+')
		(*nptr)++;
	return (sign);
}

static void	remove_whitespaces(const char **nptr)
{
	while (ft_isspace(**nptr))
		(*nptr)++;
}

static int	ft_isspace(int c)
{
	return (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ');
}
