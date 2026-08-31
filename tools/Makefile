PROGRAMS := bin2c mkdmadata mkldscript mkspecrules preprocess_pragmas vtxdis

UNAME_S := $(shell uname -s)
ifeq ($(UNAME_S),Linux)
  DETECTED_OS=linux
else ifeq ($(UNAME_S),Darwin)
  DETECTED_OS=macos
else
  $(error Unsupported OS: $(UNAME_S))
endif

WARNFLAGS := -Wall -Wextra -pedantic
OPTFLAGS := -O2 -g
LDFLAGS :=

ifeq ($(shell command -v clang >/dev/null 2>&1; echo $$?),0)
  CC := clang
  CXX := clang++
else
  CC := gcc
  CXX := g++
endif

LLD ?= 0

ifeq ($(shell command -v ld.lld >/dev/null 2>&1; echo $$?),0)
  LLD := 1
endif

ifneq ($(LLD),0)
  LDFLAGS += -fuse-ld=lld
endif

.PHONY: all clean distclean

all: $(PROGRAMS) armips
	$(MAKE) -C fado
	$(MAKE) -C audio
	$(MAKE) -C com-plugin
	$(MAKE) -C assets

clean:
	$(RM) $(PROGRAMS) $(addsuffix .exe,$(PROGRAMS))
	$(RM) -r compiler_archives/archives
	$(RM) -r ido_recomp egcs
	$(MAKE) -C fado clean
	$(MAKE) -C audio clean
	$(MAKE) -C com-plugin clean
	$(MAKE) -C assets clean

distclean: clean
	$(MAKE) -C audio distclean
	$(MAKE) -C assets distclean
	$(RM) armips

armips: armips.cpp
	$(CXX) $(WARNFLAGS) -std=c++17 $(OPTFLAGS) -s -fno-rtti -pipe -Wno-unused-parameter -Wno-sign-compare $< -o $@

bin2c_SOURCES              := bin2c.c
mkdmadata_SOURCES          := mkdmadata.c spec.c util.c
mkldscript_SOURCES         := mkldscript.c spec.c util.c
mkspecrules_SOURCES        := mkspecrules.c spec.c util.c
preprocess_pragmas_SOURCES := preprocess_pragmas.c
vtxdis_SOURCES             := vtxdis.c

define COMPILE
$(1): $($1_SOURCES)
	$(CC) $(WARNFLAGS) -std=gnu99 $(OPTFLAGS) $$^ $(LDFLAGS) -o $$@
endef

$(foreach p,$(PROGRAMS),$(eval $(call COMPILE,$(p))))
