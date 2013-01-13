dnl Process this file with autoconf to produce a configure script.
AC_INIT(dytwo, 1.0, me@mail.com)
AC_CANONICAL_TARGET
AC_CONFIG_SRCDIR(src/vm/mindy.c)
AM_INIT_AUTOMAKE

AC_CONFIG_HEADERS([config.h])
AC_PROG_CC
AC_PROG_LEX
AC_PROG_YACC
AM_PROG_CC_C_O

AC_CHECK_SIZEOF(long, 4)
AC_CHECK_SIZEOF(int, 4)
AC_CHECK_SIZEOF(void *, 4)

AC_SUBST(SIZEOF_VOID_P)

AC_OUTPUT(Makefile src/Makefile src/vm/Makefile src/compiler/Makefile libraries/Makefile libraries/dylan/Makefile libraries/streams/Makefile)
