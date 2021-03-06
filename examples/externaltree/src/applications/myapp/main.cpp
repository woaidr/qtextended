/****************************************************************************
**
** This file is part of the Qt Extended Opensource Package.
**
** Copyright (C) 2009 Trolltech ASA.
**
** Contact: Qt Extended Information (info@qtextended.org)
**
** This file may be used under the terms of the GNU General Public License
** version 2.0 as published by the Free Software Foundation and appearing
** in the file LICENSE.GPL included in the packaging of this file.
**
** Please review the following information to ensure GNU General Public
** Licensing requirements will be met:
**     http://www.fsf.org/licensing/licenses/info/GPLv2.html.
**
**
****************************************************************************/

#include <mylib.h>
#include <private/mylibdefs_p.h>
#include <QtopiaApplication>

QSXE_APP_KEY
int main( int argc, char **argv )
{
    QSXE_SET_APP_KEY(argv[0])
    QtopiaApplication app( argc, argv );
#ifdef TEXT
    MyButton button;
    button.show();
    return app.exec();
#else
    return -1;
#endif
}

