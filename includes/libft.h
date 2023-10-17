/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:19:57 by llegrand          #+#    #+#             */
/*   Updated: 2023/10/17 15:48:31 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <math.h>
# include <stdlib.h>
# include <unistd.h>
typedef struct s_list
{
	void				*content;
	struct s_list		*next;
}						t_list;

typedef struct s_cdllist
{
	void				*content;
	struct s_cdllist	*next;
	struct s_cdllist	*prev;
	int					index;
}						t_cdllist;

typedef struct s_vec2d
{
	double				x;
	double				y;
}						t_vec2d;

typedef struct s_ivec2d
{
	int					x;
	int					y;
}						t_ivec2d;

typedef struct s_vec3d
{
	double				x;
	double				y;
	double				z;
}						t_vec3d;

typedef struct s_ivec3d
{
	int					x;
	int					y;
	int					z;
}						t_ivec3d;

typedef struct s_mappingpoint
{
	double				input;
	int					output;
}						t_mappingpoint;

typedef struct s_mpmapping
{
	int					numpoints;
	t_mappingpoint		*points;
}						t_mpmapping;

int						ft_isalpha(int c);
int						ft_isdigit(int d);
int						ft_isalnum(int c);
int						ft_isascii(int c);
int						ft_isprint(int c);
size_t					ft_strlen(const char *c);
void					*ft_memset(void *b, int c, size_t len);
void					ft_bzero(void *s, size_t n);
void					*ft_memcpy(void *dst, const void *src, size_t n);
void					*ft_memmove(void *dst, const void *src, size_t n);
size_t					ft_strlcpy(char *dst, const char *src, size_t dstsize);
int						ft_toupper(int c);
int						ft_tolower(int c);
int						ft_atoi(const char *str);
int						ft_strncmp(const char *s1, const char *s2, size_t n);
char					*ft_strnstr(const char *haystack, const char *needle,
							size_t len);
char					*ft_strchr(const char *s, int c);
char					*ft_strrchr(const char *s, int c);
size_t					ft_strlcat(char *dst, const char *src, size_t dstsize);
void					*ft_memchr(const void *s, int c, size_t n);
int						ft_memcmp(const void *s1, const void *s2, size_t n);
void					*ft_calloc(size_t nmemb, size_t size);
char					*ft_strdup(const char *c);

char					*ft_substr(char const *s, unsigned int start,
							size_t len);
char					*ft_strjoin(char const *s1, char const *s2);
char					*ft_strtrim(char const *s1, char const *set);
char					**ft_split(char const *s, char c);
char					*ft_itoa(int n);
char					*ft_strmapi(char const *s, char (*f)(unsigned int,
								char));
void					ft_striteri(char *s, void (*f)(unsigned int, char *));
void					ft_putchar_fd(char c, int fd);
void					ft_putstr_fd(char *s, int fd);
void					ft_putendl_fd(char *s, int fd);
void					ft_putnbr_fd(int n, int fd);

t_list					*ft_lstnew(void *content);
void					ft_lstadd_front(t_list **lst, t_list *new);
int						ft_lstsize(t_list *lst);
t_list					*ft_lstlast(t_list *lst);
void					ft_lstadd_back(t_list **lst, t_list *new);
void					ft_lstdelone(t_list *lst, void (*del)(void *));
void					ft_lstclear(t_list **lst, void (*del)(void *));
void					ft_lstiter(t_list *lst, void (*f)(void *));
t_list					*ft_lstmap(t_list *lst, void *(*f)(void *),
							void (*del)(void *));
char					*ft_strformat(const char *str, ...);
char					*ft_strcat(char *src, char *dst);
char					*ft_dtoa(double d, int prec);
int						ft_strcmp(char *s1, char *s2);

t_cdllist				*ft_cdllnew(void *data);
void					ft_cdlladd_front(t_cdllist *tail, t_cdllist *new);
void					ft_cdlladd_back(t_cdllist **tail, t_cdllist *new);
void					ft_cdlliter(t_cdllist *tail, void (*f)(void *));
t_cdllist				*ft_cdllfind(t_cdllist *tail, void *data);
int						ft_cdllsize(t_cdllist *tail);
void					ft_cdlldelone(t_cdllist *node, void (*del)(void *));
void					ft_cdlldrop(t_cdllist **tail, void (*del)(void *));
void					ft_cdllswap(t_cdllist *tail);
double					linmap(double val, t_vec2d range1, t_vec2d range2);
double					mappedlmap(const t_mpmapping *mapping, double input,
							t_vec2d baserange);
int						clamp(int value, int limitup, int limitdown);
t_vec2d					mult_vec2d(t_vec2d a, t_vec2d b);
t_vec2d					div_vec2d(t_vec2d a, t_vec2d b);
void					sqr_vec2d(t_vec2d *a, double real_c, double img_c);
t_vec2d					power_vec2d(t_vec2d a, int n);
t_vec2d					create_vec2d(double x, double y);
t_vec2d					add_vec2d(t_vec2d a, t_vec2d b);
t_vec2d					sub_vec2d(t_vec2d a, t_vec2d b);
void					real_const_vec2d(t_vec2d *a, double c);
int						create_argb(int a, int r, int g, int b);
int						get_a(int trgb);
int						get_r(int trgb);
int						get_g(int trgb);
int						get_b(int trgb);
int ft_strcontsowpref(char *str, char *chars, char prefix);
int	ft_strcontsonly(char *str, char *chars);
#endif
