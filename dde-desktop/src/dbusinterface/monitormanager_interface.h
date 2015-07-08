/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -N -p monitormanager_interface.h:monitormanager_interface.cpp -c MonitorManagerInterface /home/djf/workspace/github/QtDBusXmlTool/monitormanager.xml
 *
 * qdbusxml2cpp is Copyright (C) 2014 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef MONITORMANAGER_INTERFACE_H_1436348950
#define MONITORMANAGER_INTERFACE_H_1436348950

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface com.deepin.filemanager.Backend.MonitorManager
 */
class MonitorManagerInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "com.deepin.filemanager.Backend.MonitorManager"; }

public:
    MonitorManagerInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~MonitorManagerInterface();

    Q_PROPERTY(uint FileMonitorEventAttributeChanged READ fileMonitorEventAttributeChanged)
    inline uint fileMonitorEventAttributeChanged() const
    { return qvariant_cast< uint >(property("FileMonitorEventAttributeChanged")); }

    Q_PROPERTY(uint FileMonitorEventChanged READ fileMonitorEventChanged)
    inline uint fileMonitorEventChanged() const
    { return qvariant_cast< uint >(property("FileMonitorEventChanged")); }

    Q_PROPERTY(uint FileMonitorEventChangesDoneHint READ fileMonitorEventChangesDoneHint)
    inline uint fileMonitorEventChangesDoneHint() const
    { return qvariant_cast< uint >(property("FileMonitorEventChangesDoneHint")); }

    Q_PROPERTY(uint FileMonitorEventCreated READ fileMonitorEventCreated)
    inline uint fileMonitorEventCreated() const
    { return qvariant_cast< uint >(property("FileMonitorEventCreated")); }

    Q_PROPERTY(uint FileMonitorEventDeleted READ fileMonitorEventDeleted)
    inline uint fileMonitorEventDeleted() const
    { return qvariant_cast< uint >(property("FileMonitorEventDeleted")); }

    Q_PROPERTY(uint FileMonitorEventMoved READ fileMonitorEventMoved)
    inline uint fileMonitorEventMoved() const
    { return qvariant_cast< uint >(property("FileMonitorEventMoved")); }

    Q_PROPERTY(uint FileMonitorEventPreUnmount READ fileMonitorEventPreUnmount)
    inline uint fileMonitorEventPreUnmount() const
    { return qvariant_cast< uint >(property("FileMonitorEventPreUnmount")); }

    Q_PROPERTY(uint FileMonitorEventUnmounted READ fileMonitorEventUnmounted)
    inline uint fileMonitorEventUnmounted() const
    { return qvariant_cast< uint >(property("FileMonitorEventUnmounted")); }

    Q_PROPERTY(uint FileMonitorFlagsNone READ fileMonitorFlagsNone)
    inline uint fileMonitorFlagsNone() const
    { return qvariant_cast< uint >(property("FileMonitorFlagsNone")); }

    Q_PROPERTY(uint FileMonitorFlagsSendMoved READ fileMonitorFlagsSendMoved)
    inline uint fileMonitorFlagsSendMoved() const
    { return qvariant_cast< uint >(property("FileMonitorFlagsSendMoved")); }

    Q_PROPERTY(uint FileMonitorFlagsWatchHardLinks READ fileMonitorFlagsWatchHardLinks)
    inline uint fileMonitorFlagsWatchHardLinks() const
    { return qvariant_cast< uint >(property("FileMonitorFlagsWatchHardLinks")); }

    Q_PROPERTY(uint FileMonitorFlagsWatchMounts READ fileMonitorFlagsWatchMounts)
    inline uint fileMonitorFlagsWatchMounts() const
    { return qvariant_cast< uint >(property("FileMonitorFlagsWatchMounts")); }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QString, QDBusObjectPath, QString> Monitor(const QString &in0, uint in1)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1);
        return asyncCallWithArgumentList(QStringLiteral("Monitor"), argumentList);
    }
    inline QDBusReply<QString> Monitor(const QString &in0, uint in1, QDBusObjectPath &out1, QString &out2)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1);
        QDBusMessage reply = callWithArgumentList(QDBus::Block, QStringLiteral("Monitor"), argumentList);
        if (reply.type() == QDBusMessage::ReplyMessage && reply.arguments().count() == 3) {
            out1 = qdbus_cast<QDBusObjectPath>(reply.arguments().at(1));
            out2 = qdbus_cast<QString>(reply.arguments().at(2));
        }
        return reply;
    }

    inline QDBusPendingReply<> Unmonitor(uint in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("Unmonitor"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

#endif
