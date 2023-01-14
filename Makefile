SRCS	=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
# Hier alle zu kompilierenden .c-Dateien erfassen
SRCSB	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
# Hier alle zu kompilierenden Bonus-C-Dateien erfassen
OBJS	=	${SRCS:.c=.o}
# Damit nur veränderte .c-Dateien in .o-Dateien kompiliert werden
OBJSB	=	${SRCSB:.c=.o}
# Die veränderten Bonus-C-Dateien werden werden zu .o-Dateien
NAME	=	libft.a
# Name des kompilierten Programms
RM		=	rm -f
# -f (force) macht fclean jederzeit ausführbar (auch ohne .o-Dateien)
CC		=	cc
# Kompiliersprache
CFLAGS	=	-Wall -Wextra -Werror
# Die verwendeten Flags
${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}
# Die .o-Dateien werden nur verlinkt, falls NAME noch nicht existiert
all:		${NAME}
# Die Standard-Regel wird per Konvention eingefügt (und in re genutzt)
bonus:		${OBJSB}
			ar rcs ${NAME} ${OBJSB}
# rcs steht für replace/create, create silently und o.-Datei-Index
clean:
			${RM} ${OBJS}
# Löscht die .o-Dateien
fclean:		clean
			${RM} ${NAME}
# Löscht die .o- und exe-Dateien
re:			fclean all
# Löscht und rekompiliert
.PHONY:		all clean fclean re
# Führt die Befehle aus, auch wenn eine gleichnamige Datei existiert