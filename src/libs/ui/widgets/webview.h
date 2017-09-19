/****************************************************************************
**
** Copyright (C) 2015-2016 Oleg Shparber
** Copyright (C) 2013-2014 Jerzy Kozera
** Contact: https://go.zealdocs.org/l/contact
**
** This file is part of Zeal.
**
** Zeal is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
**
** Zeal is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with Zeal. If not, see <https://www.gnu.org/licenses/>.
**
****************************************************************************/

#ifndef ZEAL_WIDGETUI_WEBVIEW_H
#define ZEAL_WIDGETUI_WEBVIEW_H

#include <QWebEngineView>
#include <QWebEnginePage>

namespace Zeal {
namespace WidgetUi {

class WebView : public QWebEngineView
{
    Q_OBJECT
public:
    explicit WebView(QWidget *parent = nullptr);

    int zealZoomFactor() const;
    void setZealZoomFactor(int zf);

protected:
    QWebEngineView *createWindow(QWebEnginePage::WebWindowType type) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void wheelEvent(QWheelEvent *event) override;

private:
    QUrl clickedLink(const QPoint &pos) const;
    void updateZoomFactor();

    QUrl m_clickedLink;
    int m_zoomFactor = 0;
};

} // namespace WidgetUi
} // namespace Zeal

#endif // ZEAL_WIDGETUI_WEBVIEW_H
