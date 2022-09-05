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


#include "SWGAISModActions.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGAISModActions::SWGAISModActions(QString* json) {
    init();
    this->fromJson(*json);
}

SWGAISModActions::SWGAISModActions() {
    tx = 0;
    m_tx_isSet = false;
    encode = 0;
    m_encode_isSet = false;
    data = nullptr;
    m_data_isSet = false;
}

SWGAISModActions::~SWGAISModActions() {
    this->cleanup();
}

void
SWGAISModActions::init() {
    tx = 0;
    m_tx_isSet = false;
    encode = 0;
    m_encode_isSet = false;
    data = new QString("");
    m_data_isSet = false;
}

void
SWGAISModActions::cleanup() {


    if(data != nullptr) { 
        delete data;
    }
}

SWGAISModActions*
SWGAISModActions::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGAISModActions::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&tx, pJson["tx"], "qint32", "");
    
    ::SWGSDRangel::setValue(&encode, pJson["encode"], "qint32", "");
    
    ::SWGSDRangel::setValue(&data, pJson["data"], "QString", "QString");
    
}

QString
SWGAISModActions::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGAISModActions::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_tx_isSet){
        obj->insert("tx", QJsonValue(tx));
    }
    if(m_encode_isSet){
        obj->insert("encode", QJsonValue(encode));
    }
    if(data != nullptr && *data != QString("")){
        toJsonValue(QString("data"), data, obj, QString("QString"));
    }

    return obj;
}

qint32
SWGAISModActions::getTx() {
    return tx;
}
void
SWGAISModActions::setTx(qint32 tx) {
    this->tx = tx;
    this->m_tx_isSet = true;
}

qint32
SWGAISModActions::getEncode() {
    return encode;
}
void
SWGAISModActions::setEncode(qint32 encode) {
    this->encode = encode;
    this->m_encode_isSet = true;
}

QString*
SWGAISModActions::getData() {
    return data;
}
void
SWGAISModActions::setData(QString* data) {
    this->data = data;
    this->m_data_isSet = true;
}


bool
SWGAISModActions::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_tx_isSet){
            isObjectUpdated = true; break;
        }
        if(m_encode_isSet){
            isObjectUpdated = true; break;
        }
        if(data && *data != QString("")){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

