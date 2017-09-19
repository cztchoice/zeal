ZEAL_LIB_NAME = Core

QT += network webenginewidgets

unix:!macx {
    CONFIG += link_pkgconfig
    PKGCONFIG += libarchive
}
win32: {
    LIBS += -larchive_static -lz
}
