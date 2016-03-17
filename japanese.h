#ifndef _JAPANESE_H
#define _JAPANESE_H

//COPYRIGHT AND PERMISSION NOTICE
//
//Copyright (c) 1999,2000,2001 Brian Bennewitz
//
//All rights reserved.
//
//Permission is hereby granted, free of charge, to any person obtaining a
//copy of this software and associated documentation files (the
//"Software"), to deal in the Software without restriction, including
//without limitation the rights to use, copy, modify, merge, publish,
//distribute, and/or sell copies of the Software, and to permit persons
//to whom the Software is furnished to do so, provided that the above
//copyright notice(s) and this permission notice appear in all copies of
//the Software and that both the above copyright notice(s) and this
//permission notice appear in supporting documentation.
//
//THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
//OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
//MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT
//OF THIRD PARTY RIGHTS. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
//HOLDERS INCLUDED IN THIS NOTICE BE LIABLE FOR ANY CLAIM, OR ANY SPECIAL
//INDIRECT OR CONSEQUENTIAL DAMAGES, OR ANY DAMAGES WHATSOEVER RESULTING
//FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT,
//NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION
//WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
//
//Except as contained in this notice, the name of a copyright holder
//shall not be used in advertising or otherwise to promote the sale, use
//or other dealings in this Software without prior written authorization
//of the copyright holder.

#include <string>
#include <vector>

std::vector<std::string> vEucEnc(352);
std::vector<std::string> vShiftEnc(352);
std::vector<std::string> vRomajiEnc(352);

//33312
int jpfont_shift(long db)
{
	if(db == 33088)
		return 32;
	if(db == 33097)
		return 33;
	if(db == 33102)
		return 34;
	if(db == 33172)
		return 35;
	if(db == 33167)
		return 36;
	if(db == 33171)
		return 37;
	if(db == 33173)
		return 38;
	if(db == 33098)
		return 39;
	if(db == 33129)
		return 40;
	if(db == 33130)
		return 41;
	if(db == 33174)
		return 42;
	if(db == 33147)
		return 43;
	if(db == 33091)
		return 44;
	if(db == 33092)
		return 46;
	if(db == 33090)
		return 46;
	if(db == 33118)
		return 47;
	if(db == 33359)
		return 48;
	if(db == 33360)
		return 49;
	if(db == 33361)
		return 50;
	if(db == 33362)
		return 51;
	if(db == 33363)
		return 52;
	if(db == 33364)
		return 53;
	if(db == 33365)
		return 54;
	if(db == 33366)
		return 55;
	if(db == 33367)
		return 56;
	if(db == 33368)
		return 57;
	if(db == 33099)
		return 58;
	if(db == 33106)
		return 59;
	if(db == 33155)
		return 60;
	if(db == 33153)
		return 61;
	if(db == 33156)
		return 62;
	if(db == 33096)
		return 63;
	if(db == 33175)
		return 64;
	if(db == 33376)
		return 65;
	if(db == 33377)
		return 66;
	if(db == 33378)
		return 67;
	if(db == 33379)
		return 68;
	if(db == 33380)
		return 69;
	if(db == 33381)
		return 70;
	if(db == 33382)
		return 71;
	if(db == 33383)
		return 72;
	if(db == 33384)
		return 73;
	if(db == 33385)
		return 74;
	if(db == 33386)
		return 75;
	if(db == 33387)
		return 76;
	if(db == 33388)
		return 77;
	if(db == 33389)
		return 78;
	if(db == 33390)
		return 79;
	if(db == 33391)
		return 80;
	if(db == 33392)
		return 81;
	if(db == 33393)
		return 82;
	if(db == 33394)
		return 83;
	if(db == 33395)
		return 84;
	if(db == 33396)
		return 85;
	if(db == 33397)
		return 86;
	if(db == 33398)
		return 87;
	if(db == 33399)
		return 88;
	if(db == 33400)
		return 89;
	if(db == 33401)
		return 90;
	if(db == 33141)
		return 91;
	if(db == 33119)
		return 92;
	if(db == 33142)
		return 93;
	if(db == 33103)
		return 94;
	if(db == 33105)
		return 95;
	if(db == 33409)
		return 97;
	if(db == 33410)
		return 98;
	if(db == 33411)
		return 99;
	if(db == 33412)
		return 100;
	if(db == 33413)
		return 101;
	if(db == 33414)
		return 102;
	if(db == 33415)
		return 103;
	if(db == 33416)
		return 104;
	if(db == 33417)
		return 105;
	if(db == 33418)
		return 106;
	if(db == 33419)
		return 107;
	if(db == 33420)
		return 108;
	if(db == 33421)
		return 109;
	if(db == 33422)
		return 110;
	if(db == 33423)
		return 111;
	if(db == 33424)
		return 112;
	if(db == 33425)
		return 113;
	if(db == 33426)
		return 114;
	if(db == 33427)
		return 115;
	if(db == 33428)
		return 116;
	if(db == 33429)
		return 117;
	if(db == 33430)
		return 118;
	if(db == 33431)
		return 119;
	if(db == 33432)
		return 120;
	if(db == 33433)
		return 121;
	if(db == 33434)
		return 122;
	if(db == 33135)
		return 123;
	if(db == 33116)
		return 124;
	if(db == 33136)
		return 125;
	if(db == 33120)
		return 126;
	if(db == 33439)
		return 161;
	if(db == 33440)
		return 161;
	if(db == 33441)
		return 162;
	if(db == 33442)
		return 162;
	if(db == 33443)
		return 163;
	if(db == 33444)
		return 163;
	if(db == 33445)
		return 164;
	if(db == 33446)
		return 164;
	if(db == 33447)
		return 165;
	if(db == 33448)
		return 165;
	if(db == 33449)
		return 166;
	if(db == 33450)
		return 166;
	if(db == 33451)
		return 167;
	if(db == 33452)
		return 167;
	if(db == 33453)
		return 168;
	if(db == 33454)
		return 168;
	if(db == 33455)
		return 169;
	if(db == 33456)
		return 169;
	if(db == 33457)
		return 170;
	if(db == 33458)
		return 170;
	if(db == 33459)
		return 171;
	if(db == 33460)
		return 171;
	if(db == 33461)
		return 172;
	if(db == 33462)
		return 172;
	if(db == 33463)
		return 174;
	if(db == 33464)
		return 174;
	if(db == 33465)
		return 176;
	if(db == 33466)
		return 176;
	if(db == 33467)
		return 177;
	if(db == 33468)
		return 177;
	if(db == 33469)
		return 178;
	if(db == 33470)
		return 178;
	if(db == 33471)
		return 179;
	if(db == 33472)
		return 179;
	if(db == 33473)
		return 180;
	if(db == 33474)
		return 180;
	if(db == 33475)
		return 180;
	if(db == 33476)
		return 182;
	if(db == 33477)
		return 182;
	if(db == 33478)
		return 184;
	if(db == 33479)
		return 184;
	if(db == 33480)
		return 185;
	if(db == 33481)
		return 186;
	if(db == 33482)
		return 187;
	if(db == 33483)
		return 187;
	if(db == 33484)
		return 188;
	if(db == 33485)
		return 189;
	if(db == 33486)
		return 189;
	if(db == 33487)
		return 189;
	if(db == 33488)
		return 190;
	if(db == 33489)
		return 190;
	if(db == 33490)
		return 190;
	if(db == 33491)
		return 191;
	if(db == 33492)
		return 191;
	if(db == 33493)
		return 191;
	if(db == 33494)
		return 192;
	if(db == 33495)
		return 192;
	if(db == 33496)
		return 192;
	if(db == 33497)
		return 193;
	if(db == 33498)
		return 193;
	if(db == 33499)
		return 193;
	if(db == 33500)
		return 194;
	if(db == 33501)
		return 195;
	if(db == 33502)
		return 196;
	if(db == 33503)
		return 197;
	if(db == 33504)
		return 198;
	if(db == 33505)
		return 199;
	if(db == 33506)
		return 199;
	if(db == 33507)
		return 200;
	if(db == 33508)
		return 200;
	if(db == 33509)
		return 201;
	if(db == 33510)
		return 201;
	if(db == 33511)
		return 202;
	if(db == 33512)
		return 203;
	if(db == 33513)
		return 204;
	if(db == 33514)
		return 205;
	if(db == 33515)
		return 206;
	if(db == 33516)
		return 207;
	if(db == 33517)
		return 207;
	if(db == 33520)
		return 208;
	if(db == 33521)
		return 209;
	if(db == 33600)
		return 210;
	if(db == 33601)
		return 210;
	if(db == 33602)
		return 211;
	if(db == 33603)
		return 211;
	if(db == 33604)
		return 212;
	if(db == 33605)
		return 212;
	if(db == 33606)
		return 213;
	if(db == 33607)
		return 213;
	if(db == 33608)
		return 214;
	if(db == 33609)
		return 214;
	if(db == 33610)
		return 215;
	if(db == 33611)
		return 215;
	if(db == 33612)
		return 216;
	if(db == 33613)
		return 216;
	if(db == 33614)
		return 217;
	if(db == 33615)
		return 217;
	if(db == 33616)
		return 218;
	if(db == 33617)
		return 218;
	if(db == 33618)
		return 219;
	if(db == 33619)
		return 219;
	if(db == 33620)
		return 220;
	if(db == 33621)
		return 220;
	if(db == 33622)
		return 221;
	if(db == 33623)
		return 221;
	if(db == 33624)
		return 222;
	if(db == 33625)
		return 222;
	if(db == 33626)
		return 223;
	if(db == 33627)
		return 223;
	if(db == 33628)
		return 224;
	if(db == 33629)
		return 224;
	if(db == 33630)
		return 225;
	if(db == 33631)
		return 225;
	if(db == 33632)
		return 226;
	if(db == 33633)
		return 226;
	if(db == 33634)
		return 227;
	if(db == 33635)
		return 227;
	if(db == 33636)
		return 227;
	if(db == 33637)
		return 228;
	if(db == 33638)
		return 228;
	if(db == 33639)
		return 229;
	if(db == 33640)
		return 229;
	if(db == 33641)
		return 230;
	if(db == 33642)
		return 231;
	if(db == 33643)
		return 232;
	if(db == 33644)
		return 233;
	if(db == 33645)
		return 234;
	if(db == 33646)
		return 235;
	if(db == 33647)
		return 235;
	if(db == 33648)
		return 235;
	if(db == 33649)
		return 236;
	if(db == 33650)
		return 236;
	if(db == 33651)
		return 236;
	if(db == 33652)
		return 237;
	if(db == 33653)
		return 237;
	if(db == 33654)
		return 237;
	if(db == 33655)
		return 238;
	if(db == 33656)
		return 238;
	if(db == 33657)
		return 238;
	if(db == 33658)
		return 239;
	if(db == 33659)
		return 239;
	if(db == 33660)
		return 239;
	if(db == 33661)
		return 240;
	if(db == 33662)
		return 241;
	if(db == 33664)
		return 242;
	if(db == 33665)
		return 243;
	if(db == 33666)
		return 244;
	if(db == 33667)
		return 245;
	if(db == 33668)
		return 245;
	if(db == 33669)
		return 246;
	if(db == 33670)
		return 246;
	if(db == 33671)
		return 247;
	if(db == 33672)
		return 247;
	if(db == 33673)
		return 248;
	if(db == 33674)
		return 249;
	if(db == 33675)
		return 250;
	if(db == 33676)
		return 251;
	if(db == 33677)
		return 252;
	if(db == 33678)
		return 253;
	if(db == 33679)
		return 254;
	if(db == 33683)
		return 255;
	if(db <= 255)
		return  db;
	else
		return  -1;
}

int jpfont_euc(long db)
{
	if(db == 41377)
		return 32;
	if(db == 41386)
		return 33;
	if(db == 41391)
		return 34;
	if(db == 41460)
		return 35;
	if(db == 41455)
		return 36;
	if(db == 41459)
		return 37;
	if(db == 41461)
		return 38;
	if(db == 41387)
		return 39;
	if(db == 41418)
		return 40;
	if(db == 41419)
		return 41;
	if(db == 41462)
		return 42;
	if(db == 41436)
		return 43;
	if(db == 41380)
		return 44;
	if(db == 41381)
		return 46;
	if(db == 41379)
		return 46;
	if(db == 41407)
		return 47;
	if(db == 41904)
		return 48;
	if(db == 41905)
		return 49;
	if(db == 41906)
		return 50;
	if(db == 41907)
		return 51;
	if(db == 41908)
		return 52;
	if(db == 41909)
		return 53;
	if(db == 41910)
		return 54;
	if(db == 41911)
		return 55;
	if(db == 41912)
		return 56;
	if(db == 41913)
		return 57;
	if(db == 41388)
		return 58;
	if(db == 41395)
		return 59;
	if(db == 41443)
		return 60;
	if(db == 41441)
		return 61;
	if(db == 41444)
		return 62;
	if(db == 41385)
		return 63;
	if(db == 41463)
		return 64;
	if(db == 41921)
		return 65;
	if(db == 41922)
		return 66;
	if(db == 41923)
		return 67;
	if(db == 41924)
		return 68;
	if(db == 41925)
		return 69;
	if(db == 41926)
		return 70;
	if(db == 41927)
		return 71;
	if(db == 41928)
		return 72;
	if(db == 41929)
		return 73;
	if(db == 41930)
		return 74;
	if(db == 41931)
		return 75;
	if(db == 41932)
		return 76;
	if(db == 41933)
		return 77;
	if(db == 41934)
		return 78;
	if(db == 41935)
		return 79;
	if(db == 41936)
		return 80;
	if(db == 41937)
		return 81;
	if(db == 41938)
		return 82;
	if(db == 41939)
		return 83;
	if(db == 41940)
		return 84;
	if(db == 41941)
		return 85;
	if(db == 41942)
		return 86;
	if(db == 41943)
		return 87;
	if(db == 41944)
		return 88;
	if(db == 41945)
		return 89;
	if(db == 41946)
		return 90;
	if(db == 41430)
		return 91;
	if(db == 41408)
		return 92;
	if(db == 41431)
		return 93;
	if(db == 41392)
		return 94;
	if(db == 41394)
		return 95;
	if(db == 41953)
		return 97;
	if(db == 41954)
		return 98;
	if(db == 41955)
		return 99;
	if(db == 41956)
		return 100;
	if(db == 41957)
		return 101;
	if(db == 41958)
		return 102;
	if(db == 41959)
		return 103;
	if(db == 41960)
		return 104;
	if(db == 41961)
		return 105;
	if(db == 41962)
		return 106;
	if(db == 41963)
		return 107;
	if(db == 41964)
		return 108;
	if(db == 41965)
		return 109;
	if(db == 41966)
		return 110;
	if(db == 41967)
		return 111;
	if(db == 41968)
		return 112;
	if(db == 41969)
		return 113;
	if(db == 41970)
		return 114;
	if(db == 41971)
		return 115;
	if(db == 41972)
		return 116;
	if(db == 41973)
		return 117;
	if(db == 41974)
		return 118;
	if(db == 41975)
		return 119;
	if(db == 41976)
		return 120;
	if(db == 41977)
		return 121;
	if(db == 41978)
		return 122;
	if(db == 41424)
		return 123;
	if(db == 41405)
		return 124;
	if(db == 41425)
		return 125;
	if(db == 41409)
		return 126;
	if(db == 42145)
		return 161;
	if(db == 42146)
		return 161;
	if(db == 42147)
		return 162;
	if(db == 42148)
		return 162;
	if(db == 42149)
		return 163;
	if(db == 42150)
		return 163;
	if(db == 42151)
		return 164;
	if(db == 42152)
		return 164;
	if(db == 42153)
		return 165;
	if(db == 42154)
		return 165;
	if(db == 42155)
		return 166;
	if(db == 42156)
		return 166;
	if(db == 42157)
		return 167;
	if(db == 42158)
		return 167;
	if(db == 42159)
		return 168;
	if(db == 42160)
		return 168;
	if(db == 42161)
		return 169;
	if(db == 42162)
		return 169;
	if(db == 42163)
		return 170;
	if(db == 42164)
		return 170;
	if(db == 42165)
		return 171;
	if(db == 42166)
		return 171;
	if(db == 42167)
		return 172;
	if(db == 42168)
		return 172;
	if(db == 42169)
		return 174;
	if(db == 42170)
		return 174;
	if(db == 42171)
		return 176;
	if(db == 42172)
		return 176;
	if(db == 42173)
		return 177;
	if(db == 42174)
		return 177;
	if(db == 42175)
		return 178;
	if(db == 42176)
		return 178;
	if(db == 42177)
		return 179;
	if(db == 42178)
		return 179;
	if(db == 42179)
		return 180;
	if(db == 42180)
		return 180;
	if(db == 42181)
		return 180;
	if(db == 42182)
		return 182;
	if(db == 42183)
		return 182;
	if(db == 42184)
		return 184;
	if(db == 42185)
		return 184;
	if(db == 42186)
		return 185;
	if(db == 42187)
		return 186;
	if(db == 42188)
		return 187;
	if(db == 42189)
		return 187;
	if(db == 42190)
		return 188;
	if(db == 42191)
		return 189;
	if(db == 42192)
		return 189;
	if(db == 42193)
		return 189;
	if(db == 42194)
		return 190;
	if(db == 42195)
		return 190;
	if(db == 42196)
		return 190;
	if(db == 42197)
		return 191;
	if(db == 42198)
		return 191;
	if(db == 42199)
		return 191;
	if(db == 42200)
		return 192;
	if(db == 42201)
		return 192;
	if(db == 42202)
		return 192;
	if(db == 42203)
		return 193;
	if(db == 42204)
		return 193;
	if(db == 42205)
		return 193;
	if(db == 42206)
		return 194;
	if(db == 42207)
		return 195;
	if(db == 42208)
		return 196;
	if(db == 42209)
		return 197;
	if(db == 42210)
		return 198;
	if(db == 42211)
		return 199;
	if(db == 42212)
		return 199;
	if(db == 42213)
		return 200;
	if(db == 42214)
		return 200;
	if(db == 42215)
		return 201;
	if(db == 42216)
		return 201;
	if(db == 42217)
		return 202;
	if(db == 42218)
		return 203;
	if(db == 42219)
		return 204;
	if(db == 42220)
		return 205;
	if(db == 42221)
		return 206;
	if(db == 42222)
		return 207;
	if(db == 42223)
		return 207;
	if(db == 42226)
		return 208;
	if(db == 42227)
		return 209;
	if(db == 42401)
		return 210;
	if(db == 42402)
		return 210;
	if(db == 42403)
		return 211;
	if(db == 42404)
		return 211;
	if(db == 42405)
		return 212;
	if(db == 42406)
		return 212;
	if(db == 42407)
		return 213;
	if(db == 42408)
		return 213;
	if(db == 42409)
		return 214;
	if(db == 42410)
		return 214;
	if(db == 42411)
		return 215;
	if(db == 42412)
		return 215;
	if(db == 42413)
		return 216;
	if(db == 42414)
		return 216;
	if(db == 42415)
		return 217;
	if(db == 42416)
		return 217;
	if(db == 42417)
		return 218;
	if(db == 42418)
		return 218;
	if(db == 42419)
		return 219;
	if(db == 42420)
		return 219;
	if(db == 42421)
		return 220;
	if(db == 42422)
		return 220;
	if(db == 42423)
		return 221;
	if(db == 42424)
		return 221;
	if(db == 42425)
		return 222;
	if(db == 42426)
		return 222;
	if(db == 42427)
		return 223;
	if(db == 42428)
		return 223;
	if(db == 42429)
		return 224;
	if(db == 42430)
		return 224;
	if(db == 42431)
		return 225;
	if(db == 42432)
		return 225;
	if(db == 42433)
		return 226;
	if(db == 42434)
		return 226;
	if(db == 42435)
		return 227;
	if(db == 42436)
		return 227;
	if(db == 42437)
		return 227;
	if(db == 42438)
		return 228;
	if(db == 42439)
		return 228;
	if(db == 42440)
		return 229;
	if(db == 42441)
		return 229;
	if(db == 42442)
		return 230;
	if(db == 42443)
		return 231;
	if(db == 42444)
		return 232;
	if(db == 42445)
		return 233;
	if(db == 42446)
		return 234;
	if(db == 42447)
		return 235;
	if(db == 42448)
		return 235;
	if(db == 42449)
		return 235;
	if(db == 42450)
		return 236;
	if(db == 42451)
		return 236;
	if(db == 42452)
		return 236;
	if(db == 42453)
		return 237;
	if(db == 42454)
		return 237;
	if(db == 42455)
		return 237;
	if(db == 42456)
		return 238;
	if(db == 42457)
		return 238;
	if(db == 42458)
		return 238;
	if(db == 42459)
		return 239;
	if(db == 42460)
		return 239;
	if(db == 42461)
		return 239;
	if(db == 42462)
		return 240;
	if(db == 42463)
		return 241;
	if(db == 42464)
		return 242;
	if(db == 42465)
		return 243;
	if(db == 42466)
		return 244;
	if(db == 42467)
		return 245;
	if(db == 42468)
		return 245;
	if(db == 42469)
		return 246;
	if(db == 42470)
		return 246;
	if(db == 42471)
		return 247;
	if(db == 42472)
		return 247;
	if(db == 42473)
		return 248;
	if(db == 42474)
		return 249;
	if(db == 42475)
		return 250;
	if(db == 42476)
		return 251;
	if(db == 42477)
		return 252;
	if(db == 42478)
		return 253;
	if(db == 42479)
		return 254;
	if(db == 42483)
		return 255;
	if(db <= 255)
		return  db;
	else
		return  -1;
}

void LoadEncoding()
{
	vShiftEnc[0] = "��";
	vShiftEnc[1] = "��";
	vShiftEnc[2] = "��";
	vShiftEnc[3] = "��";
	vShiftEnc[4] = "��";
	vShiftEnc[5] = "��";
	vShiftEnc[6] = "��";
	vShiftEnc[7] = "��";
	vShiftEnc[8] = "��";
	vShiftEnc[9] = "��";
	vShiftEnc[10] = "��";
	vShiftEnc[11] = "��";
	vShiftEnc[12] = "��";
	vShiftEnc[13] = "��";
	vShiftEnc[14] = "��";
	vShiftEnc[15] = "��";
	vShiftEnc[16] = "��";
	vShiftEnc[17] = "��";
	vShiftEnc[18] = "��";
	vShiftEnc[19] = "��";
	vShiftEnc[20] = "��";
	vShiftEnc[21] = "��";
	vShiftEnc[22] = "��";
	vShiftEnc[23] = "��";
	vShiftEnc[24] = "��";
	vShiftEnc[25] = "��";
	vShiftEnc[26] = "��";
	vShiftEnc[27] = "��";
	vShiftEnc[28] = "��";
	vShiftEnc[29] = "��";
	vShiftEnc[30] = "��";
	vShiftEnc[31] = "��";
	vShiftEnc[32] = "��";
	vShiftEnc[33] = "��";
	vShiftEnc[34] = "��";
	vShiftEnc[35] = "��";
	vShiftEnc[36] = "��";
	vShiftEnc[37] = "��";
	vShiftEnc[38] = "��";
	vShiftEnc[39] = "��";
	vShiftEnc[40] = "��";
	vShiftEnc[41] = "��";
	vShiftEnc[42] = "��";
	vShiftEnc[43] = "��";
	vShiftEnc[44] = "��";
	vShiftEnc[45] = "��";
	vShiftEnc[46] = "��";
	vShiftEnc[47] = "��";
	vShiftEnc[48] = "��";
	vShiftEnc[49] = "��";
	vShiftEnc[50] = "��";
	vShiftEnc[51] = "��";
	vShiftEnc[52] = "��";
	vShiftEnc[53] = "��";
	vShiftEnc[54] = "��";
	vShiftEnc[55] = "��";
	vShiftEnc[56] = "��";
	vShiftEnc[57] = "��";
	vShiftEnc[58] = "��";
	vShiftEnc[59] = "��";
	vShiftEnc[60] = "��";
	vShiftEnc[61] = "��";
	vShiftEnc[62] = "��";
	vShiftEnc[63] = "��";
	vShiftEnc[64] = "��";
	vShiftEnc[65] = "��";
	vShiftEnc[66] = "��";
	vShiftEnc[67] = "��";
	vShiftEnc[68] = "��";
	vShiftEnc[69] = "��";
	vShiftEnc[70] = "��";
	vShiftEnc[71] = "��";
	vShiftEnc[72] = "���@";
	vShiftEnc[73] = "���B";
	vShiftEnc[74] = "��";
	vShiftEnc[75] = "���F";
	vShiftEnc[76] = "���H";
	vShiftEnc[77] = "��";
	vShiftEnc[78] = "��";
	vShiftEnc[79] = "��";
	vShiftEnc[80] = "��";
	vShiftEnc[81] = "��";
	vShiftEnc[82] = "��";
	vShiftEnc[83] = "��";
	vShiftEnc[84] = "��";
	vShiftEnc[85] = "��";
	vShiftEnc[86] = "��";
	vShiftEnc[87] = "��";
	vShiftEnc[88] = "��";
	vShiftEnc[89] = "��";
	vShiftEnc[90] = "����";
	vShiftEnc[91] = "����";
	vShiftEnc[92] = "����";
	vShiftEnc[93] = "����";
	vShiftEnc[94] = "����";
	vShiftEnc[95] = "����";
	vShiftEnc[96] = "����";
	vShiftEnc[97] = "����";
	vShiftEnc[98] = "����";
	vShiftEnc[99] = "����";
	vShiftEnc[100] = "����";
	vShiftEnc[101] = "����";
	vShiftEnc[102] = "�ɂ�";
	vShiftEnc[103] = "�ɂ�";
	vShiftEnc[104] = "�ɂ�";
	vShiftEnc[105] = "�ɂ�";
	vShiftEnc[106] = "�Ђ�";
	vShiftEnc[107] = "�Ђ�";
	vShiftEnc[108] = "�Ђ�";
	vShiftEnc[109] = "�Ђ�";
	vShiftEnc[110] = "�݂�";
	vShiftEnc[111] = "�݂�";
	vShiftEnc[112] = "�݂�";
	vShiftEnc[113] = "�݂�";
	vShiftEnc[114] = "���";
	vShiftEnc[115] = "���";
	vShiftEnc[116] = "�肥";
	vShiftEnc[117] = "���";
	vShiftEnc[118] = "����";
	vShiftEnc[119] = "����";
	vShiftEnc[120] = "����";
	vShiftEnc[121] = "����";
	vShiftEnc[122] = "����";
	vShiftEnc[123] = "����";
	vShiftEnc[124] = "����";
	vShiftEnc[125] = "����";
	vShiftEnc[126] = "����";
	vShiftEnc[127] = "����";
	vShiftEnc[128] = "����";
	vShiftEnc[129] = "����";
	vShiftEnc[130] = "�т�";
	vShiftEnc[131] = "�т�";
	vShiftEnc[132] = "�т�";
	vShiftEnc[133] = "�т�";
	vShiftEnc[134] = "�҂�";
	vShiftEnc[135] = "�҂�";
	vShiftEnc[136] = "�҂�";
	vShiftEnc[137] = "�҂�";
	vShiftEnc[138] = "��";
	vShiftEnc[139] = "��";
	vShiftEnc[140] = "��";
	vShiftEnc[141] = "��";
	vShiftEnc[142] = "����";
	vShiftEnc[143] = "�ł�";
	vShiftEnc[144] = "�A";
	vShiftEnc[145] = "�C";
	vShiftEnc[146] = "�E";
	vShiftEnc[147] = "�G";
	vShiftEnc[148] = "�I";
	vShiftEnc[149] = "�J";
	vShiftEnc[150] = "�L";
	vShiftEnc[151] = "�N";
	vShiftEnc[152] = "�P";
	vShiftEnc[153] = "�R";
	vShiftEnc[154] = "�T";
	vShiftEnc[155] = "�V";
	vShiftEnc[156] = "�X";
	vShiftEnc[157] = "�Z";
	vShiftEnc[158] = "�\\";
	vShiftEnc[159] = "�^";
	vShiftEnc[160] = "�`";
	vShiftEnc[161] = "�c";
	vShiftEnc[162] = "�e";
	vShiftEnc[163] = "�g";
	vShiftEnc[164] = "�i";
	vShiftEnc[165] = "�j";
	vShiftEnc[166] = "�k";
	vShiftEnc[167] = "�l";
	vShiftEnc[168] = "�m";
	vShiftEnc[169] = "�n";
	vShiftEnc[170] = "�q";
	vShiftEnc[171] = "�t";
	vShiftEnc[172] = "�w";
	vShiftEnc[173] = "�z";
	vShiftEnc[174] = "�}";
	vShiftEnc[175] = "�~";
	vShiftEnc[176] = "��";
	vShiftEnc[177] = "��";
	vShiftEnc[178] = "��";
	vShiftEnc[179] = "��";
	vShiftEnc[180] = "��";
	vShiftEnc[181] = "��";
	vShiftEnc[182] = "��";
	vShiftEnc[183] = "��";
	vShiftEnc[184] = "��";
	vShiftEnc[185] = "��";
	vShiftEnc[186] = "��";
	vShiftEnc[187] = "��";
	vShiftEnc[188] = "��";
	vShiftEnc[189] = "��";
	vShiftEnc[190] = "��";
	vShiftEnc[191] = "��";
	vShiftEnc[192] = "��";
	vShiftEnc[193] = "��";
	vShiftEnc[194] = "��";
	vShiftEnc[195] = "��";
	vShiftEnc[196] = "��";
	vShiftEnc[197] = "��";
	vShiftEnc[198] = "��";
	vShiftEnc[199] = "�@";
	vShiftEnc[200] = "�B";
	vShiftEnc[201] = "�D";
	vShiftEnc[202] = "�F";
	vShiftEnc[203] = "�H";
	vShiftEnc[204] = "��";
	vShiftEnc[205] = "��";
	vShiftEnc[206] = "��";
	vShiftEnc[207] = "�b";
	vShiftEnc[208] = "�`";
	vShiftEnc[209] = "�a";
	vShiftEnc[210] = "�b";
	vShiftEnc[211] = "�c";
	vShiftEnc[212] = "�d";
	vShiftEnc[213] = "�e";
	vShiftEnc[214] = "�f";
	vShiftEnc[215] = "�g";
	vShiftEnc[216] = "�h";
	vShiftEnc[217] = "�i";
	vShiftEnc[218] = "�j";
	vShiftEnc[219] = "�k";
	vShiftEnc[220] = "�l";
	vShiftEnc[221] = "�m";
	vShiftEnc[222] = "�n";
	vShiftEnc[223] = "�o";
	vShiftEnc[224] = "�p";
	vShiftEnc[225] = "�q";
	vShiftEnc[226] = "�r";
	vShiftEnc[227] = "�s";
	vShiftEnc[228] = "�t";
	vShiftEnc[229] = "�u";
	vShiftEnc[230] = "�v";
	vShiftEnc[231] = "�w";
	vShiftEnc[232] = "�x";
	vShiftEnc[233] = "�y";
	vShiftEnc[234] = "��";
	vShiftEnc[235] = "��";
	vShiftEnc[236] = "��";
	vShiftEnc[237] = "��";
	vShiftEnc[238] = "��";
	vShiftEnc[239] = "��";
	vShiftEnc[240] = "��";
	vShiftEnc[241] = "��";
	vShiftEnc[242] = "��";
	vShiftEnc[243] = "��";
	vShiftEnc[244] = "��";
	vShiftEnc[245] = "��";
	vShiftEnc[246] = "��";
	vShiftEnc[247] = "��";
	vShiftEnc[248] = "��";
	vShiftEnc[249] = "��";
	vShiftEnc[250] = "��";
	vShiftEnc[251] = "��";
	vShiftEnc[252] = "��";
	vShiftEnc[253] = "��";
	vShiftEnc[254] = "��";
	vShiftEnc[255] = "��";
	vShiftEnc[256] = "��";
	vShiftEnc[257] = "��";
	vShiftEnc[258] = "��";
	vShiftEnc[259] = "��";
	vShiftEnc[260] = "�P";
	vShiftEnc[261] = "�Q";
	vShiftEnc[262] = "�R";
	vShiftEnc[263] = "�S";
	vShiftEnc[264] = "�T";
	vShiftEnc[265] = "�U";
	vShiftEnc[266] = "�V";
	vShiftEnc[267] = "�W";
	vShiftEnc[268] = "�X";
	vShiftEnc[269] = "�O";
	vShiftEnc[270] = "��";
	vShiftEnc[271] = "�@";
	vShiftEnc[272] = "�_";
	vShiftEnc[273] = "�B";
	vShiftEnc[274] = "�C";
	vShiftEnc[275] = "�D";
	vShiftEnc[276] = "�}";
	vShiftEnc[277] = "�E";
	vShiftEnc[278] = "�I";
	vShiftEnc[279] = "�G";
	vShiftEnc[280] = "�H";
	vShiftEnc[281] = "�L";
	vShiftEnc[282] = "�J";
	vShiftEnc[283] = "�\\";
	vShiftEnc[284] = "��";
	vShiftEnc[285] = "��";
	vShiftEnc[286] = "�z";
	vShiftEnc[287] = "�|";
	vShiftEnc[288] = "��";
	vShiftEnc[289] = "�{";
	vShiftEnc[290] = "�Y";
	vShiftEnc[291] = "�Z";
	vShiftEnc[292] = "�A";
	vShiftEnc[293] = "�[";
	vShiftEnc[294] = "�]";
	vShiftEnc[295] = "�K";
	vShiftEnc[296] = "�M";
	vShiftEnc[297] = "�N";
	vShiftEnc[298] = "�^";
	vShiftEnc[299] = "�@";
	vShiftEnc[300] = "�A";
	vShiftEnc[301] = "�B";
	vShiftEnc[302] = "�C";
	vShiftEnc[303] = "�D";
	vShiftEnc[304] = "�E";
	vShiftEnc[305] = "�F";
	vShiftEnc[306] = "�G";
	vShiftEnc[307] = "�H";
	vShiftEnc[308] = "�I";
	vShiftEnc[309] = "�J";
	vShiftEnc[310] = "�K";
	vShiftEnc[311] = "�L";
	vShiftEnc[312] = "�M";
	vShiftEnc[313] = "�N";
	vShiftEnc[314] = "�O";
	vShiftEnc[315] = "�P";
	vShiftEnc[316] = "�Q";
	vShiftEnc[317] = "�R";
	vShiftEnc[318] = "�S";
	vShiftEnc[319] = "�T";
	vShiftEnc[320] = "�U";
	vShiftEnc[321] = "�V";
	vShiftEnc[322] = "�W";
	vShiftEnc[323] = "�X";
	vShiftEnc[324] = "�Y";
	vShiftEnc[325] = "�^";
	vShiftEnc[326] = "�_";
	vShiftEnc[327] = "�`";
	vShiftEnc[328] = "�e";
	vShiftEnc[329] = "�f";
	vShiftEnc[330] = "�g";
	vShiftEnc[331] = "�h";
	vShiftEnc[332] = "�i";
	vShiftEnc[333] = "�j";
	vShiftEnc[334] = "�m";
	vShiftEnc[335] = "�n";
	vShiftEnc[336] = "�o";
	vShiftEnc[337] = "�p";
	vShiftEnc[338] = "�u";
	vShiftEnc[339] = "�v";
	vShiftEnc[340] = "�w";
	vShiftEnc[341] = "�x";
	vShiftEnc[342] = "��";
	vShiftEnc[343] = "��";
	vShiftEnc[344] = "��";
	vShiftEnc[345] = "��";
	vShiftEnc[346] = "��";
	vShiftEnc[347] = "��";
	vShiftEnc[348] = "��";
	vShiftEnc[349] = "��";
	vShiftEnc[350] = "��";
	vShiftEnc[351] = "��";
	vEucEnc[0] = "��";
	vEucEnc[1] = "��";
	vEucEnc[2] = "��";
	vEucEnc[3] = "��";
	vEucEnc[4] = "��";
	vEucEnc[5] = "��";
	vEucEnc[6] = "��";
	vEucEnc[7] = "��";
	vEucEnc[8] = "��";
	vEucEnc[9] = "��";
	vEucEnc[10] = "��";
	vEucEnc[11] = "��";
	vEucEnc[12] = "��";
	vEucEnc[13] = "��";
	vEucEnc[14] = "��";
	vEucEnc[15] = "��";
	vEucEnc[16] = "��";
	vEucEnc[17] = "��";
	vEucEnc[18] = "��";
	vEucEnc[19] = "��";
	vEucEnc[20] = "��";
	vEucEnc[21] = "��";
	vEucEnc[22] = "��";
	vEucEnc[23] = "��";
	vEucEnc[24] = "��";
	vEucEnc[25] = "��";
	vEucEnc[26] = "��";
	vEucEnc[27] = "��";
	vEucEnc[28] = "��";
	vEucEnc[29] = "��";
	vEucEnc[30] = "��";
	vEucEnc[31] = "��";
	vEucEnc[32] = "��";
	vEucEnc[33] = "��";
	vEucEnc[34] = "��";
	vEucEnc[35] = "��";
	vEucEnc[36] = "��";
	vEucEnc[37] = "��";
	vEucEnc[38] = "��";
	vEucEnc[39] = "��";
	vEucEnc[40] = "��";
	vEucEnc[41] = "��";
	vEucEnc[42] = "��";
	vEucEnc[43] = "��";
	vEucEnc[44] = "��";
	vEucEnc[45] = "��";
	vEucEnc[46] = "��";
	vEucEnc[47] = "��";
	vEucEnc[48] = "��";
	vEucEnc[49] = "��";
	vEucEnc[50] = "��";
	vEucEnc[51] = "��";
	vEucEnc[52] = "��";
	vEucEnc[53] = "��";
	vEucEnc[54] = "��";
	vEucEnc[55] = "��";
	vEucEnc[56] = "��";
	vEucEnc[57] = "��";
	vEucEnc[58] = "��";
	vEucEnc[59] = "��";
	vEucEnc[60] = "��";
	vEucEnc[61] = "��";
	vEucEnc[62] = "��";
	vEucEnc[63] = "��";
	vEucEnc[64] = "��";
	vEucEnc[65] = "��";
	vEucEnc[66] = "��";
	vEucEnc[67] = "��";
	vEucEnc[68] = "��";
	vEucEnc[69] = "��";
	vEucEnc[70] = "��";
	vEucEnc[71] = "��";
	vEucEnc[72] = "����";
	vEucEnc[73] = "����";
	vEucEnc[74] = "��";
	vEucEnc[75] = "����";
	vEucEnc[76] = "����";
	vEucEnc[77] = "��";
	vEucEnc[78] = "��";
	vEucEnc[79] = "��";
	vEucEnc[80] = "��";
	vEucEnc[81] = "��";
	vEucEnc[82] = "��";
	vEucEnc[83] = "��";
	vEucEnc[84] = "��";
	vEucEnc[85] = "��";
	vEucEnc[86] = "��";
	vEucEnc[87] = "��";
	vEucEnc[88] = "��";
	vEucEnc[89] = "��";
	vEucEnc[90] = "����";
	vEucEnc[91] = "����";
	vEucEnc[92] = "����";
	vEucEnc[93] = "����";
	vEucEnc[94] = "����";
	vEucEnc[95] = "����";
	vEucEnc[96] = "����";
	vEucEnc[97] = "����";
	vEucEnc[98] = "����";
	vEucEnc[99] = "����";
	vEucEnc[100] = "����";
	vEucEnc[101] = "����";
	vEucEnc[102] = "�ˤ�";
	vEucEnc[103] = "�ˤ�";
	vEucEnc[104] = "�ˤ�";
	vEucEnc[105] = "�ˤ�";
	vEucEnc[106] = "�Ҥ�";
	vEucEnc[107] = "�Ҥ�";
	vEucEnc[108] = "�Ҥ�";
	vEucEnc[109] = "�Ҥ�";
	vEucEnc[110] = "�ߤ�";
	vEucEnc[111] = "�ߤ�";
	vEucEnc[112] = "�ߤ�";
	vEucEnc[113] = "�ߤ�";
	vEucEnc[114] = "���";
	vEucEnc[115] = "���";
	vEucEnc[116] = "�ꤧ";
	vEucEnc[117] = "���";
	vEucEnc[118] = "����";
	vEucEnc[119] = "����";
	vEucEnc[120] = "����";
	vEucEnc[121] = "����";
	vEucEnc[122] = "����";
	vEucEnc[123] = "����";
	vEucEnc[124] = "����";
	vEucEnc[125] = "����";
	vEucEnc[126] = "�¤�";
	vEucEnc[127] = "�¤�";
	vEucEnc[128] = "�¤�";
	vEucEnc[129] = "�¤�";
	vEucEnc[130] = "�Ӥ�";
	vEucEnc[131] = "�Ӥ�";
	vEucEnc[132] = "�Ӥ�";
	vEucEnc[133] = "�Ӥ�";
	vEucEnc[134] = "�Ԥ�";
	vEucEnc[135] = "�Ԥ�";
	vEucEnc[136] = "�Ԥ�";
	vEucEnc[137] = "�Ԥ�";
	vEucEnc[138] = "�Ĥ�";
	vEucEnc[139] = "�Ĥ�";
	vEucEnc[140] = "�Ĥ�";
	vEucEnc[141] = "�Ĥ�";
	vEucEnc[142] = "����";
	vEucEnc[143] = "�Ǥ�";
	vEucEnc[144] = "��";
	vEucEnc[145] = "��";
	vEucEnc[146] = "��";
	vEucEnc[147] = "��";
	vEucEnc[148] = "��";
	vEucEnc[149] = "��";
	vEucEnc[150] = "��";
	vEucEnc[151] = "��";
	vEucEnc[152] = "��";
	vEucEnc[153] = "��";
	vEucEnc[154] = "��";
	vEucEnc[155] = "��";
	vEucEnc[156] = "��";
	vEucEnc[157] = "��";
	vEucEnc[158] = "��";
	vEucEnc[159] = "��";
	vEucEnc[160] = "��";
	vEucEnc[161] = "��";
	vEucEnc[162] = "��";
	vEucEnc[163] = "��";
	vEucEnc[164] = "��";
	vEucEnc[165] = "��";
	vEucEnc[166] = "��";
	vEucEnc[167] = "��";
	vEucEnc[168] = "��";
	vEucEnc[169] = "��";
	vEucEnc[170] = "��";
	vEucEnc[171] = "��";
	vEucEnc[172] = "��";
	vEucEnc[173] = "��";
	vEucEnc[174] = "��";
	vEucEnc[175] = "��";
	vEucEnc[176] = "��";
	vEucEnc[177] = "��";
	vEucEnc[178] = "��";
	vEucEnc[179] = "��";
	vEucEnc[180] = "��";
	vEucEnc[181] = "��";
	vEucEnc[182] = "��";
	vEucEnc[183] = "��";
	vEucEnc[184] = "��";
	vEucEnc[185] = "��";
	vEucEnc[186] = "��";
	vEucEnc[187] = "��";
	vEucEnc[188] = "��";
	vEucEnc[189] = "��";
	vEucEnc[190] = "��";
	vEucEnc[191] = "��";
	vEucEnc[192] = "��";
	vEucEnc[193] = "��";
	vEucEnc[194] = "��";
	vEucEnc[195] = "��";
	vEucEnc[196] = "��";
	vEucEnc[197] = "��";
	vEucEnc[198] = "��";
	vEucEnc[199] = "��";
	vEucEnc[200] = "��";
	vEucEnc[201] = "��";
	vEucEnc[202] = "��";
	vEucEnc[203] = "��";
	vEucEnc[204] = "��";
	vEucEnc[205] = "��";
	vEucEnc[206] = "��";
	vEucEnc[207] = "��";
	vEucEnc[208] = "��";
	vEucEnc[209] = "��";
	vEucEnc[210] = "��";
	vEucEnc[211] = "��";
	vEucEnc[212] = "��";
	vEucEnc[213] = "��";
	vEucEnc[214] = "��";
	vEucEnc[215] = "��";
	vEucEnc[216] = "��";
	vEucEnc[217] = "��";
	vEucEnc[218] = "��";
	vEucEnc[219] = "��";
	vEucEnc[220] = "��";
	vEucEnc[221] = "��";
	vEucEnc[222] = "��";
	vEucEnc[223] = "��";
	vEucEnc[224] = "��";
	vEucEnc[225] = "��";
	vEucEnc[226] = "��";
	vEucEnc[227] = "��";
	vEucEnc[228] = "��";
	vEucEnc[229] = "��";
	vEucEnc[230] = "��";
	vEucEnc[231] = "��";
	vEucEnc[232] = "��";
	vEucEnc[233] = "��";
	vEucEnc[234] = "��";
	vEucEnc[235] = "��";
	vEucEnc[236] = "��";
	vEucEnc[237] = "��";
	vEucEnc[238] = "��";
	vEucEnc[239] = "��";
	vEucEnc[240] = "��";
	vEucEnc[241] = "��";
	vEucEnc[242] = "��";
	vEucEnc[243] = "��";
	vEucEnc[244] = "��";
	vEucEnc[245] = "��";
	vEucEnc[246] = "��";
	vEucEnc[247] = "��";
	vEucEnc[248] = "��";
	vEucEnc[249] = "��";
	vEucEnc[250] = "��";
	vEucEnc[251] = "��";
	vEucEnc[252] = "��";
	vEucEnc[253] = "��";
	vEucEnc[254] = "��";
	vEucEnc[255] = "��";
	vEucEnc[256] = "��";
	vEucEnc[257] = "��";
	vEucEnc[258] = "��";
	vEucEnc[259] = "��";
	vEucEnc[260] = "��";
	vEucEnc[261] = "��";
	vEucEnc[262] = "��";
	vEucEnc[263] = "��";
	vEucEnc[264] = "��";
	vEucEnc[265] = "��";
	vEucEnc[266] = "��";
	vEucEnc[267] = "��";
	vEucEnc[268] = "��";
	vEucEnc[269] = "��";
	vEucEnc[270] = "��";
	vEucEnc[271] = "��";
	vEucEnc[272] = "��";
	vEucEnc[273] = "��";
	vEucEnc[274] = "��";
	vEucEnc[275] = "��";
	vEucEnc[276] = "��";
	vEucEnc[277] = "��";
	vEucEnc[278] = "��";
	vEucEnc[279] = "��";
	vEucEnc[280] = "��";
	vEucEnc[281] = "��";
	vEucEnc[282] = "��";
	vEucEnc[283] = "��";
	vEucEnc[284] = "��";
	vEucEnc[285] = "��";
	vEucEnc[286] = "��";
	vEucEnc[287] = "��";
	vEucEnc[288] = "��";
	vEucEnc[289] = "��";
	vEucEnc[290] = "��";
	vEucEnc[291] = "��";
	vEucEnc[292] = "��";
	vEucEnc[293] = "��";
	vEucEnc[294] = "��";
	vEucEnc[295] = "��";
	vEucEnc[296] = "��";
	vEucEnc[297] = "��";
	vEucEnc[298] = "��";
	vEucEnc[299] = "��";
	vEucEnc[300] = "��";
	vEucEnc[301] = "��";
	vEucEnc[302] = "��";
	vEucEnc[303] = "��";
	vEucEnc[304] = "��";
	vEucEnc[305] = "��";
	vEucEnc[306] = "��";
	vEucEnc[307] = "��";
	vEucEnc[308] = "��";
	vEucEnc[309] = "��";
	vEucEnc[310] = "��";
	vEucEnc[311] = "��";
	vEucEnc[312] = "��";
	vEucEnc[313] = "��";
	vEucEnc[314] = "��";
	vEucEnc[315] = "��";
	vEucEnc[316] = "��";
	vEucEnc[317] = "��";
	vEucEnc[318] = "��";
	vEucEnc[319] = "��";
	vEucEnc[320] = "��";
	vEucEnc[321] = "��";
	vEucEnc[322] = "��";
	vEucEnc[323] = "��";
	vEucEnc[324] = "��";
	vEucEnc[325] = "��";
	vEucEnc[326] = "��";
	vEucEnc[327] = "��";
	vEucEnc[328] = "��";
	vEucEnc[329] = "��";
	vEucEnc[330] = "��";
	vEucEnc[331] = "��";
	vEucEnc[332] = "��";
	vEucEnc[333] = "��";
	vEucEnc[334] = "��";
	vEucEnc[335] = "��";
	vEucEnc[336] = "��";
	vEucEnc[337] = "��";
	vEucEnc[338] = "��";
	vEucEnc[339] = "��";
	vEucEnc[340] = "��";
	vEucEnc[341] = "��";
	vEucEnc[342] = "��";
	vEucEnc[343] = "��";
	vEucEnc[344] = "��";
	vEucEnc[345] = "��";
	vEucEnc[346] = "��";
	vEucEnc[347] = "��";
	vEucEnc[348] = "��";
	vEucEnc[349] = "��";
	vEucEnc[350] = "��";
	vEucEnc[351] = "��";
	vRomajiEnc[0] = "a";
	vRomajiEnc[1] = "i";
	vRomajiEnc[2] = "u";
	vRomajiEnc[3] = "e";
	vRomajiEnc[4] = "o";
	vRomajiEnc[5] = "ka";
	vRomajiEnc[6] = "ki";
	vRomajiEnc[7] = "ku";
	vRomajiEnc[8] = "ke";
	vRomajiEnc[9] = "ko";
	vRomajiEnc[10] = "sa";
	vRomajiEnc[11] = "si";
	vRomajiEnc[12] = "su";
	vRomajiEnc[13] = "se";
	vRomajiEnc[14] = "so";
	vRomajiEnc[15] = "ta";
	vRomajiEnc[16] = "ti";
	vRomajiEnc[17] = "tu";
	vRomajiEnc[18] = "te";
	vRomajiEnc[19] = "to";
	vRomajiEnc[20] = "na";
	vRomajiEnc[21] = "ni";
	vRomajiEnc[22] = "nu";
	vRomajiEnc[23] = "ne";
	vRomajiEnc[24] = "no";
	vRomajiEnc[25] = "ha";
	vRomajiEnc[26] = "hi";
	vRomajiEnc[27] = "hu";
	vRomajiEnc[28] = "he";
	vRomajiEnc[29] = "ho";
	vRomajiEnc[30] = "ma";
	vRomajiEnc[31] = "mi";
	vRomajiEnc[32] = "mu";
	vRomajiEnc[33] = "me";
	vRomajiEnc[34] = "mo";
	vRomajiEnc[35] = "ya";
	vRomajiEnc[36] = "yu";
	vRomajiEnc[37] = "yo";
	vRomajiEnc[38] = "ra";
	vRomajiEnc[39] = "ri";
	vRomajiEnc[40] = "ru";
	vRomajiEnc[41] = "re";
	vRomajiEnc[42] = "ro";
	vRomajiEnc[43] = "wa";
	vRomajiEnc[44] = "wi";
	vRomajiEnc[45] = "we";
	vRomajiEnc[46] = "wo";
	vRomajiEnc[47] = "ga";
	vRomajiEnc[48] = "gi";
	vRomajiEnc[49] = "gu";
	vRomajiEnc[50] = "ge";
	vRomajiEnc[51] = "go";
	vRomajiEnc[52] = "za";
	vRomajiEnc[53] = "ji";
	vRomajiEnc[54] = "zu";
	vRomajiEnc[55] = "ze";
	vRomajiEnc[56] = "zo";
	vRomajiEnc[57] = "da";
	vRomajiEnc[58] = "dji";
	vRomajiEnc[59] = "du";
	vRomajiEnc[60] = "de";
	vRomajiEnc[61] = "do";
	vRomajiEnc[62] = "ba";
	vRomajiEnc[63] = "bi";
	vRomajiEnc[64] = "bu";
	vRomajiEnc[65] = "be";
	vRomajiEnc[66] = "bo";
	vRomajiEnc[67] = "pa";
	vRomajiEnc[68] = "pi";
	vRomajiEnc[69] = "pu";
	vRomajiEnc[70] = "pe";
	vRomajiEnc[71] = "po";
	vRomajiEnc[72] = "va";
	vRomajiEnc[73] = "vi";
	vRomajiEnc[74] = "vu";
	vRomajiEnc[75] = "ve";
	vRomajiEnc[76] = "vo";
	vRomajiEnc[77] = "xa";
	vRomajiEnc[78] = "xi";
	vRomajiEnc[79] = "xu";
	vRomajiEnc[80] = "xe";
	vRomajiEnc[81] = "xo";
	vRomajiEnc[82] = "xka";
	vRomajiEnc[83] = "xke";
	vRomajiEnc[84] = "xya";
	vRomajiEnc[85] = "xyu";
	vRomajiEnc[86] = "xyo";
	vRomajiEnc[87] = "n";
	vRomajiEnc[88] = "tt";
	vRomajiEnc[89] = "xwa";
	vRomajiEnc[90] = "kya";
	vRomajiEnc[91] = "kyu";
	vRomajiEnc[92] = "kye";
	vRomajiEnc[93] = "kyo";
	vRomajiEnc[94] = "sha";
	vRomajiEnc[95] = "shu";
	vRomajiEnc[96] = "she";
	vRomajiEnc[97] = "sho";
	vRomajiEnc[98] = "cha";
	vRomajiEnc[99] = "chu";
	vRomajiEnc[100] = "che";
	vRomajiEnc[101] = "cho";
	vRomajiEnc[102] = "nya";
	vRomajiEnc[103] = "nyu";
	vRomajiEnc[104] = "nye";
	vRomajiEnc[105] = "nyo";
	vRomajiEnc[106] = "hya";
	vRomajiEnc[107] = "hyu";
	vRomajiEnc[108] = "hye";
	vRomajiEnc[109] = "hyo";
	vRomajiEnc[110] = "mya";
	vRomajiEnc[111] = "myu";
	vRomajiEnc[112] = "mye";
	vRomajiEnc[113] = "myo";
	vRomajiEnc[114] = "rya";
	vRomajiEnc[115] = "ryu";
	vRomajiEnc[116] = "rye";
	vRomajiEnc[117] = "ryo";
	vRomajiEnc[118] = "gya";
	vRomajiEnc[119] = "gyu";
	vRomajiEnc[120] = "gye";
	vRomajiEnc[121] = "gyo";
	vRomajiEnc[122] = "ja";
	vRomajiEnc[123] = "ju";
	vRomajiEnc[124] = "je";
	vRomajiEnc[125] = "jo";
	vRomajiEnc[126] = "dja";
	vRomajiEnc[127] = "dju";
	vRomajiEnc[128] = "dje";
	vRomajiEnc[129] = "djo";
	vRomajiEnc[130] = "bya";
	vRomajiEnc[131] = "byu";
	vRomajiEnc[132] = "bye";
	vRomajiEnc[133] = "byo";
	vRomajiEnc[134] = "pya";
	vRomajiEnc[135] = "pyu";
	vRomajiEnc[136] = "pye";
	vRomajiEnc[137] = "pyo";
	vRomajiEnc[138] = "tsa";
	vRomajiEnc[139] = "tsi";
	vRomajiEnc[140] = "tse";
	vRomajiEnc[141] = "tso";
	vRomajiEnc[142] = "zi";
	vRomajiEnc[143] = "di";
	vRomajiEnc[144] = "<a>";
	vRomajiEnc[145] = "<i>";
	vRomajiEnc[146] = "<u>";
	vRomajiEnc[147] = "<e>";
	vRomajiEnc[148] = "<o>";
	vRomajiEnc[149] = "<ka>";
	vRomajiEnc[150] = "<ki>";
	vRomajiEnc[151] = "<ku>";
	vRomajiEnc[152] = "<ke>";
	vRomajiEnc[153] = "<ko>";
	vRomajiEnc[154] = "<sa>";
	vRomajiEnc[155] = "<si>";
	vRomajiEnc[156] = "<su>";
	vRomajiEnc[157] = "<se>";
	vRomajiEnc[158] = "<so>";
	vRomajiEnc[159] = "<ta>";
	vRomajiEnc[160] = "<ti>";
	vRomajiEnc[161] = "<tu>";
	vRomajiEnc[162] = "<te>";
	vRomajiEnc[163] = "<to>";
	vRomajiEnc[164] = "<na>";
	vRomajiEnc[165] = "<ni>";
	vRomajiEnc[166] = "<nu>";
	vRomajiEnc[167] = "<ne>";
	vRomajiEnc[168] = "<no>";
	vRomajiEnc[169] = "<ha>";
	vRomajiEnc[170] = "<hi>";
	vRomajiEnc[171] = "<hu>";
	vRomajiEnc[172] = "<he>";
	vRomajiEnc[173] = "<ho>";
	vRomajiEnc[174] = "<ma>";
	vRomajiEnc[175] = "<mi>";
	vRomajiEnc[176] = "<mu>";
	vRomajiEnc[177] = "<me>";
	vRomajiEnc[178] = "<mo>";
	vRomajiEnc[179] = "<ya>";
	vRomajiEnc[180] = "<yu>";
	vRomajiEnc[181] = "<yo>";
	vRomajiEnc[182] = "<ra>";
	vRomajiEnc[183] = "<ri>";
	vRomajiEnc[184] = "<ru>";
	vRomajiEnc[185] = "<re>";
	vRomajiEnc[186] = "<ro>";
	vRomajiEnc[187] = "<wa>";
	vRomajiEnc[188] = "<wo>";
	vRomajiEnc[189] = "<n>";
	vRomajiEnc[190] = "<<a>>";
	vRomajiEnc[191] = "<<i>>";
	vRomajiEnc[192] = "<<u>>";
	vRomajiEnc[193] = "<<e>>";
	vRomajiEnc[194] = "<<o>>";
	vRomajiEnc[195] = "<<ya>>";
	vRomajiEnc[196] = "<<yu>>";
	vRomajiEnc[197] = "<<yo>>";
	vRomajiEnc[198] = "<<tsu>>";
	vRomajiEnc[199] = "<<<a>>>";
	vRomajiEnc[200] = "<<<i>>>";
	vRomajiEnc[201] = "<<<u>>>";
	vRomajiEnc[202] = "<<<e>>>";
	vRomajiEnc[203] = "<<<o>>>";
	vRomajiEnc[204] = "<<<ya>>>";
	vRomajiEnc[205] = "<<<yu>>>";
	vRomajiEnc[206] = "<<<yo>>>";
	vRomajiEnc[207] = "<<<tsu>>>";
	vRomajiEnc[208] = "<A>";
	vRomajiEnc[209] = "<B>";
	vRomajiEnc[210] = "<C>";
	vRomajiEnc[211] = "<D>";
	vRomajiEnc[212] = "<E>";
	vRomajiEnc[213] = "<F>";
	vRomajiEnc[214] = "<G>";
	vRomajiEnc[215] = "<H>";
	vRomajiEnc[216] = "<I>";
	vRomajiEnc[217] = "<J>";
	vRomajiEnc[218] = "<K>";
	vRomajiEnc[219] = "<L>";
	vRomajiEnc[220] = "<M>";
	vRomajiEnc[221] = "<N>";
	vRomajiEnc[222] = "<O>";
	vRomajiEnc[223] = "<P>";
	vRomajiEnc[224] = "<Q>";
	vRomajiEnc[225] = "<R>";
	vRomajiEnc[226] = "<S>";
	vRomajiEnc[227] = "<T>";
	vRomajiEnc[228] = "<U>";
	vRomajiEnc[229] = "<V>";
	vRomajiEnc[230] = "<W>";
	vRomajiEnc[231] = "<X>";
	vRomajiEnc[232] = "<Y>";
	vRomajiEnc[233] = "<Z>";
	vRomajiEnc[234] = "<a>";
	vRomajiEnc[235] = "<b>";
	vRomajiEnc[236] = "<c>";
	vRomajiEnc[237] = "<d>";
	vRomajiEnc[238] = "<e>";
	vRomajiEnc[239] = "<f>";
	vRomajiEnc[240] = "<g>";
	vRomajiEnc[241] = "<h>";
	vRomajiEnc[242] = "<i>";
	vRomajiEnc[243] = "<j>";
	vRomajiEnc[244] = "<k>";
	vRomajiEnc[245] = "<l>";
	vRomajiEnc[246] = "<m>";
	vRomajiEnc[247] = "<n>";
	vRomajiEnc[248] = "<o>";
	vRomajiEnc[249] = "<p>";
	vRomajiEnc[250] = "<q>";
	vRomajiEnc[251] = "<r>";
	vRomajiEnc[252] = "<s>";
	vRomajiEnc[253] = "<t>";
	vRomajiEnc[254] = "<u>";
	vRomajiEnc[255] = "<v>";
	vRomajiEnc[256] = "<w>";
	vRomajiEnc[257] = "<x>";
	vRomajiEnc[258] = "<y>";
	vRomajiEnc[259] = "<z>";
	vRomajiEnc[260] = "<1>";
	vRomajiEnc[261] = "<2>";
	vRomajiEnc[262] = "<3>";
	vRomajiEnc[263] = "<4>";
	vRomajiEnc[264] = "<5>";
	vRomajiEnc[265] = "<6>";
	vRomajiEnc[266] = "<7>";
	vRomajiEnc[267] = "<8>";
	vRomajiEnc[268] = "<9>";
	vRomajiEnc[269] = "<0>";
	vRomajiEnc[270] = "<~>";
	vRomajiEnc[271] = "<!>";
	vRomajiEnc[272] = "<@>";
	vRomajiEnc[273] = "<#>";
	vRomajiEnc[274] = "<$>";
	vRomajiEnc[275] = "<%>";
	vRomajiEnc[276] = "<^>";
	vRomajiEnc[277] = "<&>";
	vRomajiEnc[278] = "<*>";
	vRomajiEnc[279] = "<(>";
	vRomajiEnc[280] = "<)>";
	vRomajiEnc[281] = "<->";
	vRomajiEnc[282] = "<+>";
	vRomajiEnc[283] = "<=>";
	vRomajiEnc[284] = "<{>";
	vRomajiEnc[285] = "<}>";
	vRomajiEnc[286] = "<[>";
	vRomajiEnc[287] = "<]>";
	vRomajiEnc[288] = "<|>";
	vRomajiEnc[289] = "<\\>";
	vRomajiEnc[290] = "<:>";
	vRomajiEnc[291] = "<;>";
	vRomajiEnc[292] = "<\">";
	vRomajiEnc[293] = "<<>";
	vRomajiEnc[294] = "<>>";
	vRomajiEnc[295] = "<,>";
	vRomajiEnc[296] = "<.>";
	vRomajiEnc[297] = "</>";
	vRomajiEnc[298] = "<?>";
	vRomajiEnc[299] = " ";
	vRomajiEnc[300] = "�A";
	vRomajiEnc[301] = "�B";
	vRomajiEnc[302] = ",";
	vRomajiEnc[303] = ".";
	vRomajiEnc[304] = "�E";
	vRomajiEnc[305] = ":";
	vRomajiEnc[306] = ";";
	vRomajiEnc[307] = "?";
	vRomajiEnc[308] = "!";
	vRomajiEnc[309] = "�J";
	vRomajiEnc[310] = "�K";
	vRomajiEnc[311] = "�L";
	vRomajiEnc[312] = "�M";
	vRomajiEnc[313] = "�N";
	vRomajiEnc[314] = "^";
	vRomajiEnc[315] = "�P";
	vRomajiEnc[316] = "�Q";
	vRomajiEnc[317] = "�R";
	vRomajiEnc[318] = "�S";
	vRomajiEnc[319] = "�T";
	vRomajiEnc[320] = "�U";
	vRomajiEnc[321] = "�V";
	vRomajiEnc[322] = "�W";
	vRomajiEnc[323] = "�X";
	vRomajiEnc[324] = "�Y";
	vRomajiEnc[325] = "/";
	vRomajiEnc[326] = "\\";
	vRomajiEnc[327] = "~";
	vRomajiEnc[328] = "�e";
	vRomajiEnc[329] = "�f";
	vRomajiEnc[330] = "�g";
	vRomajiEnc[331] = "�h";
	vRomajiEnc[332] = "(";
	vRomajiEnc[333] = ")";
	vRomajiEnc[334] = "[";
	vRomajiEnc[335] = "]";
	vRomajiEnc[336] = "{";
	vRomajiEnc[337] = "}";
	vRomajiEnc[338] = "�u";
	vRomajiEnc[339] = "�v";
	vRomajiEnc[340] = "�w";
	vRomajiEnc[341] = "�x";
	vRomajiEnc[342] = "��";
	vRomajiEnc[343] = "��";
	vRomajiEnc[344] = "��";
	vRomajiEnc[345] = "��";
	vRomajiEnc[346] = "$";
	vRomajiEnc[347] = "%";
	vRomajiEnc[348] = "$";
	vRomajiEnc[349] = "&";
	vRomajiEnc[350] = "*";
	vRomajiEnc[351] = "@";
}

#endif