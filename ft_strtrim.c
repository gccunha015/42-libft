#include "libft.h"

static char		is_char_in_set(char c, char const *set);
static size_t	get_start_idx(char const *s1, char const *set);
static size_t	get_end_idx(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = get_start_idx(s1, set);
	end = get_end_idx(s1, set);
	return (ft_substr(s1, start, end - start + 1));
}

static char	is_char_in_set(char c, char const *set)
{
	while (*set)
		if (c == *(set++))
			return (1);
	return (0);
}

static size_t	get_start_idx(char const *s1, char const *set)
{
	size_t	start;

	start = -1;
	while (s1[++start] && is_char_in_set(s1[start], set))
		;
	return (start);
}

static size_t	get_end_idx(char const *s1, char const *set)
{
	size_t	end;

	end = ft_strlen(s1);
	while (s1[--end] && is_char_in_set(s1[end], set))
		;
	return (end);
}
