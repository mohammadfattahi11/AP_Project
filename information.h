#ifndef INFORMATION_H
#define INFORMATION_H

#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QVector>

static QJsonObject read_info(){
    QFile file_info(":/new/prefix2/file.json");
    file_info.open(QIODevice::ReadOnly);
    QByteArray byte = file_info.readAll();
    QJsonDocument doc = QJsonDocument::fromJson(byte);
    QJsonObject file_obj = doc.object();
    return file_obj;
}

static void write_info(QJsonObject j){
    QJsonDocument doc(j);
    QFile file_info(":/new/prefix2/file.json");
    file_info.open(QIODevice::WriteOnly);
    file_info.write(doc.toJson());
}

#endif // INFORMATION_H