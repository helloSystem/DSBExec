/*-
 * Copyright (c) 2016 Marcel Kaiser. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _QT_HELPER_H_
#define _QT_HELPER_H_
#include <QApplication>
#include <QMessageBox>
#include <QStyle>
#include <errno.h>
#include <cstdarg>
#include <cstdio>

extern void  qh_warn(QWidget *, const char *fmt, ...);
extern void  qh_warn(QWidget *, QString);
extern void  qh_warnx(QWidget *, const char *fmt, ...);
extern void  qh_warnx(QWidget *, QString);
extern void  qh_err(QWidget *, int eval, const char *fmt, ...);
extern void  qh_err(QWidget *, int eval, QString);
extern void  qh_errx(QWidget *, int eval, const char *fmt, ...);
extern void  qh_errx(QWidget *, int eval, QString);
extern QIcon qh_loadStockIcon(QStyle::StandardPixmap pm, QWidget *parent = 0);
extern QIcon qh_loadIcon(const char *name, ...);
#endif // !_QT_HELPER_H_
