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


#include "SWGSatelliteState.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGSatelliteState::SWGSatelliteState(QString* json) {
    init();
    this->fromJson(*json);
}

SWGSatelliteState::SWGSatelliteState() {
    name = nullptr;
    m_name_isSet = false;
    latitude = 0.0f;
    m_latitude_isSet = false;
    longitude = 0.0f;
    m_longitude_isSet = false;
    altitude = 0.0f;
    m_altitude_isSet = false;
    azimuth = 0.0f;
    m_azimuth_isSet = false;
    elevation = 0.0f;
    m_elevation_isSet = false;
    range = 0.0f;
    m_range_isSet = false;
    range_rate = 0.0f;
    m_range_rate_isSet = false;
    speed = 0.0f;
    m_speed_isSet = false;
    period = 0.0f;
    m_period_isSet = false;
    passes = nullptr;
    m_passes_isSet = false;
}

SWGSatelliteState::~SWGSatelliteState() {
    this->cleanup();
}

void
SWGSatelliteState::init() {
    name = new QString("");
    m_name_isSet = false;
    latitude = 0.0f;
    m_latitude_isSet = false;
    longitude = 0.0f;
    m_longitude_isSet = false;
    altitude = 0.0f;
    m_altitude_isSet = false;
    azimuth = 0.0f;
    m_azimuth_isSet = false;
    elevation = 0.0f;
    m_elevation_isSet = false;
    range = 0.0f;
    m_range_isSet = false;
    range_rate = 0.0f;
    m_range_rate_isSet = false;
    speed = 0.0f;
    m_speed_isSet = false;
    period = 0.0f;
    m_period_isSet = false;
    passes = new QList<SWGSatellitePass*>();
    m_passes_isSet = false;
}

void
SWGSatelliteState::cleanup() {
    if(name != nullptr) { 
        delete name;
    }









    if(passes != nullptr) { 
        auto arr = passes;
        for(auto o: *arr) { 
            delete o;
        }
        delete passes;
    }
}

SWGSatelliteState*
SWGSatelliteState::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGSatelliteState::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&name, pJson["name"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&latitude, pJson["latitude"], "float", "");
    
    ::SWGSDRangel::setValue(&longitude, pJson["longitude"], "float", "");
    
    ::SWGSDRangel::setValue(&altitude, pJson["altitude"], "float", "");
    
    ::SWGSDRangel::setValue(&azimuth, pJson["azimuth"], "float", "");
    
    ::SWGSDRangel::setValue(&elevation, pJson["elevation"], "float", "");
    
    ::SWGSDRangel::setValue(&range, pJson["range"], "float", "");
    
    ::SWGSDRangel::setValue(&range_rate, pJson["rangeRate"], "float", "");
    
    ::SWGSDRangel::setValue(&speed, pJson["speed"], "float", "");
    
    ::SWGSDRangel::setValue(&period, pJson["period"], "float", "");
    
    
    ::SWGSDRangel::setValue(&passes, pJson["passes"], "QList", "SWGSatellitePass");
}

QString
SWGSatelliteState::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGSatelliteState::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(name != nullptr && *name != QString("")){
        toJsonValue(QString("name"), name, obj, QString("QString"));
    }
    if(m_latitude_isSet){
        obj->insert("latitude", QJsonValue(latitude));
    }
    if(m_longitude_isSet){
        obj->insert("longitude", QJsonValue(longitude));
    }
    if(m_altitude_isSet){
        obj->insert("altitude", QJsonValue(altitude));
    }
    if(m_azimuth_isSet){
        obj->insert("azimuth", QJsonValue(azimuth));
    }
    if(m_elevation_isSet){
        obj->insert("elevation", QJsonValue(elevation));
    }
    if(m_range_isSet){
        obj->insert("range", QJsonValue(range));
    }
    if(m_range_rate_isSet){
        obj->insert("rangeRate", QJsonValue(range_rate));
    }
    if(m_speed_isSet){
        obj->insert("speed", QJsonValue(speed));
    }
    if(m_period_isSet){
        obj->insert("period", QJsonValue(period));
    }
    if(passes && passes->size() > 0){
        toJsonArray((QList<void*>*)passes, obj, "passes", "SWGSatellitePass");
    }

    return obj;
}

QString*
SWGSatelliteState::getName() {
    return name;
}
void
SWGSatelliteState::setName(QString* name) {
    this->name = name;
    this->m_name_isSet = true;
}

float
SWGSatelliteState::getLatitude() {
    return latitude;
}
void
SWGSatelliteState::setLatitude(float latitude) {
    this->latitude = latitude;
    this->m_latitude_isSet = true;
}

float
SWGSatelliteState::getLongitude() {
    return longitude;
}
void
SWGSatelliteState::setLongitude(float longitude) {
    this->longitude = longitude;
    this->m_longitude_isSet = true;
}

float
SWGSatelliteState::getAltitude() {
    return altitude;
}
void
SWGSatelliteState::setAltitude(float altitude) {
    this->altitude = altitude;
    this->m_altitude_isSet = true;
}

float
SWGSatelliteState::getAzimuth() {
    return azimuth;
}
void
SWGSatelliteState::setAzimuth(float azimuth) {
    this->azimuth = azimuth;
    this->m_azimuth_isSet = true;
}

float
SWGSatelliteState::getElevation() {
    return elevation;
}
void
SWGSatelliteState::setElevation(float elevation) {
    this->elevation = elevation;
    this->m_elevation_isSet = true;
}

float
SWGSatelliteState::getRange() {
    return range;
}
void
SWGSatelliteState::setRange(float range) {
    this->range = range;
    this->m_range_isSet = true;
}

float
SWGSatelliteState::getRangeRate() {
    return range_rate;
}
void
SWGSatelliteState::setRangeRate(float range_rate) {
    this->range_rate = range_rate;
    this->m_range_rate_isSet = true;
}

float
SWGSatelliteState::getSpeed() {
    return speed;
}
void
SWGSatelliteState::setSpeed(float speed) {
    this->speed = speed;
    this->m_speed_isSet = true;
}

float
SWGSatelliteState::getPeriod() {
    return period;
}
void
SWGSatelliteState::setPeriod(float period) {
    this->period = period;
    this->m_period_isSet = true;
}

QList<SWGSatellitePass*>*
SWGSatelliteState::getPasses() {
    return passes;
}
void
SWGSatelliteState::setPasses(QList<SWGSatellitePass*>* passes) {
    this->passes = passes;
    this->m_passes_isSet = true;
}


bool
SWGSatelliteState::isSet(){
    bool isObjectUpdated = false;
    do{
        if(name && *name != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_latitude_isSet){
            isObjectUpdated = true; break;
        }
        if(m_longitude_isSet){
            isObjectUpdated = true; break;
        }
        if(m_altitude_isSet){
            isObjectUpdated = true; break;
        }
        if(m_azimuth_isSet){
            isObjectUpdated = true; break;
        }
        if(m_elevation_isSet){
            isObjectUpdated = true; break;
        }
        if(m_range_isSet){
            isObjectUpdated = true; break;
        }
        if(m_range_rate_isSet){
            isObjectUpdated = true; break;
        }
        if(m_speed_isSet){
            isObjectUpdated = true; break;
        }
        if(m_period_isSet){
            isObjectUpdated = true; break;
        }
        if(passes && (passes->size() > 0)){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

