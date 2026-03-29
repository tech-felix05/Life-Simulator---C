CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -Iinclude
TARGET = gioco

# Rilevamento sistema operativo per l'estensione dell'eseguibile
ifeq ($(OS),Windows_NT)
    EXE = .exe
    RM = del /Q
    MKDIR = if not exist obj mkdir obj
else
    EXE =
    RM = rm -rf
    MKDIR = mkdir -p obj
endif

# Trova tutti i file .c in src
SRCS = src/main.c src/funzioni.c
# Definisce i file .o che verranno creati nella cartella obj
OBJS = obj/main.o obj/funzioni.o

# Regola principale
all: $(TARGET)$(EXE)

# Crea l'eseguibile unendo i file oggetto
$(TARGET)$(EXE): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET)$(EXE) $(OBJS)

# Compila i singoli file .c in .o
obj/%.o: src/%.c | obj
	$(CC) $(CFLAGS) -c $< -o $@

# Crea la cartella obj se non esiste
obj:
	$(MKDIR)

# Pulisce i file compilati
clean:
	$(RM) obj $(TARGET)$(EXE)

# Compila ed esegue in un colpo solo
run: all
	./$(TARGET)$(EXE)