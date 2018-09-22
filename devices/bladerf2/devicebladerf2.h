///////////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2018 Edouard Griffiths, F4EXB                                   //
//                                                                               //
// This program is free software; you can redistribute it and/or modify          //
// it under the terms of the GNU General Public License as published by          //
// the Free Software Foundation as version 3 of the License, or                  //
//                                                                               //
// This program is distributed in the hope that it will be useful,               //
// but WITHOUT ANY WARRANTY; without even the implied warranty of                //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the                  //
// GNU General Public License V3 for more details.                               //
//                                                                               //
// You should have received a copy of the GNU General Public License             //
// along with this program. If not, see <http://www.gnu.org/licenses/>.          //
///////////////////////////////////////////////////////////////////////////////////

#ifndef DEVICES_BLADERF2_DEVICEBLADERF2_H_
#define DEVICES_BLADERF2_DEVICEBLADERF2_H_

#include <stdint.h>
#include <libbladeRF.h>

#include "export.h"

class DEVICES_API DeviceBladeRF2
{
public:
    DeviceBladeRF2();
    ~DeviceBladeRF2();

    bool open(const char *serial);
    void close();

    void getFrequencyRangeRx(int& min, int& max, int& step);
    void getFrequencyRangeTx(int& min, int& max, int& step);
    void getSampleRateRangeRx(int& min, int& max, int& step);
    void getSampleRateRangeTx(int& min, int& max, int& step);
    void getBandwidthRangeRx(int& min, int& max, int& step);
    void getBandwidthRangeTx(int& min, int& max, int& step);
    void getGlobalGainRangeRx(int& min, int& max, int& step);
    void getGlobalGainRangeTx(int& min, int& max, int& step);

private:
    bladerf *m_dev;
    static struct bladerf *open_bladerf_from_serial(const char *serial);
};



#endif /* DEVICES_BLADERF2_DEVICEBLADERF2_H_ */
