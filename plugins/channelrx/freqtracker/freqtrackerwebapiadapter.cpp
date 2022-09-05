///////////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2019 Edouard Griffiths, F4EXB.                                  //
//                                                                               //
// This program is free software; you can redistribute it and/or modify          //
// it under the terms of the GNU General Public License as published by          //
// the Free Software Foundation as version 3 of the License, or                  //
// (at your option) any later version.                                           //
//                                                                               //
// This program is distributed in the hope that it will be useful,               //
// but WITHOUT ANY WARRANTY; without even the implied warranty of                //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the                  //
// GNU General Public License V3 for more details.                               //
//                                                                               //
// You should have received a copy of the GNU General Public License             //
// along with this program. If not, see <http://www.gnu.org/licenses/>.          //
///////////////////////////////////////////////////////////////////////////////////

#include "SWGChannelSettings.h"
#include "freqtracker.h"
#include "freqtrackerwebapiadapter.h"

FreqTrackerWebAPIAdapter::FreqTrackerWebAPIAdapter()
{}

FreqTrackerWebAPIAdapter::~FreqTrackerWebAPIAdapter()
{}

int FreqTrackerWebAPIAdapter::webapiSettingsGet(
        SWGSDRangel::SWGChannelSettings& response,
        QString& errorMessage)
{
    (void) errorMessage;
    response.setFreqTrackerSettings(new SWGSDRangel::SWGFreqTrackerSettings());
    response.getFreqTrackerSettings()->init();
    FreqTracker::webapiFormatChannelSettings(response, m_settings);

    return 200;
}

int FreqTrackerWebAPIAdapter::webapiSettingsPutPatch(
        bool force,
        const QStringList& channelSettingsKeys,
        SWGSDRangel::SWGChannelSettings& response,
        QString& errorMessage)
{
    (void) force; // no action
    (void) errorMessage;
    FreqTracker::webapiUpdateChannelSettings(m_settings, channelSettingsKeys, response);

    return 200;
}
