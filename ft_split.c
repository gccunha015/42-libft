#include "libft.h"

static void		go_to_next_word(char const **s, char c);
static size_t	get_word_len(char const *s, char c);
static void		free_memory(char **split, size_t word_count);
static char		**split_s(char const *s, char c, size_t word_count);

char	**ft_split(char const *s, char c)
{
	size_t		word_count;
	char const	*ptr;

	ptr = s;
	word_count = 0;
	while (*ptr)
	{
		go_to_next_word(&ptr, c);
		ptr += get_word_len(ptr, c);
		word_count++;
	}
	return (split_s(s, c, word_count));
}

static char	**split_s(char const *s, char c, size_t word_count)
{
	size_t	current_word;
	size_t	word_size;
	char	**split;

	split = (char **) malloc((word_count + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	current_word = -1;
	while (*s && ++current_word < word_count)
	{
		go_to_next_word(&s, c);
		word_size = get_word_len(s, c) + 1;
		split[current_word] = (char *) malloc(word_size * sizeof(char));
		if (!split[current_word])
		{
			free_memory(split, word_count);
			return (NULL);
		}
		ft_strlcpy(split[current_word], s, word_size);
		s += word_size - 1;
	}
	split[word_count] = NULL;
	return (split);
}

static void	go_to_next_word(char const **s, char c)
{
	while (**s && **s == c)
		(*s)++;
}

static size_t	get_word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static void	free_memory(char **split, size_t word_count)
{
	size_t	i;

	i = -1;
	while (++i <= word_count)
		free(split[i]);
	free(split);
}
