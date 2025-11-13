NAME = libft.a


CC = cc 
CFLAGS = -Wall -Wextra -Werror 

AR = ar 

SRC = ft_atoi.c     ft_memcmp.c      ft_strdup.c    ft_strtrim.c \
      ft_bzero.c    ft_memcpy.c      ft_striteri.c  ft_substr.c \
      ft_calloc.c   ft_memmove.c     ft_strjoin.c   ft_tolower.c \
      ft_isalnum.c  ft_memset.c      ft_strlcat.c   ft_toupper.c \
      ft_isalpha.c  ft_putchar_fd.c  ft_strlcpy.c   ft_isascii.c  \
      ft_isdigit.c  ft_putnbr_fd.c   ft_strmapi.c   ft_putendl_fd.c  \
      ft_isprint.c  ft_putstr_fd.c   ft_strncmp.c	  ft_strlen.c \
      ft_itoa.c     ft_split.c       ft_strnstr.c \
      ft_memchr.c   ft_strchr.c      ft_strrchr.c

SRC_BONUS = ft_lstadd_back_bonus.c   ft_lstdelone_bonus.c  ft_lstmap_bonus.c \
      ft_lstadd_front_bonus.c  ft_lstiter_bonus.c    ft_lstnew_bonus.c \
      ft_lstclear_bonus.c      ft_lstlast_bonus.c    ft_lstsize_bonus.c
OBJ_BONUS = $(SRC_BONUS:%.c=%.o) ;

OBJ = $(SRC:%.c=%.o)

all : $(NAME) 

$(NAME) : $(OBJ)
	$(AR) rcs  $@  -o $(OBJ) 

%.o : %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean : 
	rm -f $(OBJ)
	rm -f $(OBJ_BONUS)

fclean : clean 
	rm -f $(NAME)

re : fclean all

bonus : $(NAME) $(OBJ_BONUS)
	$(AR) rcs  $(NAME) -o $(OBJ_BONUS)  

.PHONY : all clean fclean re 
