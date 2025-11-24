DIR_MEM := memory/

DIR_CHECK := check/

DIR_NODE := node/

DIR_PRINT := print/

DIR_STRING := string/

SRC_DIR := src/

OBJ_DIR := .obj/

SRC_MEM :=		ft_memchr.c \
        		ft_memcmp.c \
				ft_memset.c \
        		ft_bzero.c \
        		ft_memcpy.c \
        		ft_memmove.c \
				ft_calloc.c \
        		ft_strdup.c \

DIR_SRC_MEM := $(addprefix $(DIR_MEM), $(SRC_MEM))

SRC_NODE := 	ft_lstnew_bonus.c \
        		ft_lstadd_front_bonus.c \
        		ft_lstsize_bonus.c \
       			ft_lstlast_bonus.c \
        		ft_lstadd_back_bonus.c \
        		ft_lstdelone_bonus.c \
        		ft_lstclear_bonus.c \
        		ft_lstiter_bonus.c \
        		ft_lstmap_bonus.c

DIR_SRC_NODE := $(addprefix $(DIR_NODE), $(SRC_NODE))


SRC_CHECK := 	ft_isalpha.c \
        		ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \

DIR_SRC_CHECK := $(addprefix $(DIR_CHECK), $(SRC_CHECK))

SRC_PRINT :=	ft_putchar_fd.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c

DIR_SRC_PRINT := $(addprefix $(DIR_PRINT), $(SRC_PRINT))

SRC_STRING :=	ft_strlen.c \
				ft_strlcpy.c \
        		ft_strlcat.c \
				ft_toupper.c \
        		ft_tolower.c \
        		ft_strchr.c \
        		ft_strrchr.c \
        		ft_strncmp.c \
        		ft_strnstr.c \
        		ft_atoi.c \
				ft_substr.c \
        		ft_strjoin.c \
        		ft_strtrim.c \
        		ft_split.c \
        		ft_itoa.c \
        		ft_strmapi.c \
        		ft_striteri.c \

DIR_SRC_STRING := $(addprefix $(DIR_STRING), $(SRC_STRING))

SRCS :=			$(addprefix $(SRC_DIR), $(DIR_SRC_CHECK))\
				$(addprefix $(SRC_DIR), $(DIR_SRC_PRINT))\
				$(addprefix $(SRC_DIR), $(DIR_SRC_STRING))\
				$(addprefix $(SRC_DIR), $(DIR_SRC_MEM))\
				$(addprefix $(SRC_DIR), $(DIR_SRC_NODE))

OBJS = $(subst $(SRC_DIR), $(OBJ_DIR), $(SRCS:.c=.o))
