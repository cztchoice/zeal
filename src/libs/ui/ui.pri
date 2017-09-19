ZEAL_LIB_NAME = Ui

QT += webenginewidgets

# QxtGlobalShortcut dependencies
unix:!macx {
    QT += x11extras

    CONFIG += link_pkgconfig
    PKGCONFIG += x11 xcb xcb-keysyms
}

macx {
    LIBS += -framework Carbon
}
