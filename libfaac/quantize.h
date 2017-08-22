/****************************************************************************
    Quantizer core functions
    quality setting, error distribution, etc.

    Copyright (C) 2017 Krzysztof Nikiel

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
****************************************************************************/

#ifndef QUANTIZE_H
#define QUANTIZE_H

#include "aacquant.h"

int BlocQuant(CoderInfo *coderInfo, double *xr, int *xi, AACQuantCfg *aacquantCfg);
void BandLimit(unsigned *bw, int rate, SR_INFO *sr, AACQuantCfg *aacquantCfg);

#endif
