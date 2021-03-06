/*

Copyright (c) 2012, BBR Inc.  All rights reserved.

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be included
in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

*/
/*
 P2PError.h
*/
#ifndef _P2PERROR_H_
#define _P2PERROR_H_

#include <config.h>
#include <stdarg.h>
#include <Error.h>
#ifdef HAVE_CPP_POPPLER_VERSION_H
#include "cpp/poppler-version.h"
#endif

#if POPPLER_VERSION_MAJOR > 0 || POPPLER_VERSION_MINOR >= 19
#define pdfError(pos,...) error(errInternal,pos,__VA_ARGS__)
#else
#define pdfError(pos,...) error(pos,__VA_ARGS__)
#endif

#endif
