/******************************************************************************
**
** Copyright (C) 2009-2010 DIATEAM. All rights reserved.
**
** This file is part of the "NetGlub" program.
**
** This program is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program.  If not, see <http://www.gnu.org/licenses/>.
**
******************************************************************************/

#ifndef NTGTRANSFORMPLUGIN_H
#define NTGTRANSFORMPLUGIN_H

#include "ntgTransform.h"

class NtgTransformPlugin
{
  public:
    virtual ~NtgTransformPlugin() {}

    virtual QString transformType() const = 0;
    virtual NtgTransform * createTransform() const = 0;
};

Q_DECLARE_INTERFACE(NtgTransformPlugin,
                    "com.diateam.Plugin.NtgTransformPlugin/1.0");

#endif // NTGTRANSFORMPLUGIN_H
