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


#include "SWGLimeRFEReport.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGLimeRFEReport::SWGLimeRFEReport(QString* json) {
    init();
    this->fromJson(*json);
}

SWGLimeRFEReport::SWGLimeRFEReport() {
    rx_on = 0;
    m_rx_on_isSet = false;
    tx_on = 0;
    m_tx_on_isSet = false;
    forward_power = 0;
    m_forward_power_isSet = false;
    reflected_power = 0;
    m_reflected_power_isSet = false;
}

SWGLimeRFEReport::~SWGLimeRFEReport() {
    this->cleanup();
}

void
SWGLimeRFEReport::init() {
    rx_on = 0;
    m_rx_on_isSet = false;
    tx_on = 0;
    m_tx_on_isSet = false;
    forward_power = 0;
    m_forward_power_isSet = false;
    reflected_power = 0;
    m_reflected_power_isSet = false;
}

void
SWGLimeRFEReport::cleanup() {




}

SWGLimeRFEReport*
SWGLimeRFEReport::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGLimeRFEReport::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&rx_on, pJson["rxOn"], "qint32", "");
    
    ::SWGSDRangel::setValue(&tx_on, pJson["txOn"], "qint32", "");
    
    ::SWGSDRangel::setValue(&forward_power, pJson["forwardPower"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reflected_power, pJson["reflectedPower"], "qint32", "");
    
}

QString
SWGLimeRFEReport::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGLimeRFEReport::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_rx_on_isSet){
        obj->insert("rxOn", QJsonValue(rx_on));
    }
    if(m_tx_on_isSet){
        obj->insert("txOn", QJsonValue(tx_on));
    }
    if(m_forward_power_isSet){
        obj->insert("forwardPower", QJsonValue(forward_power));
    }
    if(m_reflected_power_isSet){
        obj->insert("reflectedPower", QJsonValue(reflected_power));
    }

    return obj;
}

qint32
SWGLimeRFEReport::getRxOn() {
    return rx_on;
}
void
SWGLimeRFEReport::setRxOn(qint32 rx_on) {
    this->rx_on = rx_on;
    this->m_rx_on_isSet = true;
}

qint32
SWGLimeRFEReport::getTxOn() {
    return tx_on;
}
void
SWGLimeRFEReport::setTxOn(qint32 tx_on) {
    this->tx_on = tx_on;
    this->m_tx_on_isSet = true;
}

qint32
SWGLimeRFEReport::getForwardPower() {
    return forward_power;
}
void
SWGLimeRFEReport::setForwardPower(qint32 forward_power) {
    this->forward_power = forward_power;
    this->m_forward_power_isSet = true;
}

qint32
SWGLimeRFEReport::getReflectedPower() {
    return reflected_power;
}
void
SWGLimeRFEReport::setReflectedPower(qint32 reflected_power) {
    this->reflected_power = reflected_power;
    this->m_reflected_power_isSet = true;
}


bool
SWGLimeRFEReport::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_rx_on_isSet){
            isObjectUpdated = true; break;
        }
        if(m_tx_on_isSet){
            isObjectUpdated = true; break;
        }
        if(m_forward_power_isSet){
            isObjectUpdated = true; break;
        }
        if(m_reflected_power_isSet){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

