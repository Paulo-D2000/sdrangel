///////////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2016 F4EXB                                                      //
// written by Edouard Griffiths                                                  //
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


#include "dsp/hbfiltertraits.h"

const int16_t HBFIRFilterTraits<16>::hbMod[16+6] = {
        15,16,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,0,1,2
};

const int32_t HBFIRFilterTraits<16>::hbCoeffs[4] = {
        //* Firwin as in https://www.dsprelated.com/showcode/270.php */
        (int32_t)(-0.0052391810630145274965685509016566356877 * (1 << hbShift)), // /190 => hbShift = 8
        (int32_t)(0.0232111017863650750947535073009930783883 * (1 << hbShift)),
        (int32_t)(-0.0761058457486735451258397233686991967261 * (1 << hbShift)),
        (int32_t)(0.3076987787367443383246268240327481180429 * (1 << hbShift)),
};

const double HBFIRFilterTraits<16>::hbCoeffsF[4] = {
        -0.0052391810630145274965685509016566356877,
         0.0232111017863650750947535073009930783883,
        -0.0761058457486735451258397233686991967261,
         0.3076987787367443383246268240327481180429,
};

const int16_t HBFIRFilterTraits<32>::hbMod[32+6] = {
        31,32,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19, 20,21,22,
        23,24,25,26,27,28,29,30,31,32,0,1,2
};


const int32_t HBFIRFilterTraits<32>::hbCoeffs[8] = {
        //* Firwin as in https://www.dsprelated.com/showcode/270.php */
        (int32_t)(-0.0018878783958199373254477348993418672762 * (1 << hbShift)), // ~1/529 => hbShift = 10
        (int32_t)( 0.0038624783041994003966734805288751886110 * (1 << hbShift)),
        (int32_t)(-0.0082424665965482504098593707908548822161 * (1 << hbShift)),
        (int32_t)( 0.0159471139705940345709933581019868142903 * (1 << hbShift)),
        (int32_t)(-0.0286765592339759019246958615667608682998 * (1 << hbShift)),
        (int32_t)( 0.0507185615622293764492845014046906726435 * (1 << hbShift)),
        (int32_t)(-0.0980159074728618323613105189906491432339 * (1 << hbShift)),
        (int32_t)( 0.3159417644358786247948955860920250415802 * (1 << hbShift)),

//        (qint32)(-0.015956912844043127236437484839370881673 * (1 << hbShift)),
//        (qint32)( 0.013023031678944928940522274274371739011 * (1 << hbShift)),
//        (qint32)(-0.01866942273717486777684371190844103694  * (1 << hbShift)),
//        (qint32)( 0.026550887571157304190005987720724078827 * (1 << hbShift)),
//        (qint32)(-0.038350314277854319344740474662103224546 * (1 << hbShift)),
//        (qint32)( 0.058429248652825838128421764849917963147 * (1 << hbShift)),
//        (qint32)(-0.102889802028955756885153505209018476307 * (1 << hbShift)),
//        (qint32)( 0.317237706405931241260276465254719369113 * (1 << hbShift))
};

const double HBFIRFilterTraits<32>::hbCoeffsF[8] = {
        -0.0018878783958199373254477348993418672762,
         0.0038624783041994003966734805288751886110,
        -0.0082424665965482504098593707908548822161,
         0.0159471139705940345709933581019868142903,
        -0.0286765592339759019246958615667608682998,
         0.0507185615622293764492845014046906726435,
        -0.0980159074728618323613105189906491432339,
         0.3159417644358786247948955860920250415802,
};

const int16_t HBFIRFilterTraits<48>::hbMod[48+6] = {
        47,48,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,
        24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,
        47,48,0,1,2
};


const int32_t HBFIRFilterTraits<48>::hbCoeffs[12] = {
        //* Firwin as in https://www.dsprelated.com/showcode/270.php */
        (int32_t)(-0.0011627994808655962074434020436797254661 * (1 << hbShift)), // ~1/859 => hbShift = 10
        (int32_t)( 0.0017451165792459334517860991553561689216 * (1 << hbShift)),
        (int32_t)(-0.0029357205890606303047563052643909031758 * (1 << hbShift)),
        (int32_t)( 0.0048726090910227891003780875678330630763 * (1 << hbShift)),
        (int32_t)(-0.0077313759655872928144848543752232217230 * (1 << hbShift)),
        (int32_t)( 0.0117637971494846688830238079503942572046 * (1 << hbShift)),
        (int32_t)(-0.0173810771817523163074170611253066454083 * (1 << hbShift)),
        (int32_t)( 0.0253500636065296450216699497559602605179 * (1 << hbShift)),
        (int32_t)(-0.0373266939135983855102551842719549313188 * (1 << hbShift)),
        (int32_t)( 0.0576685041500848358242414803953579394147 * (1 << hbShift)),
        (int32_t)(-0.1024912545928038654086122960507054813206 * (1 << hbShift)),
        (int32_t)( 0.3173768238826674692454332671331940218806 * (1 << hbShift)),

//        (qint32)(-0.004102576237611492253332112767338912818 * (1 << hbShift)),
//        (qint32)( 0.003950551047979387886410762575906119309 * (1 << hbShift)),
//        (qint32)(-0.005807875789391703583164350277456833282 * (1 << hbShift)),
//        (qint32)( 0.00823497890520805998770814682075069868  * (1 << hbShift)),
//        (qint32)(-0.011372226513199541059195851744334504474 * (1 << hbShift)),
//        (qint32)( 0.015471557140973646315984524335362948477 * (1 << hbShift)),
//        (qint32)(-0.020944996398689276484450516591095947661 * (1 << hbShift)),
//        (qint32)( 0.028568078132034283034279553703527199104 * (1 << hbShift)),
//        (qint32)(-0.040015143905614086738964374490024056286 * (1 << hbShift)),
//        (qint32)( 0.059669519431831075095828964549582451582 * (1 << hbShift)),
//        (qint32)(-0.103669138691865420076609893840213771909 * (1 << hbShift)),
//        (qint32)( 0.317491986549921390015072120149852707982 * (1 << hbShift))
};

const double HBFIRFilterTraits<48>::hbCoeffsF[12] = {
        -0.0011627994808655962074434020436797254661,
         0.0017451165792459334517860991553561689216,
        -0.0029357205890606303047563052643909031758,
         0.0048726090910227891003780875678330630763,
        -0.0077313759655872928144848543752232217230,
         0.0117637971494846688830238079503942572046,
        -0.0173810771817523163074170611253066454083,
         0.0253500636065296450216699497559602605179,
        -0.0373266939135983855102551842719549313188,
         0.0576685041500848358242414803953579394147,
        -0.1024912545928038654086122960507054813206,
         0.3173768238826674692454332671331940218806,
};

const int16_t HBFIRFilterTraits<64>::hbMod[64+6] = {
        63,64,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,
        24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,
        47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,0,1,2
};


const int32_t HBFIRFilterTraits<64>::hbCoeffs[16] = {
        //* Remez as in https://www.dsprelated.com/showcode/270.php */
        (int32_t)(-0.0004653050334792540416659067936677729449 * (1 << hbShift)), // ~1/2149 => hbShift = 12
        (int32_t)( 0.0007120490624526883919470643391491648799 * (1 << hbShift)),
        (int32_t)(-0.0012303473710125558716887983479182366864 * (1 << hbShift)),
        (int32_t)( 0.0019716520179919017584369012041634050547 * (1 << hbShift)),
        (int32_t)(-0.0029947484165425580261710170049127555103 * (1 << hbShift)),
        (int32_t)( 0.0043703902150498061263128590780979720876 * (1 << hbShift)),
        (int32_t)(-0.0061858352927315653213558022116558277048 * (1 << hbShift)),
        (int32_t)( 0.0085554408639278121950777489246320328675 * (1 << hbShift)),
        (int32_t)(-0.0116397924445187355563247066925214312505 * (1 << hbShift)),
        (int32_t)( 0.0156852221106748394852115069397768820636 * (1 << hbShift)),
        (int32_t)(-0.0211070832238078286147153761476147337817 * (1 << hbShift)),
        (int32_t)( 0.0286850846890029896607554604770484729670 * (1 << hbShift)),
        (int32_t)(-0.0400956173930921908055147184768429724500 * (1 << hbShift)),
        (int32_t)( 0.0597215923200692666572564348825835622847 * (1 << hbShift)),
        (int32_t)(-0.1036982054813635201195864965484361164272 * (1 << hbShift)),
        (int32_t)( 0.3175014394028848885298543791577685624361 * (1 << hbShift)),

//        (qint32)(-0.001114417441601693505720538368564120901 * (1 << hbShift)),
//        (qint32)( 0.001268007827185253051302527005361753254 * (1 << hbShift)),
//        (qint32)(-0.001959831378850490895410230152151598304 * (1 << hbShift)),
//        (qint32)( 0.002878308307661380308073439948657323839 * (1 << hbShift)),
//        (qint32)(-0.004071361818258721100571850826099762344 * (1 << hbShift)),
//        (qint32)( 0.005597288494657440618973431867289036745 * (1 << hbShift)),
//        (qint32)(-0.007532345003308904551886371336877346039 * (1 << hbShift)),
//        (qint32)( 0.009980346844667375288961963519795972388 * (1 << hbShift)),
//        (qint32)(-0.013092614174300500062830820979797863401 * (1 << hbShift)),
//        (qint32)( 0.01710934914871829748417297878404497169  * (1 << hbShift)),
//        (qint32)(-0.022443558692997273018576720460259821266 * (1 << hbShift)),
//        (qint32)( 0.029875811511593811098386197500076377764 * (1 << hbShift)),
//        (qint32)(-0.041086352085710403647667021687084343284 * (1 << hbShift)),
//        (qint32)( 0.060465467462665789533104998554335907102 * (1 << hbShift)),
//        (qint32)(-0.104159517495977321788203084906854201108 * (1 << hbShift)),
//        (qint32)( 0.317657589850154464805598308885237202048 * (1 << hbShift)),
};

const float HBFIRFilterTraits<64>::hbCoeffsF[16] = {
        -0.0004653050334792540416659067936677729449,
         0.0007120490624526883919470643391491648799,
        -0.0012303473710125558716887983479182366864,
         0.0019716520179919017584369012041634050547,
        -0.0029947484165425580261710170049127555103,
         0.0043703902150498061263128590780979720876,
        -0.0061858352927315653213558022116558277048,
         0.0085554408639278121950777489246320328675,
        -0.0116397924445187355563247066925214312505,
         0.0156852221106748394852115069397768820636,
        -0.0211070832238078286147153761476147337817,
         0.0286850846890029896607554604770484729670,
        -0.0400956173930921908055147184768429724500,
         0.0597215923200692666572564348825835622847,
        -0.1036982054813635201195864965484361164272,
         0.3175014394028848885298543791577685624361,
};

const int16_t HBFIRFilterTraits<80>::hbMod[80+6] = {
        79,80,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,
        24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,
        47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,
        70,71,72,73,74,75,76,77,78,79,80,0,1,2
};


const int32_t HBFIRFilterTraits<80>::hbCoeffs[20] = {
        //* Remez as in https://www.dsprelated.com/showcode/270.php */
        (int32_t)(-0.0001054430663706784843331246137587697831 * (1 << hbShift)), // ~1/9483 => hbShift = 14
        (int32_t)( 0.0001895717826405601933066613629108587702 * (1 << hbShift)),
        (int32_t)(-0.0003519516996893227891822497621632237497 * (1 << hbShift)),
        (int32_t)( 0.0005975111594421821190753485453228677216 * (1 << hbShift)),
        (int32_t)(-0.0009524124279789792160699768430731637636 * (1 << hbShift)),
        (int32_t)( 0.0014474605824692796454677967687985074008 * (1 << hbShift)),
        (int32_t)(-0.0021186428821101787461911314380813564640 * (1 << hbShift)),
        (int32_t)( 0.0030082068742630901220236339099756150972 * (1 << hbShift)),
        (int32_t)(-0.0041664004891296358909502650647027621744 * (1 << hbShift)),
        (int32_t)( 0.0056547140936428538088298623165428580251 * (1 << hbShift)),
        (int32_t)(-0.0075518323360079901707120342280177283101 * (1 << hbShift)),
        (int32_t)( 0.0099644038858163180155669280679830990266 * (1 << hbShift)),
        (int32_t)(-0.0130470841719700410971105597468522319105 * (1 << hbShift)),
        (int32_t)( 0.0170422818715445859028001507340377429500 * (1 << hbShift)),
        (int32_t)(-0.0223637819225956900603957677731159492396 * (1 << hbShift)),
        (int32_t)( 0.0297925991327811050257690084208661573939 * (1 << hbShift)),
        (int32_t)(-0.0410092859102263174175817539435229264200 * (1 << hbShift)),
        (int32_t)( 0.0604034694948822267757115866970707429573 * (1 << hbShift)),
        (int32_t)(-0.1041194584045879306666293473426776472479 * (1 << hbShift)),
        (int32_t)( 0.3176437752925042046214798574510496109724 * (1 << hbShift)),
};

const double HBFIRFilterTraits<80>::hbCoeffsF[20] = {
        -0.0001054430663706784843331246137587697831, // ~1/9483 => hbShift = 14
         0.0001895717826405601933066613629108587702,
        -0.0003519516996893227891822497621632237497,
         0.0005975111594421821190753485453228677216,
        -0.0009524124279789792160699768430731637636,
         0.0014474605824692796454677967687985074008,
        -0.0021186428821101787461911314380813564640,
         0.0030082068742630901220236339099756150972,
        -0.0041664004891296358909502650647027621744,
         0.0056547140936428538088298623165428580251,
        -0.0075518323360079901707120342280177283101,
         0.0099644038858163180155669280679830990266,
        -0.0130470841719700410971105597468522319105,
         0.0170422818715445859028001507340377429500,
        -0.0223637819225956900603957677731159492396,
         0.0297925991327811050257690084208661573939,
        -0.0410092859102263174175817539435229264200,
         0.0604034694948822267757115866970707429573,
        -0.1041194584045879306666293473426776472479,
         0.3176437752925042046214798574510496109724,
};

const int16_t HBFIRFilterTraits<96>::hbMod[96+6] = {
        95,96,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,
        24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,
        47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,
        70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,
        93,94,95,96,0,1,2
};


const int32_t HBFIRFilterTraits<96>::hbCoeffs[24] = {
        //* Remez as in https://www.dsprelated.com/showcode/270.php */
        (int32_t)(-0.0000243052463317893968695708462046667364 * (1 << hbShift)), // 1/41143 => hbShift = 16
        (int32_t)( 0.0000503567741519847557611806732058568059 * (1 << hbShift)),
        (int32_t)(-0.0001002354600628052128195172310043403741 * (1 << hbShift)),
        (int32_t)( 0.0001801275832684542921834081052878673290 * (1 << hbShift)),
        (int32_t)(-0.0003014864432246496970743687704441526876 * (1 << hbShift)),
        (int32_t)( 0.0004783148860127731604417744559754055445 * (1 << hbShift)),
        (int32_t)(-0.0007274200147704492930983422027679807798 * (1 << hbShift)),
        (int32_t)( 0.0010686503612886001472748187524075547117 * (1 << hbShift)),
        (int32_t)(-0.0015251456116906108098629779590282851132 * (1 << hbShift)),
        (int32_t)( 0.0021238131085570461677181075543785482296 * (1 << hbShift)),
        (int32_t)(-0.0028960654265650425873146467381502588978 * (1 << hbShift)),
        (int32_t)( 0.0038789688077727475616629515542399531114 * (1 << hbShift)),
        (int32_t)(-0.0051173875903961539915454359572777320864 * (1 << hbShift)),
        (int32_t)( 0.0066675444490017317031305132957186287967 * (1 << hbShift)),
        (int32_t)(-0.0086031967328669932404405784609480178915 * (1 << hbShift)),
        (int32_t)( 0.0110268456349653827530676863943881471641 * (1 << hbShift)),
        (int32_t)(-0.0140900919878225727721599014330422505736 * (1 << hbShift)),
        (int32_t)( 0.0180336055419063577553995258995200856589 * (1 << hbShift)),
        (int32_t)(-0.0232708957455770061584221508610426099040 * (1 << hbShift)),
        (int32_t)( 0.0305843805330435619671547442521841730922 * (1 << hbShift)),
        (int32_t)(-0.0416576245224431485070226699463091790676 * (1 << hbShift)),
        (int32_t)( 0.0608846679850302968661779345893592108041 * (1 << hbShift)),
        (int32_t)(-0.1044156487571061137087369274922821205109 * (1 << hbShift)),
        (int32_t)( 0.3177437550265513332981015537370694801211 * (1 << hbShift)),
};

const double HBFIRFilterTraits<96>::hbCoeffsF[24] = {
        -0.0000243052463317893968695708462046667364,
         0.0000503567741519847557611806732058568059,
        -0.0001002354600628052128195172310043403741,
         0.0001801275832684542921834081052878673290,
        -0.0003014864432246496970743687704441526876,
         0.0004783148860127731604417744559754055445,
        -0.0007274200147704492930983422027679807798,
         0.0010686503612886001472748187524075547117,
        -0.0015251456116906108098629779590282851132,
         0.0021238131085570461677181075543785482296,
        -0.0028960654265650425873146467381502588978,
         0.0038789688077727475616629515542399531114,
        -0.0051173875903961539915454359572777320864,
         0.0066675444490017317031305132957186287967,
        -0.0086031967328669932404405784609480178915,
         0.0110268456349653827530676863943881471641,
        -0.0140900919878225727721599014330422505736,
         0.0180336055419063577553995258995200856589,
        -0.0232708957455770061584221508610426099040,
         0.0305843805330435619671547442521841730922,
        -0.0416576245224431485070226699463091790676,
         0.0608846679850302968661779345893592108041,
        -0.1044156487571061137087369274922821205109,
         0.3177437550265513332981015537370694801211,
};

const int16_t HBFIRFilterTraits<112>::hbMod[112+6] = {
        111,112,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,
        24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,
        47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,
        70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,
        93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,
        112,0,1,2
};


const int32_t HBFIRFilterTraits<112>::hbCoeffs[28] = {
        //* Remez as in https://www.dsprelated.com/showcode/270.php */
        (int32_t)(-0.0000057182612173497993884982611156875265 * (1 << hbShift)), // ~1/174878 => hbShift = 18
        (int32_t)( 0.0000134089330475142792093150995169636985 * (1 << hbShift)),
        (int32_t)(-0.0000285019056923813186876261183133607346 * (1 << hbShift)),
        (int32_t)( 0.0000540489980941085909355720007241075109 * (1 << hbShift)),
        (int32_t)(-0.0000947833751586818473982426480617391462 * (1 << hbShift)),
        (int32_t)( 0.0001567867952902222809536542103003853299 * (1 << hbShift)),
        (int32_t)(-0.0002476681450895876299839182266282477940 * (1 << hbShift)),
        (int32_t)( 0.0003767405865262860096935593201550318554 * (1 << hbShift)),
        (int32_t)(-0.0005551920408570068304551781146471967077 * (1 << hbShift)),
        (int32_t)( 0.0007962529081739059839267769191906154447 * (1 << hbShift)),
        (int32_t)(-0.0011153731476064448775026294313761354715 * (1 << hbShift)),
        (int32_t)( 0.0015304714714705458088878087252737714152 * (1 << hbShift)),
        (int32_t)(-0.0020622467141092528514212389723070373293 * (1 << hbShift)),
        (int32_t)( 0.0027347048425079849461039049884902851772 * (1 << hbShift)),
        (int32_t)(-0.0035759786171320282616159502708796935622 * (1 << hbShift)),
        (int32_t)( 0.0046196952795832949348331375460929848487 * (1 << hbShift)),
        (int32_t)(-0.0059072308383088713984454543037827534135 * (1 << hbShift)),
        (int32_t)( 0.0074914857942512255370437479484735376900 * (1 << hbShift)),
        (int32_t)(-0.0094433233524672671732602680094714742154 * (1 << hbShift)),
        (int32_t)( 0.0118628557280401076418074879370578855742 * (1 << hbShift)),
        (int32_t)(-0.0149000865720731560937206694461565348320 * (1 << hbShift)),
        (int32_t)( 0.0187949228094094408780811988890491193160 * (1 << hbShift)),
        (int32_t)(-0.0239611153097040799342387629167205886915 * (1 << hbShift)),
        (int32_t)( 0.0311823240686547251132587632582726655528 * (1 << hbShift)),
        (int32_t)(-0.0421443341867254184229807378869736567140 * (1 << hbShift)),
        (int32_t)( 0.0612443342926724393349147135268140118569 * (1 << hbShift)),
        (int32_t)(-0.1046363792986205604185201423206308390945 * (1 << hbShift)),
        (int32_t)( 0.3178181645034457436516106554336147382855 * (1 << hbShift)),
};

const double HBFIRFilterTraits<112>::hbCoeffsF[28] = {
        -0.0000057182612173497993884982611156875265,
         0.0000134089330475142792093150995169636985,
        -0.0000285019056923813186876261183133607346,
         0.0000540489980941085909355720007241075109,
        -0.0000947833751586818473982426480617391462,
         0.0001567867952902222809536542103003853299,
        -0.0002476681450895876299839182266282477940,
         0.0003767405865262860096935593201550318554,
        -0.0005551920408570068304551781146471967077,
         0.0007962529081739059839267769191906154447,
        -0.0011153731476064448775026294313761354715,
         0.0015304714714705458088878087252737714152,
        -0.0020622467141092528514212389723070373293,
         0.0027347048425079849461039049884902851772,
        -0.0035759786171320282616159502708796935622,
         0.0046196952795832949348331375460929848487,
        -0.0059072308383088713984454543037827534135,
         0.0074914857942512255370437479484735376900,
        -0.0094433233524672671732602680094714742154,
         0.0118628557280401076418074879370578855742,
        -0.0149000865720731560937206694461565348320,
         0.0187949228094094408780811988890491193160,
        -0.0239611153097040799342387629167205886915,
         0.0311823240686547251132587632582726655528,
        -0.0421443341867254184229807378869736567140,
         0.0612443342926724393349147135268140118569,
        -0.1046363792986205604185201423206308390945,
         0.3178181645034457436516106554336147382855,
};

const int16_t HBFIRFilterTraits<128>::hbMod[128+6] = {
        127,128,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,
        24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,
        47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,
        70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,
        93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,
        112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,0,1,2
};


const int32_t HBFIRFilterTraits<128>::hbCoeffs[32] = {
        //* Remez as in https://www.dsprelated.com/showcode/270.php */
        (int32_t)(-0.0000013530084481063586964138655693856705 * (1 << hbShift)), // ~1/739098 => hbShift = 20
        (int32_t)( 0.0000035468835939308468221931557040615957 * (1 << hbShift)),
        (int32_t)(-0.0000080263259193852748679242486984364291 * (1 << hbShift)),
        (int32_t)( 0.0000160249362715262112246382419922241525 * (1 << hbShift)),
        (int32_t)(-0.0000293930772937943995460653712203935584 * (1 << hbShift)),
        (int32_t)( 0.0000506245785103059592661099708177374623 * (1 << hbShift)),
        (int32_t)(-0.0000829848508757281692112955928664064231 * (1 << hbShift)),
        (int32_t)( 0.0001306421953216197048494584542766006052 * (1 << hbShift)),
        (int32_t)(-0.0001988007175677746298826653603697423023 * (1 << hbShift)),
        (int32_t)( 0.0002938302746977689504891129157471141298 * (1 << hbShift)),
        (int32_t)(-0.0004233934809845499216279796073081342911 * (1 << hbShift)),
        (int32_t)( 0.0005965709177428588560684885599982862914 * (1 << hbShift)),
        (int32_t)(-0.0008239883872841064762701512869114139903 * (1 << hbShift)),
        (int32_t)( 0.0011179618447797630680778935285957231827 * (1 << hbShift)),
        (int32_t)(-0.0014926744261021872121897313689942166093 * (1 << hbShift)),
        (int32_t)( 0.0019644262679035678388628216595179765136 * (1 << hbShift)),
        (int32_t)(-0.0025520032927806384458191413244776413194 * (1 << hbShift)),
        (int32_t)( 0.0032772538071471992750238744207536001340 * (1 << hbShift)),
        (int32_t)(-0.0041660018952565701713663948169141804101 * (1 << hbShift)),
        (int32_t)( 0.0052495120038521464814196271220225753495 * (1 << hbShift)),
        (int32_t)(-0.0065668614662222155736737150277804175857 * (1 << hbShift)),
        (int32_t)( 0.0081688408784787811672822854802689107601 * (1 << hbShift)),
        (int32_t)(-0.0101245136956070701239607245724982931279 * (1 << hbShift)),
        (int32_t)( 0.0125326183062810583845880785247572930530 * (1 << hbShift)),
        (int32_t)(-0.0155423066893098579810406079104723175988 * (1 << hbShift)),
        (int32_t)( 0.0193932322698959942741669948418348212726 * (1 << hbShift)),
        (int32_t)(-0.0244995384963461564076236953724219347350 * (1 << hbShift)),
        (int32_t)( 0.0316459368298866380864176051090908003971 * (1 << hbShift)),
        (int32_t)(-0.0425198999626832385700936356442980468273 * (1 << hbShift)),
        (int32_t)( 0.0615208850123762293615747864805598510429 * (1 << hbShift)),
        (int32_t)(-0.1048057030317238041972061068918264936656 * (1 << hbShift)),
        (int32_t)( 0.3178751792920155860855402352171950042248 * (1 << hbShift)),
};

const double HBFIRFilterTraits<128>::hbCoeffsF[32] = {
        //* Remez as in https://www.dsprelated.com/showcode/270.php */
        -0.0000013530084481063586964138655693856705, // ~1/739098 => hbShift = 20
         0.0000035468835939308468221931557040615957,
        -0.0000080263259193852748679242486984364291,
         0.0000160249362715262112246382419922241525,
        -0.0000293930772937943995460653712203935584,
         0.0000506245785103059592661099708177374623,
        -0.0000829848508757281692112955928664064231,
         0.0001306421953216197048494584542766006052,
        -0.0001988007175677746298826653603697423023,
         0.0002938302746977689504891129157471141298,
        -0.0004233934809845499216279796073081342911,
         0.0005965709177428588560684885599982862914,
        -0.0008239883872841064762701512869114139903,
         0.0011179618447797630680778935285957231827,
        -0.0014926744261021872121897313689942166093,
         0.0019644262679035678388628216595179765136,
        -0.0025520032927806384458191413244776413194,
         0.0032772538071471992750238744207536001340,
        -0.0041660018952565701713663948169141804101,
         0.0052495120038521464814196271220225753495,
        -0.0065668614662222155736737150277804175857,
         0.0081688408784787811672822854802689107601,
        -0.0101245136956070701239607245724982931279,
         0.0125326183062810583845880785247572930530,
        -0.0155423066893098579810406079104723175988,
         0.0193932322698959942741669948418348212726,
        -0.0244995384963461564076236953724219347350,
         0.0316459368298866380864176051090908003971,
        -0.0425198999626832385700936356442980468273,
         0.0615208850123762293615747864805598510429,
        -0.1048057030317238041972061068918264936656,
         0.3178751792920155860855402352171950042248,
};


