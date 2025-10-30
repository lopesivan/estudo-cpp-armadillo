# Makefile: A standard Makefile for ex-01.cpp

PKG_CONFIG_PATH:=/usr/lib/x86_64-linux-gnu/pkgconfig
export PKG_CONFIG_PATH

ARMADILLO_LIBS   = armadillo
ARMADILLO_CFLAGS = $(shell /usr/bin/pkg-config --cflags $(ARMADILLO_LIBS))
ARMADILLO_LDLIBS = $(shell /usr/bin/pkg-config --libs $(ARMADILLO_LIBS))

CC       = g++
LD       = $(CC)
WARNING  = -Wall -Werror -Wpedantic -Wno-parentheses
DEBUG    = -g
CPPFLAGS = $(DEBUG) -std=c++14 $(WARNING) $(ARMADILLO_CFLAGS)
LDFLAGS  = $(ARMADILLO_LDLIBS)

all  : ex-01
ex-01: ex-01.o
clean:
	/bin/rm -rf ex-01 ex-01.o
# END OF FILE
