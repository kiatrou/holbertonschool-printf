.Dd 27/3/25
.Dt _printf
.Sh _printf - Function that produces output according to format
.Sh SYNOPSIS
.Nm
.B #include "main.h"
.br
.B int _printf(const char *format, ...);
.Sh DESCRIPTION
_printf() function produces output according to the format.
It uses a specific function according to received conversion specifier in order to display
the result in the correct format.
The available conversion specifiers are:
.Bl -tag -width -indent
.It Fl   %c
Prints a single character.
.It Fl %s
Prints a string of characters.
.It Fl %d
Prints integers.
.It Fl %i
Prints integers.
.El
.Pp
.SH RETURN
-if successful, these functions return the number of characters printed (excluding the null byte).
If the null return is unsuccessful,-1 is returned.
.Sh EXAMPLE
.Ip
_printf("This is a simple printf %s made in %d ", "Function", 2025);
.IP
    $ "This is a simple printf Function made in 2025"
.br
.Sh SEE ALSO
.Xr printf 3
.\" .Sh BUGS
.\" .Sh HISTORY
.Sh Authors
 Ealise Wang | Eli Malana | Kaj Kennedy | Kassandra Iatrou
