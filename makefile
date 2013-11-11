CC     = gcc
MK     = touch
RM     = rm -rf
MARK   = .mark
NAME   = project
DSRCS  = sources
DINTS  = interns
DOBJS  = objects
DHEADS = headers
DLIBS  = libraries
MKDIR  = mkdir -p
FLAGS  = -g

strict: FLAGS +=   \
				 -W        \
				 -ansi     \
				 -Wall     \
				 -Wmain    \
				 -Werror   \
				 -Wextra   \
				 -Wunused  \
				 -pedantic \
				 -Wstrict-prototypes

SRCS   = $(shell find $(DSRCS) -type f -name "*.c") $(DINTS)/project.c
HEADS  = $(DHEADS)/headers.h
OBJS   = $(SRCS:%.c=$(DOBJS)/%.o)
INCS   = $(HEADS:%=-include %)
LIBS   = $(shell find $(DLIBS) -type f -name "*.a" -name "*.so")
LIBS  += -lm -lpthread

################################################################################
################################################################################

.PHONY: default strict clean clean fclean reset

default: $(NAME)
	@$(MK) $(MARK)

ifneq ($(shell find -name $(MARK)), )
strict: clean
endif

strict: $(NAME)

################################################################################
################################################################################

$(NAME): $(OBJS) $(LIBS)
	@$(CC) $(OBJS) $(LIBS) -o $(NAME)

$(DOBJS)/%.o: %.c $(HEADS)
	@echo -e "$@"
	@$(MKDIR) $(dir $@)
	@$(CC) -c $< -o $@ $(FLAGS) $(INCS)

################################################################################
################################################################################

clean:
	@$(RM) $(DOBJS)/*
	@$(RM) $(MARK)

fclean: clean
	@$(RM) $(NAME)

reset: fclean default
