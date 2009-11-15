AC_INIT([swfDevice], 0.1)

MING_CONFIG="ming-config"

AC_ARG_WITH([ming-config],
    AC_HELP_STRING([--with-ming-config=MING_CONFIG],
           [the location of ming-config]),
           [ming_config=$withval])
if test [ -n "$ming_config" ] ; then
    AC_SUBST([MING_CONFIG],["${ming_config}"])
fi
AC_MSG_CHECKING([whether ming is installed])
if test `${MING_CONFIG} --version`;
then
	AC_MSG_RESULT([yes!])
	PKG_CPPFLAGS=`${MING_CONFIG} --cflags`
	PKG_LIBS=`${MING_CONFIG} --libs`

else

	echo ""
	echo "******************************************************************"
	echo "Error: ming-config not found"
	echo "The ming-config script distributed with libming could not be found."
	echo "If you have not installed the ming libraries, you can download the"
	echo "source from  http://www.libming.org/"
	echo ""
	echo "If you have installed the ming libraries, then make sure that"
	echo "ming-config is in your path. Try typing ming-config at a shell"
	echo "prompt and see if it runs. If not, use:"
	echo " --configure-args='--with-ming-config=/path/to/ming-config'"	
	echo "with appropriate values for your installation."
	echo "******************************************************************"
	echo ""

	exit 1

fi
MING_VERSION=`${MING_CONFIG} --version`
VER2=`echo "$MING_VERSION" | cut -d"." -f2`
REQ2_MING="4"
VER3=`echo "$MING_VERSION" | cut -d"." -f3`
REQ3_MING="0"
echo "Found libming version $MING_VERSION."
if test "$VER2" -lt "$REQ2_MING" ; then
    echo "For building swfDevice, at least libming version 0.4.0 is required."
    exit 1
fi
if test "$VER2" -eq "$REQ2_MING" ; then
    if test "$VER3" -lt "$REQ3_MING" ; then
        echo "For building swfDevice, at least libming version 0.4.0 is required."
        exit 1
    fi
	if test "$VER3" -eg "$REQ3_MING" ; then
        echo "You are using libming version 0.4.0, please make sure you are using Beta 5 or later."
        exit 1
    fi
fi

dnl Set R flags
: ${R_HOME=`R RHOME`}
if test -z "${R_HOME}"; then
  echo "could not determine R_HOME"
  exit 1
fi
CC=`"${R_HOME}/bin/R" CMD config CC`
CFLAGS=`"${R_HOME}/bin/R" CMD config CFLAGS`
CPPFLAGS=`"${R_HOME}/bin/R" CMD config CPPFLAGS`

AC_SUBST(PKG_CPPFLAGS)
AC_SUBST(PKG_LIBS)
AC_OUTPUT(src/Makevars)
