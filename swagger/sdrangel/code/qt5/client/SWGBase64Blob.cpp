/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 7.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGBase64Blob.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGBase64Blob::SWGBase64Blob(QString* json) {
    init();
    this->fromJson(*json);
}

SWGBase64Blob::SWGBase64Blob() {
    blob = nullptr;
    m_blob_isSet = false;
}

SWGBase64Blob::~SWGBase64Blob() {
    this->cleanup();
}

void
SWGBase64Blob::init() {
    blob = new QString("");
    m_blob_isSet = false;
}

void
SWGBase64Blob::cleanup() {
    if(blob != nullptr) { 
        delete blob;
    }
}

SWGBase64Blob*
SWGBase64Blob::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGBase64Blob::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&blob, pJson["blob"], "QString", "QString");
    
}

QString
SWGBase64Blob::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGBase64Blob::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(blob != nullptr && *blob != QString("")){
        toJsonValue(QString("blob"), blob, obj, QString("QString"));
    }

    return obj;
}

QString*
SWGBase64Blob::getBlob() {
    return blob;
}
void
SWGBase64Blob::setBlob(QString* blob) {
    this->blob = blob;
    this->m_blob_isSet = true;
}


bool
SWGBase64Blob::isSet(){
    bool isObjectUpdated = false;
    do{
        if(blob && *blob != QString("")){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

