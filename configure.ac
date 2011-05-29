#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.68])
AC_INIT([foobot++], [0.1], [angelos@unkreativ.org])
AC_CONFIG_SRCDIR([src/foobot.cc])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE([foreign])

# Checks for programs.
AC_PROG_CXX

# Checks for libraries.
PKG_PROG_PKG_CONFIG([0.24])
PKG_CHECK_MODULES([glibmm], [glibmm-2.4])
PKG_CHECK_MODULES([giomm], [giomm-2.4 >= 2.14])

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
