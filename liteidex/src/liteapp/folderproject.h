/**************************************************************************
** This file is part of LiteIDE
**
** Copyright (c) 2011-2019 LiteIDE. All rights reserved.
**
** This library is free software; you can redistribute it and/or
** modify it under the terms of the GNU Lesser General Public
** License as published by the Free Software Foundation; either
** version 2.1 of the License, or (at your option) any later version.
**
** This library is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
** Lesser General Public License for more details.
**
** In addition, as a special exception,  that plugins developed for LiteIDE,
** are allowed to remain closed sourced and can be distributed under any license .
** These rights are included in the file LGPL_EXCEPTION.txt in this package.
**
**************************************************************************/
// Module: folderproject.h
// Creator: visualfc <visualfc@gmail.com>

#ifndef FOLDERPROJECT_H
#define FOLDERPROJECT_H

#include "liteapi/liteapi.h"
#include "folderview/folderlistview.h"

using namespace LiteApi;

class FolderProject : public IFolderProject
{
    Q_OBJECT
public:
    FolderProject(IApplication *app);
    virtual ~FolderProject();
    virtual QWidget *widget();
    virtual QString name() const;
    virtual QIcon icon() const { return QIcon(); }
    virtual QString filePath() const;
    virtual QString mimeType() const;
    virtual void openFolder(const QString &folder);
    virtual void appendFolder(const QString &folder);
    virtual void clear();
    virtual QStringList folderList() const;
    virtual QStringList fileNameList() const;
    virtual QStringList filePathList() const;
    virtual QString fileNameToFullPath(const QString &filePath);
    virtual QMap<QString,QString> targetInfo() const;
    virtual void load();
protected:
    IApplication *m_liteApp;
    FolderListView *m_folderView;
};

#endif // FOLDERPROJECT_H
