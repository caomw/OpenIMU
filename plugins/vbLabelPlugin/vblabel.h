#ifndef VBLABEL_H
#define VBLABEL_H

#include <QQuickItem>

class VBLabel : public QQuickItem
{
public:
    VBLabel();
    ~VBLabel();
    
    QSGNode* updatePaintNode(QSGNode* oldNode, UpdatePaintNodeData* ) override;
};

#endif // VBLABEL_H
