#ifndef EXPORTDIALOG_H
#define EXPORTDIALOG_H

#include "scrolldialog.h"

namespace vnotex
{
    class Notebook;
    class Node;

    class ExportDialog : public ScrollDialog
    {
        Q_OBJECT
    public:
        ExportDialog(QWidget *p_parent = nullptr);

    private:
        void setupUI();
    };
}

#endif // EXPORTDIALOG_H
