///////////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2016 Edouard Griffiths, F4EXB                                   //
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

#ifndef INCLUDE_NCOF_H
#define INCLUDE_NCOF_H

#include "dsp/dsptypes.h"
#include "util/export.h"

class SDRANGEL_API NCOF {
private:
	enum {
		TableSize = (1 << 12),
	};
	static Real m_table[TableSize];
	static bool m_tableInitialized;

	static void initTable();

	Real m_phaseIncrement;
	Real m_phase;

public:
	NCOF();

	void setFreq(Real freq, Real sampleRate);
	void setPhase(Real phase) { m_phase = phase; }

	int nextPhase()        //!< Increment phase and return its integer value
	{
		m_phase += m_phaseIncrement;
		while(m_phase >= TableSize)
			m_phase -= TableSize;
		while(m_phase < 0)
			m_phase += TableSize;
		return (int) m_phase;
	}

	Real next();            //!< Return next real sample
	Complex nextIQ();       //!< Return next complex sample
	Complex nextQI();       //!< Return next complex sample (reversed)
	Real get();             //!< Return current real sample (no phase increment)
	Complex getIQ();        //!< Return current complex sample (no phase increment)
	void getIQ(Complex& c); //!< Sets to the current complex sample (no phase increment)
	Complex getQI();        //!< Return current complex sample (no phase increment, reversed)
	void getQI(Complex& c); //!< Sets to the current complex sample (no phase increment, reversed)
};

#endif // INCLUDE_NCO_H
