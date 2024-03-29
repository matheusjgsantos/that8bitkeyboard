#ifndef HOTBIT_H
#define HOTBIT_H

#include "quantum.h"

#define LAYOUT( \
      K000, K001, K002, K003, K004, K005, K006, K007,\
      K100, K101, K102, K103, K104, K105, K106, K107,\
      K200, K201, K202, K203, K204, K205, K206, K207,\
      K300, K301, K302, K303, K304, K305, K306, K307,\
      K400, K401, K402, K403, K404, K405, K406, K407,\
      K500, K501, K502, K503, K504, K505, K506, K507,\
      K600, K601, K602, K603, K604, K605, K606, K607,\
      K700, K701, K702, K703, K704, K705, K706, K707,\
      K800, K801, K802, K803, K804, K805, K806, K807,\
      K900, K901, K902, K903, K904, K905, K906, K907\
) \
{ \
    { K000, K001, K002, K003, K004, K005, K006, K007 },\
    { K100, K101, K102, K103, K104, K105, K106, K107 },\
    { K200, K201, K202, K203, K204, K205, K206, K207 },\
    { K300, K301, K302, K303, K304, K305, K306, K307 },\
    { K400, K401, K402, K403, K404, K405, K406, K407 },\
    { K500, K501, K502, K503, K504, K505, K506, K507 },\
    { K600, K601, K602, K603, K604, K605, K606, K607 },\
    { K700, K701, K702, K703, K704, K705, K706, K707 },\
    { K800, K801, K802, K803, K804, K805, K806, K807 },\
    { K900, K901, K902, K903, K904, K905, K906, K907 }\
}

#endif
