# set complier
CC = clang
CFLAGS = -Wall

# def source c
SRCS := $(wildcard *.c)
BINS := $(patsubst %.c,%,$(SRCS))

# all  exec gmake exec
all: $(BINS)

# define rule
%: %.c
	$(CC) $(CFLAGS) $< -o $@

# clean tmp object
clean:
	rm -f $(BINS)

