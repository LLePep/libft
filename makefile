CC = gcc
CFLAGS = -Wall -Werror -Wextra
INC = #fichier d'entête
SRC = src/
OBJ = obj/
HEAD = -I header/
NAME = main

# Liste de tous les fichiers source .c
SRC_FILES = $(wildcard $(SRC)*.c)

# Convertir les noms de fichiers source en noms de fichiers objets
OBJ_FILES = $(patsubst $(SRC)%.c, $(OBJ)%.o, $(SRC_FILES))

# Créer la règle "objs" pour compiler uniquement les fichiers objets
objs: $(OBJ_FILES)

$(OBJ)%.o: $(SRC)%.c
	$(CC) $(HEAD) -c $< -o $@ $(CFLAGS)

# Compilation complète du programme si besoin
all: $(OBJ_FILES)
	$(CC) -o $(NAME) $(OBJ_FILES) $(CFLAGS) $(HEAD)

clean:
	rm -rf $(OBJ)*.o