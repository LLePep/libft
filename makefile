CC = gcc
CFLAGS = -Wall -Werror -Wextra -I
INC = #fichier d'entête
SRC = src/
OBJ = obj/
HEAD = header/
NAME = main

# Liste de tous les fichiers source .c
SRC_FILES = $(wildcard $(SRC)*.c)

# Convertir les noms de fichiers source en noms de fichiers objets
OBJ_FILES = $(patsubst $(SRC)%.c, $(OBJ)%.o, $(SRC_FILES))

# Créer la règle "objs" pour compiler uniquement les fichiers objets
objs: $(OBJ_FILES)

%.o: %.c ${HEAD}
	$(CC) $(CFLAGS) $(HEAD) -c $< -o $@

# Compilation complète du programme si besoin
all: $(OBJ_FILES)
	$(CC) -o $(NAME) $(OBJ_FILES) $(CFLAGS) $(HEAD)

clean:
	rm -rf $(OBJ)*.o