
#line 1 "../../src/hb-ot-shape-complex-indic-machine.rl"
/*
 * Copyright © 2011,2012  Google, Inc.
 *
 *  This is part of HarfBuzz, a text shaping library.
 *
 * Permission is hereby granted, without written agreement and without
 * license or royalty fees, to use, copy, modify, and distribute this
 * software and its documentation for any purpose, provided that the
 * above copyright notice and the following two paragraphs appear in
 * all copies of this software.
 *
 * IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
 * ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN
 * IF THE COPYRIGHT HOLDER HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 *
 * THE COPYRIGHT HOLDER SPECIFICALLY DISCLAIMS ANY WARRANTIES, INCLUDING,
 * BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE COPYRIGHT HOLDER HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
 *
 * Google Author(s): Behdad Esfahbod
 */

#ifndef HB_OT_SHAPE_COMPLEX_INDIC_MACHINE_HH
#define HB_OT_SHAPE_COMPLEX_INDIC_MACHINE_HH

#include "hb-private.hh"


#line 36 "hb-ot-shape-complex-indic-machine.hh.tmp"
static const unsigned char _indic_syllable_machine_trans_keys[] = {
	1u, 16u, 13u, 13u, 4u, 14u, 5u, 7u, 7u, 7u, 5u, 7u, 5u, 7u, 7u, 7u, 
	5u, 7u, 5u, 7u, 7u, 7u, 5u, 7u, 5u, 7u, 7u, 7u, 4u, 4u, 6u, 6u, 
	16u, 16u, 4u, 7u, 6u, 6u, 16u, 16u, 4u, 7u, 6u, 6u, 16u, 16u, 4u, 7u, 
	6u, 6u, 16u, 16u, 4u, 14u, 4u, 14u, 4u, 14u, 4u, 14u, 4u, 14u, 4u, 14u, 
	4u, 14u, 4u, 14u, 4u, 14u, 1u, 16u, 13u, 13u, 4u, 14u, 5u, 7u, 7u, 7u, 
	5u, 7u, 5u, 7u, 7u, 7u, 5u, 7u, 5u, 7u, 7u, 7u, 5u, 7u, 5u, 7u, 
	7u, 7u, 4u, 4u, 6u, 6u, 16u, 16u, 4u, 7u, 6u, 6u, 16u, 16u, 4u, 7u, 
	6u, 6u, 16u, 16u, 4u, 7u, 6u, 6u, 16u, 16u, 4u, 14u, 4u, 14u, 4u, 14u, 
	4u, 14u, 4u, 14u, 4u, 14u, 4u, 14u, 4u, 14u, 4u, 14u, 1u, 16u, 13u, 13u, 
	4u, 14u, 5u, 7u, 7u, 7u, 5u, 7u, 5u, 7u, 7u, 7u, 5u, 7u, 5u, 7u, 
	7u, 7u, 5u, 7u, 5u, 7u, 7u, 7u, 4u, 4u, 6u, 6u, 16u, 16u, 4u, 7u, 
	6u, 6u, 16u, 16u, 4u, 7u, 6u, 6u, 16u, 16u, 4u, 7u, 6u, 6u, 16u, 16u, 
	4u, 14u, 4u, 14u, 4u, 14u, 4u, 14u, 4u, 14u, 4u, 14u, 4u, 14u, 4u, 14u, 
	4u, 14u, 1u, 16u, 3u, 14u, 3u, 14u, 4u, 14u, 1u, 16u, 3u, 14u, 3u, 14u, 
	4u, 14u, 1u, 16u, 3u, 14u, 3u, 14u, 4u, 14u, 1u, 16u, 3u, 14u, 3u, 14u, 
	4u, 14u, 1u, 16u, 3u, 14u, 3u, 14u, 4u, 14u, 5u, 14u, 8u, 14u, 5u, 14u, 
	9u, 14u, 9u, 9u, 3u, 13u, 3u, 9u, 9u, 9u, 3u, 9u, 6u, 14u, 3u, 14u, 
	4u, 14u, 5u, 14u, 3u, 14u, 4u, 14u, 5u, 14u, 3u, 14u, 4u, 14u, 5u, 14u, 
	3u, 14u, 4u, 14u, 4u, 14u, 1u, 16u, 3u, 14u, 1u, 16u, 1u, 16u, 1u, 16u, 
	3u, 14u, 1u, 16u, 1u, 16u, 1u, 16u, 3u, 14u, 1u, 16u, 1u, 16u, 1u, 16u, 
	3u, 14u, 1u, 16u, 1u, 16u, 1u, 16u, 3u, 14u, 3u, 14u, 3u, 14u, 4u, 14u, 
	1u, 16u, 3u, 14u, 3u, 14u, 4u, 14u, 1u, 16u, 3u, 14u, 3u, 14u, 4u, 14u, 
	1u, 16u, 3u, 14u, 3u, 14u, 4u, 14u, 1u, 16u, 3u, 14u, 3u, 14u, 4u, 14u, 
	5u, 14u, 8u, 14u, 5u, 14u, 9u, 14u, 9u, 9u, 3u, 13u, 3u, 9u, 9u, 9u, 
	3u, 9u, 6u, 14u, 3u, 14u, 4u, 14u, 5u, 14u, 3u, 14u, 4u, 14u, 5u, 14u, 
	3u, 14u, 4u, 14u, 5u, 14u, 3u, 14u, 4u, 14u, 1u, 16u, 3u, 14u, 1u, 16u, 
	1u, 16u, 1u, 16u, 3u, 14u, 1u, 16u, 1u, 16u, 1u, 16u, 3u, 14u, 1u, 16u, 
	1u, 16u, 1u, 16u, 3u, 14u, 1u, 16u, 1u, 16u, 4u, 14u, 1u, 16u, 3u, 14u, 
	3u, 14u, 3u, 14u, 4u, 14u, 1u, 16u, 3u, 14u, 3u, 14u, 4u, 14u, 1u, 16u, 
	3u, 14u, 3u, 14u, 4u, 14u, 1u, 16u, 3u, 14u, 3u, 14u, 4u, 14u, 1u, 16u, 
	3u, 14u, 3u, 14u, 4u, 14u, 5u, 14u, 8u, 14u, 5u, 14u, 9u, 14u, 9u, 9u, 
	3u, 13u, 3u, 9u, 9u, 9u, 3u, 9u, 6u, 14u, 3u, 14u, 4u, 14u, 5u, 14u, 
	3u, 14u, 4u, 14u, 5u, 14u, 3u, 14u, 4u, 14u, 5u, 14u, 3u, 14u, 4u, 14u, 
	1u, 16u, 3u, 14u, 1u, 16u, 1u, 16u, 1u, 16u, 3u, 14u, 1u, 16u, 1u, 16u, 
	1u, 16u, 3u, 14u, 1u, 16u, 1u, 16u, 1u, 16u, 3u, 14u, 1u, 16u, 1u, 16u, 
	1u, 16u, 3u, 14u, 1u, 16u, 3u, 14u, 1u, 16u, 0
};

static const char _indic_syllable_machine_key_spans[] = {
	16, 1, 11, 3, 1, 3, 3, 1, 
	3, 3, 1, 3, 3, 1, 1, 1, 
	1, 4, 1, 1, 4, 1, 1, 4, 
	1, 1, 11, 11, 11, 11, 11, 11, 
	11, 11, 11, 16, 1, 11, 3, 1, 
	3, 3, 1, 3, 3, 1, 3, 3, 
	1, 1, 1, 1, 4, 1, 1, 4, 
	1, 1, 4, 1, 1, 11, 11, 11, 
	11, 11, 11, 11, 11, 11, 16, 1, 
	11, 3, 1, 3, 3, 1, 3, 3, 
	1, 3, 3, 1, 1, 1, 1, 4, 
	1, 1, 4, 1, 1, 4, 1, 1, 
	11, 11, 11, 11, 11, 11, 11, 11, 
	11, 16, 12, 12, 11, 16, 12, 12, 
	11, 16, 12, 12, 11, 16, 12, 12, 
	11, 16, 12, 12, 11, 10, 7, 10, 
	6, 1, 11, 7, 1, 7, 9, 12, 
	11, 10, 12, 11, 10, 12, 11, 10, 
	12, 11, 11, 16, 12, 16, 16, 16, 
	12, 16, 16, 16, 12, 16, 16, 16, 
	12, 16, 16, 16, 12, 12, 12, 11, 
	16, 12, 12, 11, 16, 12, 12, 11, 
	16, 12, 12, 11, 16, 12, 12, 11, 
	10, 7, 10, 6, 1, 11, 7, 1, 
	7, 9, 12, 11, 10, 12, 11, 10, 
	12, 11, 10, 12, 11, 16, 12, 16, 
	16, 16, 12, 16, 16, 16, 12, 16, 
	16, 16, 12, 16, 16, 11, 16, 12, 
	12, 12, 11, 16, 12, 12, 11, 16, 
	12, 12, 11, 16, 12, 12, 11, 16, 
	12, 12, 11, 10, 7, 10, 6, 1, 
	11, 7, 1, 7, 9, 12, 11, 10, 
	12, 11, 10, 12, 11, 10, 12, 11, 
	16, 12, 16, 16, 16, 12, 16, 16, 
	16, 12, 16, 16, 16, 12, 16, 16, 
	16, 12, 16, 12, 16
};

static const short _indic_syllable_machine_index_offsets[] = {
	0, 17, 19, 31, 35, 37, 41, 45, 
	47, 51, 55, 57, 61, 65, 67, 69, 
	71, 73, 78, 80, 82, 87, 89, 91, 
	96, 98, 100, 112, 124, 136, 148, 160, 
	172, 184, 196, 208, 225, 227, 239, 243, 
	245, 249, 253, 255, 259, 263, 265, 269, 
	273, 275, 277, 279, 281, 286, 288, 290, 
	295, 297, 299, 304, 306, 308, 320, 332, 
	344, 356, 368, 380, 392, 404, 416, 433, 
	435, 447, 451, 453, 457, 461, 463, 467, 
	471, 473, 477, 481, 483, 485, 487, 489, 
	494, 496, 498, 503, 505, 507, 512, 514, 
	516, 528, 540, 552, 564, 576, 588, 600, 
	612, 624, 641, 654, 667, 679, 696, 709, 
	722, 734, 751, 764, 777, 789, 806, 819, 
	832, 844, 861, 874, 887, 899, 910, 918, 
	929, 936, 938, 950, 958, 960, 968, 978, 
	991, 1003, 1014, 1027, 1039, 1050, 1063, 1075, 
	1086, 1099, 1111, 1123, 1140, 1153, 1170, 1187, 
	1204, 1217, 1234, 1251, 1268, 1281, 1298, 1315, 
	1332, 1345, 1362, 1379, 1396, 1409, 1422, 1435, 
	1447, 1464, 1477, 1490, 1502, 1519, 1532, 1545, 
	1557, 1574, 1587, 1600, 1612, 1629, 1642, 1655, 
	1667, 1678, 1686, 1697, 1704, 1706, 1718, 1726, 
	1728, 1736, 1746, 1759, 1771, 1782, 1795, 1807, 
	1818, 1831, 1843, 1854, 1867, 1879, 1896, 1909, 
	1926, 1943, 1960, 1973, 1990, 2007, 2024, 2037, 
	2054, 2071, 2088, 2101, 2118, 2135, 2147, 2164, 
	2177, 2190, 2203, 2215, 2232, 2245, 2258, 2270, 
	2287, 2300, 2313, 2325, 2342, 2355, 2368, 2380, 
	2397, 2410, 2423, 2435, 2446, 2454, 2465, 2472, 
	2474, 2486, 2494, 2496, 2504, 2514, 2527, 2539, 
	2550, 2563, 2575, 2586, 2599, 2611, 2622, 2635, 
	2647, 2664, 2677, 2694, 2711, 2728, 2741, 2758, 
	2775, 2792, 2805, 2822, 2839, 2856, 2869, 2886, 
	2903, 2920, 2933, 2950, 2963
};

static const short _indic_syllable_machine_indicies[] = {
	1, 2, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 1, 
	0, 3, 0, 4, 5, 5, 6, 0, 
	0, 0, 0, 0, 0, 4, 0, 7, 
	7, 6, 0, 6, 0, 8, 8, 9, 
	0, 10, 10, 9, 0, 9, 0, 11, 
	11, 12, 0, 13, 13, 12, 0, 12, 
	0, 14, 14, 15, 0, 16, 16, 15, 
	0, 15, 0, 17, 0, 18, 0, 19, 
	0, 20, 14, 14, 15, 0, 21, 0, 
	22, 0, 23, 11, 11, 12, 0, 24, 
	0, 25, 0, 26, 8, 8, 9, 0, 
	27, 0, 28, 0, 4, 5, 5, 6, 
	0, 0, 0, 0, 0, 29, 4, 0, 
	30, 5, 5, 6, 0, 0, 0, 0, 
	0, 0, 30, 0, 30, 5, 5, 6, 
	0, 0, 0, 0, 0, 31, 30, 0, 
	32, 5, 5, 6, 0, 0, 0, 0, 
	0, 0, 32, 0, 32, 5, 5, 6, 
	0, 0, 0, 0, 0, 33, 32, 0, 
	34, 5, 5, 6, 0, 0, 0, 0, 
	0, 0, 34, 0, 34, 5, 5, 6, 
	0, 0, 0, 0, 0, 35, 34, 0, 
	36, 5, 5, 6, 0, 0, 0, 0, 
	0, 0, 36, 0, 36, 5, 5, 6, 
	0, 0, 0, 0, 0, 37, 36, 0, 
	39, 40, 38, 38, 38, 38, 38, 38, 
	38, 38, 38, 38, 38, 38, 38, 39, 
	38, 41, 38, 42, 43, 43, 44, 38, 
	38, 38, 38, 38, 38, 42, 38, 45, 
	45, 44, 38, 44, 38, 46, 46, 47, 
	38, 48, 48, 47, 38, 47, 38, 49, 
	49, 50, 38, 51, 51, 50, 38, 50, 
	38, 52, 52, 53, 38, 54, 54, 53, 
	38, 53, 38, 55, 38, 56, 38, 57, 
	38, 58, 52, 52, 53, 38, 59, 38, 
	60, 38, 61, 49, 49, 50, 38, 62, 
	38, 63, 38, 64, 46, 46, 47, 38, 
	65, 38, 66, 38, 42, 43, 43, 44, 
	38, 38, 38, 38, 38, 67, 42, 38, 
	68, 43, 43, 44, 38, 38, 38, 38, 
	38, 38, 68, 38, 68, 43, 43, 44, 
	38, 38, 38, 38, 38, 69, 68, 38, 
	70, 43, 43, 44, 38, 38, 38, 38, 
	38, 38, 70, 38, 70, 43, 43, 44, 
	38, 38, 38, 38, 38, 71, 70, 38, 
	72, 43, 43, 44, 38, 38, 38, 38, 
	38, 38, 72, 38, 72, 43, 43, 44, 
	38, 38, 38, 38, 38, 73, 72, 38, 
	74, 43, 43, 44, 38, 38, 38, 38, 
	38, 38, 74, 38, 74, 43, 43, 44, 
	38, 38, 38, 38, 38, 75, 74, 38, 
	77, 78, 76, 76, 76, 76, 76, 76, 
	76, 76, 76, 76, 76, 76, 76, 77, 
	76, 79, 76, 80, 81, 81, 82, 76, 
	76, 76, 76, 76, 76, 80, 76, 83, 
	83, 82, 76, 82, 76, 84, 84, 85, 
	76, 86, 86, 85, 76, 85, 76, 87, 
	87, 88, 76, 89, 89, 88, 76, 88, 
	76, 90, 90, 91, 76, 92, 92, 91, 
	76, 91, 76, 93, 76, 94, 76, 95, 
	76, 96, 90, 90, 91, 76, 97, 76, 
	98, 76, 99, 87, 87, 88, 76, 100, 
	76, 101, 76, 102, 84, 84, 85, 76, 
	103, 76, 104, 76, 80, 81, 81, 82, 
	76, 76, 76, 76, 76, 105, 80, 76, 
	106, 81, 81, 82, 76, 76, 76, 76, 
	76, 76, 106, 76, 106, 81, 81, 82, 
	76, 76, 76, 76, 76, 107, 106, 76, 
	108, 81, 81, 82, 76, 76, 76, 76, 
	76, 76, 108, 76, 108, 81, 81, 82, 
	76, 76, 76, 76, 76, 109, 108, 76, 
	110, 81, 81, 82, 76, 76, 76, 76, 
	76, 76, 110, 76, 110, 81, 81, 82, 
	76, 76, 76, 76, 76, 111, 110, 76, 
	112, 81, 81, 82, 76, 76, 76, 76, 
	76, 76, 112, 76, 112, 81, 81, 82, 
	76, 76, 76, 76, 76, 113, 112, 76, 
	115, 116, 114, 114, 114, 114, 114, 114, 
	114, 114, 117, 117, 114, 114, 118, 119, 
	114, 121, 122, 123, 124, 6, 125, 126, 
	127, 120, 120, 37, 128, 120, 129, 122, 
	124, 124, 6, 125, 126, 127, 120, 120, 
	120, 128, 120, 122, 124, 124, 6, 125, 
	126, 127, 120, 120, 120, 128, 120, 130, 
	120, 120, 120, 19, 131, 120, 125, 126, 
	120, 120, 120, 120, 132, 120, 130, 120, 
	133, 134, 135, 136, 6, 125, 126, 127, 
	120, 120, 35, 137, 120, 138, 134, 136, 
	136, 6, 125, 126, 127, 120, 120, 120, 
	137, 120, 134, 136, 136, 6, 125, 126, 
	127, 120, 120, 120, 137, 120, 139, 120, 
	120, 120, 19, 140, 120, 125, 126, 120, 
	120, 120, 120, 132, 120, 139, 120, 141, 
	142, 143, 144, 6, 125, 126, 127, 120, 
	120, 33, 145, 120, 146, 142, 144, 144, 
	6, 125, 126, 127, 120, 120, 120, 145, 
	120, 142, 144, 144, 6, 125, 126, 127, 
	120, 120, 120, 145, 120, 147, 120, 120, 
	120, 19, 148, 120, 125, 126, 120, 120, 
	120, 120, 132, 120, 147, 120, 149, 150, 
	151, 152, 6, 125, 126, 127, 120, 120, 
	31, 153, 120, 154, 150, 152, 152, 6, 
	125, 126, 127, 120, 120, 120, 153, 120, 
	150, 152, 152, 6, 125, 126, 127, 120, 
	120, 120, 153, 120, 155, 120, 120, 120, 
	19, 156, 120, 125, 126, 120, 120, 120, 
	120, 132, 120, 155, 120, 157, 158, 159, 
	160, 6, 125, 126, 127, 120, 120, 29, 
	161, 120, 162, 158, 160, 160, 6, 125, 
	126, 127, 120, 120, 120, 161, 120, 158, 
	160, 160, 6, 125, 126, 127, 120, 120, 
	120, 161, 120, 19, 19, 120, 125, 126, 
	120, 120, 120, 120, 132, 120, 125, 126, 
	120, 120, 120, 120, 132, 120, 163, 120, 
	120, 120, 126, 120, 120, 120, 120, 132, 
	120, 126, 120, 120, 120, 120, 132, 120, 
	164, 120, 165, 120, 166, 120, 120, 120, 
	126, 120, 120, 120, 3, 120, 2, 120, 
	120, 120, 120, 120, 126, 120, 126, 120, 
	165, 120, 120, 120, 120, 120, 126, 120, 
	19, 120, 125, 126, 120, 120, 120, 120, 
	132, 120, 167, 28, 168, 169, 9, 125, 
	126, 120, 120, 120, 120, 132, 120, 28, 
	168, 169, 9, 125, 126, 120, 120, 120, 
	120, 132, 120, 168, 168, 9, 125, 126, 
	120, 120, 120, 120, 132, 120, 170, 25, 
	171, 172, 12, 125, 126, 120, 120, 120, 
	120, 132, 120, 25, 171, 172, 12, 125, 
	126, 120, 120, 120, 120, 132, 120, 171, 
	171, 12, 125, 126, 120, 120, 120, 120, 
	132, 120, 173, 22, 174, 175, 15, 125, 
	126, 120, 120, 120, 120, 132, 120, 22, 
	174, 175, 15, 125, 126, 120, 120, 120, 
	120, 132, 120, 174, 174, 15, 125, 126, 
	120, 120, 120, 120, 132, 120, 176, 19, 
	120, 177, 120, 125, 126, 120, 120, 120, 
	120, 132, 120, 19, 120, 177, 120, 125, 
	126, 120, 120, 120, 120, 132, 120, 158, 
	160, 160, 6, 125, 126, 120, 120, 120, 
	120, 161, 120, 1, 2, 120, 120, 19, 
	19, 120, 125, 126, 120, 120, 120, 120, 
	132, 120, 1, 120, 157, 158, 160, 160, 
	6, 125, 126, 127, 120, 120, 120, 161, 
	120, 155, 120, 120, 120, 120, 120, 120, 
	125, 126, 120, 120, 120, 120, 132, 120, 
	155, 120, 155, 120, 120, 120, 120, 156, 
	120, 125, 126, 120, 120, 120, 120, 132, 
	120, 155, 120, 155, 2, 120, 120, 19, 
	156, 120, 125, 126, 120, 120, 120, 120, 
	132, 120, 155, 120, 149, 150, 152, 152, 
	6, 125, 126, 127, 120, 120, 120, 153, 
	120, 147, 120, 120, 120, 120, 120, 120, 
	125, 126, 120, 120, 120, 120, 132, 120, 
	147, 120, 147, 120, 120, 120, 120, 148, 
	120, 125, 126, 120, 120, 120, 120, 132, 
	120, 147, 120, 147, 2, 120, 120, 19, 
	148, 120, 125, 126, 120, 120, 120, 120, 
	132, 120, 147, 120, 141, 142, 144, 144, 
	6, 125, 126, 127, 120, 120, 120, 145, 
	120, 139, 120, 120, 120, 120, 120, 120, 
	125, 126, 120, 120, 120, 120, 132, 120, 
	139, 120, 139, 120, 120, 120, 120, 140, 
	120, 125, 126, 120, 120, 120, 120, 132, 
	120, 139, 120, 139, 2, 120, 120, 19, 
	140, 120, 125, 126, 120, 120, 120, 120, 
	132, 120, 139, 120, 133, 134, 136, 136, 
	6, 125, 126, 127, 120, 120, 120, 137, 
	120, 130, 120, 120, 120, 120, 120, 120, 
	125, 126, 120, 120, 120, 120, 132, 120, 
	130, 120, 130, 120, 120, 120, 120, 131, 
	120, 125, 126, 120, 120, 120, 120, 132, 
	120, 130, 120, 130, 2, 120, 120, 19, 
	131, 120, 125, 126, 120, 120, 120, 120, 
	132, 120, 130, 120, 121, 122, 124, 124, 
	6, 125, 126, 127, 120, 120, 120, 128, 
	120, 179, 180, 181, 182, 44, 183, 184, 
	178, 178, 178, 75, 185, 178, 186, 180, 
	187, 182, 44, 183, 184, 178, 178, 178, 
	178, 185, 178, 180, 187, 182, 44, 183, 
	184, 178, 178, 178, 178, 185, 178, 188, 
	178, 178, 178, 57, 189, 178, 183, 184, 
	178, 178, 178, 178, 190, 178, 188, 178, 
	191, 192, 193, 194, 44, 183, 184, 178, 
	178, 178, 73, 195, 178, 196, 192, 194, 
	194, 44, 183, 184, 178, 178, 178, 178, 
	195, 178, 192, 194, 194, 44, 183, 184, 
	178, 178, 178, 178, 195, 178, 197, 178, 
	178, 178, 57, 198, 178, 183, 184, 178, 
	178, 178, 178, 190, 178, 197, 178, 199, 
	200, 201, 202, 44, 183, 184, 178, 178, 
	178, 71, 203, 178, 204, 200, 202, 202, 
	44, 183, 184, 178, 178, 178, 178, 203, 
	178, 200, 202, 202, 44, 183, 184, 178, 
	178, 178, 178, 203, 178, 205, 178, 178, 
	178, 57, 206, 178, 183, 184, 178, 178, 
	178, 178, 190, 178, 205, 178, 207, 208, 
	209, 210, 44, 183, 184, 178, 178, 178, 
	69, 211, 178, 212, 208, 210, 210, 44, 
	183, 184, 178, 178, 178, 178, 211, 178, 
	208, 210, 210, 44, 183, 184, 178, 178, 
	178, 178, 211, 178, 213, 178, 178, 178, 
	57, 214, 178, 183, 184, 178, 178, 178, 
	178, 190, 178, 213, 178, 215, 216, 217, 
	218, 44, 183, 184, 178, 178, 178, 67, 
	219, 178, 220, 216, 218, 218, 44, 183, 
	184, 178, 178, 178, 178, 219, 178, 216, 
	218, 218, 44, 183, 184, 178, 178, 178, 
	178, 219, 178, 57, 57, 178, 183, 184, 
	178, 178, 178, 178, 190, 178, 183, 184, 
	178, 178, 178, 178, 190, 178, 221, 178, 
	178, 178, 184, 178, 178, 178, 178, 190, 
	178, 184, 178, 178, 178, 178, 190, 178, 
	222, 178, 223, 178, 224, 178, 178, 178, 
	184, 178, 178, 178, 41, 178, 40, 178, 
	178, 178, 178, 178, 184, 178, 184, 178, 
	223, 178, 178, 178, 178, 178, 184, 178, 
	57, 178, 183, 184, 178, 178, 178, 178, 
	190, 178, 225, 66, 226, 227, 47, 183, 
	184, 178, 178, 178, 178, 190, 178, 66, 
	226, 227, 47, 183, 184, 178, 178, 178, 
	178, 190, 178, 226, 226, 47, 183, 184, 
	178, 178, 178, 178, 190, 178, 228, 63, 
	229, 230, 50, 183, 184, 178, 178, 178, 
	178, 190, 178, 63, 229, 230, 50, 183, 
	184, 178, 178, 178, 178, 190, 178, 229, 
	229, 50, 183, 184, 178, 178, 178, 178, 
	190, 178, 231, 60, 232, 233, 53, 183, 
	184, 178, 178, 178, 178, 190, 178, 60, 
	232, 233, 53, 183, 184, 178, 178, 178, 
	178, 190, 178, 232, 232, 53, 183, 184, 
	178, 178, 178, 178, 190, 178, 234, 57, 
	178, 235, 178, 183, 184, 178, 178, 178, 
	178, 190, 178, 57, 178, 235, 178, 183, 
	184, 178, 178, 178, 178, 190, 178, 39, 
	40, 178, 178, 57, 57, 178, 183, 184, 
	178, 178, 178, 178, 190, 178, 39, 178, 
	215, 216, 218, 218, 44, 183, 184, 178, 
	178, 178, 178, 219, 178, 213, 178, 178, 
	178, 178, 178, 178, 183, 184, 178, 178, 
	178, 178, 190, 178, 213, 178, 213, 178, 
	178, 178, 178, 214, 178, 183, 184, 178, 
	178, 178, 178, 190, 178, 213, 178, 213, 
	40, 178, 178, 57, 214, 178, 183, 184, 
	178, 178, 178, 178, 190, 178, 213, 178, 
	207, 208, 210, 210, 44, 183, 184, 178, 
	178, 178, 178, 211, 178, 205, 178, 178, 
	178, 178, 178, 178, 183, 184, 178, 178, 
	178, 178, 190, 178, 205, 178, 205, 178, 
	178, 178, 178, 206, 178, 183, 184, 178, 
	178, 178, 178, 190, 178, 205, 178, 205, 
	40, 178, 178, 57, 206, 178, 183, 184, 
	178, 178, 178, 178, 190, 178, 205, 178, 
	199, 200, 202, 202, 44, 183, 184, 178, 
	178, 178, 178, 203, 178, 197, 178, 178, 
	178, 178, 178, 178, 183, 184, 178, 178, 
	178, 178, 190, 178, 197, 178, 197, 178, 
	178, 178, 178, 198, 178, 183, 184, 178, 
	178, 178, 178, 190, 178, 197, 178, 197, 
	40, 178, 178, 57, 198, 178, 183, 184, 
	178, 178, 178, 178, 190, 178, 197, 178, 
	191, 192, 194, 194, 44, 183, 184, 178, 
	178, 178, 178, 195, 178, 188, 178, 178, 
	178, 178, 178, 178, 183, 184, 178, 178, 
	178, 178, 190, 178, 188, 178, 188, 178, 
	178, 178, 178, 189, 178, 183, 184, 178, 
	178, 178, 178, 190, 178, 188, 178, 74, 
	43, 43, 44, 178, 178, 178, 178, 178, 
	178, 74, 178, 188, 40, 178, 178, 57, 
	189, 178, 183, 184, 178, 178, 178, 178, 
	190, 178, 188, 178, 179, 180, 187, 182, 
	44, 183, 184, 178, 178, 178, 178, 185, 
	178, 237, 238, 239, 240, 82, 241, 242, 
	236, 236, 236, 113, 243, 236, 244, 238, 
	240, 240, 82, 241, 242, 236, 236, 236, 
	236, 243, 236, 238, 240, 240, 82, 241, 
	242, 236, 236, 236, 236, 243, 236, 245, 
	236, 236, 236, 95, 246, 236, 241, 242, 
	236, 236, 236, 236, 247, 236, 245, 236, 
	248, 249, 250, 251, 82, 241, 242, 236, 
	236, 236, 111, 252, 236, 253, 249, 251, 
	251, 82, 241, 242, 236, 236, 236, 236, 
	252, 236, 249, 251, 251, 82, 241, 242, 
	236, 236, 236, 236, 252, 236, 254, 236, 
	236, 236, 95, 255, 236, 241, 242, 236, 
	236, 236, 236, 247, 236, 254, 236, 256, 
	257, 258, 259, 82, 241, 242, 236, 236, 
	236, 109, 260, 236, 261, 257, 259, 259, 
	82, 241, 242, 236, 236, 236, 236, 260, 
	236, 257, 259, 259, 82, 241, 242, 236, 
	236, 236, 236, 260, 236, 262, 236, 236, 
	236, 95, 263, 236, 241, 242, 236, 236, 
	236, 236, 247, 236, 262, 236, 264, 265, 
	266, 267, 82, 241, 242, 236, 236, 236, 
	107, 268, 236, 269, 265, 267, 267, 82, 
	241, 242, 236, 236, 236, 236, 268, 236, 
	265, 267, 267, 82, 241, 242, 236, 236, 
	236, 236, 268, 236, 270, 236, 236, 236, 
	95, 271, 236, 241, 242, 236, 236, 236, 
	236, 247, 236, 270, 236, 272, 273, 274, 
	275, 82, 241, 242, 236, 236, 236, 105, 
	276, 236, 277, 273, 275, 275, 82, 241, 
	242, 236, 236, 236, 236, 276, 236, 273, 
	275, 275, 82, 241, 242, 236, 236, 236, 
	236, 276, 236, 95, 95, 236, 241, 242, 
	236, 236, 236, 236, 247, 236, 241, 242, 
	236, 236, 236, 236, 247, 236, 278, 236, 
	236, 236, 242, 236, 236, 236, 236, 247, 
	236, 242, 236, 236, 236, 236, 247, 236, 
	279, 236, 280, 236, 281, 236, 236, 236, 
	242, 236, 236, 236, 79, 236, 78, 236, 
	236, 236, 236, 236, 242, 236, 242, 236, 
	280, 236, 236, 236, 236, 236, 242, 236, 
	95, 236, 241, 242, 236, 236, 236, 236, 
	247, 236, 282, 104, 283, 284, 85, 241, 
	242, 236, 236, 236, 236, 247, 236, 104, 
	283, 284, 85, 241, 242, 236, 236, 236, 
	236, 247, 236, 283, 283, 85, 241, 242, 
	236, 236, 236, 236, 247, 236, 285, 101, 
	286, 287, 88, 241, 242, 236, 236, 236, 
	236, 247, 236, 101, 286, 287, 88, 241, 
	242, 236, 236, 236, 236, 247, 236, 286, 
	286, 88, 241, 242, 236, 236, 236, 236, 
	247, 236, 288, 98, 289, 290, 91, 241, 
	242, 236, 236, 236, 236, 247, 236, 98, 
	289, 290, 91, 241, 242, 236, 236, 236, 
	236, 247, 236, 289, 289, 91, 241, 242, 
	236, 236, 236, 236, 247, 236, 291, 95, 
	236, 292, 236, 241, 242, 236, 236, 236, 
	236, 247, 236, 95, 236, 292, 236, 241, 
	242, 236, 236, 236, 236, 247, 236, 77, 
	78, 236, 236, 95, 95, 236, 241, 242, 
	236, 236, 236, 236, 247, 236, 77, 236, 
	272, 273, 275, 275, 82, 241, 242, 236, 
	236, 236, 236, 276, 236, 270, 236, 236, 
	236, 236, 236, 236, 241, 242, 236, 236, 
	236, 236, 247, 236, 270, 236, 270, 236, 
	236, 236, 236, 271, 236, 241, 242, 236, 
	236, 236, 236, 247, 236, 270, 236, 270, 
	78, 236, 236, 95, 271, 236, 241, 242, 
	236, 236, 236, 236, 247, 236, 270, 236, 
	264, 265, 267, 267, 82, 241, 242, 236, 
	236, 236, 236, 268, 236, 262, 236, 236, 
	236, 236, 236, 236, 241, 242, 236, 236, 
	236, 236, 247, 236, 262, 236, 262, 236, 
	236, 236, 236, 263, 236, 241, 242, 236, 
	236, 236, 236, 247, 236, 262, 236, 262, 
	78, 236, 236, 95, 263, 236, 241, 242, 
	236, 236, 236, 236, 247, 236, 262, 236, 
	256, 257, 259, 259, 82, 241, 242, 236, 
	236, 236, 236, 260, 236, 254, 236, 236, 
	236, 236, 236, 236, 241, 242, 236, 236, 
	236, 236, 247, 236, 254, 236, 254, 236, 
	236, 236, 236, 255, 236, 241, 242, 236, 
	236, 236, 236, 247, 236, 254, 236, 254, 
	78, 236, 236, 95, 255, 236, 241, 242, 
	236, 236, 236, 236, 247, 236, 254, 236, 
	248, 249, 251, 251, 82, 241, 242, 236, 
	236, 236, 236, 252, 236, 245, 236, 236, 
	236, 236, 236, 236, 241, 242, 236, 236, 
	236, 236, 247, 236, 245, 236, 245, 236, 
	236, 236, 236, 246, 236, 241, 242, 236, 
	236, 236, 236, 247, 236, 245, 236, 245, 
	78, 236, 236, 95, 246, 236, 241, 242, 
	236, 236, 236, 236, 247, 236, 245, 236, 
	237, 238, 240, 240, 82, 241, 242, 236, 
	236, 236, 236, 243, 236, 115, 116, 293, 
	293, 293, 293, 293, 293, 293, 293, 117, 
	117, 293, 293, 293, 115, 293, 121, 294, 
	123, 124, 6, 125, 126, 127, 120, 120, 
	37, 128, 120, 130, 116, 120, 120, 19, 
	131, 120, 125, 126, 120, 117, 117, 120, 
	132, 120, 130, 120, 0
};

static const short _indic_syllable_machine_trans_targs[] = {
	105, 130, 132, 133, 134, 3, 135, 4, 
	6, 138, 7, 9, 141, 10, 12, 144, 
	13, 15, 16, 126, 18, 19, 143, 21, 
	22, 140, 24, 25, 137, 148, 150, 152, 
	154, 156, 158, 160, 162, 164, 105, 189, 
	191, 192, 193, 38, 194, 39, 41, 197, 
	42, 44, 200, 45, 47, 203, 48, 50, 
	51, 185, 53, 54, 202, 56, 57, 199, 
	59, 60, 196, 206, 208, 210, 212, 214, 
	216, 218, 220, 223, 105, 248, 250, 251, 
	252, 73, 253, 74, 76, 256, 77, 79, 
	259, 80, 82, 262, 83, 85, 86, 244, 
	88, 89, 261, 91, 92, 258, 94, 95, 
	255, 265, 267, 269, 271, 273, 275, 277, 
	279, 281, 105, 106, 165, 224, 282, 283, 
	105, 107, 109, 34, 33, 127, 129, 146, 
	163, 108, 110, 161, 0, 111, 113, 32, 
	31, 159, 112, 114, 157, 115, 117, 30, 
	29, 155, 116, 118, 153, 119, 121, 28, 
	27, 151, 120, 122, 149, 123, 125, 26, 
	2, 147, 124, 128, 105, 131, 1, 136, 
	5, 23, 139, 8, 20, 142, 11, 17, 
	145, 14, 105, 166, 168, 69, 221, 186, 
	188, 222, 167, 68, 169, 219, 35, 170, 
	172, 67, 66, 217, 171, 173, 215, 174, 
	176, 65, 64, 213, 175, 177, 211, 178, 
	180, 63, 62, 209, 179, 181, 207, 182, 
	184, 61, 37, 205, 183, 187, 105, 190, 
	36, 195, 40, 58, 198, 43, 55, 201, 
	46, 52, 204, 49, 105, 225, 227, 104, 
	103, 245, 247, 280, 226, 228, 278, 70, 
	229, 231, 102, 101, 276, 230, 232, 274, 
	233, 235, 100, 99, 272, 234, 236, 270, 
	237, 239, 98, 97, 268, 238, 240, 266, 
	241, 243, 96, 72, 264, 242, 246, 105, 
	249, 71, 254, 75, 93, 257, 78, 90, 
	260, 81, 87, 263, 84, 105, 284
};

static const char _indic_syllable_machine_trans_actions[] = {
	1, 2, 0, 0, 2, 0, 2, 0, 
	0, 2, 0, 0, 2, 0, 0, 2, 
	0, 0, 0, 2, 0, 0, 2, 0, 
	0, 2, 0, 0, 2, 2, 2, 2, 
	2, 2, 2, 2, 2, 2, 3, 2, 
	0, 0, 2, 0, 2, 0, 0, 2, 
	0, 0, 2, 0, 0, 2, 0, 0, 
	0, 2, 0, 0, 2, 0, 0, 2, 
	0, 0, 2, 2, 2, 2, 2, 2, 
	2, 2, 2, 2, 4, 2, 0, 0, 
	2, 0, 2, 0, 0, 2, 0, 0, 
	2, 0, 0, 2, 0, 0, 0, 2, 
	0, 0, 2, 0, 0, 2, 0, 0, 
	2, 2, 2, 2, 2, 2, 2, 2, 
	2, 2, 7, 2, 2, 2, 0, 2, 
	8, 2, 2, 0, 0, 2, 0, 2, 
	2, 2, 2, 2, 0, 2, 2, 0, 
	0, 2, 2, 2, 2, 2, 2, 0, 
	0, 2, 2, 2, 2, 2, 2, 0, 
	0, 2, 2, 2, 2, 2, 2, 0, 
	0, 2, 2, 2, 9, 0, 0, 2, 
	0, 0, 2, 0, 0, 2, 0, 0, 
	2, 0, 10, 2, 2, 0, 2, 2, 
	0, 2, 2, 0, 2, 2, 0, 2, 
	2, 0, 0, 2, 2, 2, 2, 2, 
	2, 0, 0, 2, 2, 2, 2, 2, 
	2, 0, 0, 2, 2, 2, 2, 2, 
	2, 0, 0, 2, 2, 2, 11, 0, 
	0, 2, 0, 0, 2, 0, 0, 2, 
	0, 0, 2, 0, 12, 2, 2, 0, 
	0, 2, 0, 2, 2, 2, 2, 0, 
	2, 2, 0, 0, 2, 2, 2, 2, 
	2, 2, 0, 0, 2, 2, 2, 2, 
	2, 2, 0, 0, 2, 2, 2, 2, 
	2, 2, 0, 0, 2, 2, 2, 13, 
	0, 0, 2, 0, 0, 2, 0, 0, 
	2, 0, 0, 2, 0, 14, 2
};

static const char _indic_syllable_machine_to_state_actions[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 5, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0
};

static const char _indic_syllable_machine_from_state_actions[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 6, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0
};

static const short _indic_syllable_machine_eof_trans[] = {
	1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 39, 39, 39, 39, 39, 
	39, 39, 39, 39, 39, 39, 39, 39, 
	39, 39, 39, 39, 39, 39, 39, 39, 
	39, 39, 39, 39, 39, 39, 39, 39, 
	39, 39, 39, 39, 39, 39, 77, 77, 
	77, 77, 77, 77, 77, 77, 77, 77, 
	77, 77, 77, 77, 77, 77, 77, 77, 
	77, 77, 77, 77, 77, 77, 77, 77, 
	77, 77, 77, 77, 77, 77, 77, 77, 
	77, 0, 121, 121, 121, 121, 121, 121, 
	121, 121, 121, 121, 121, 121, 121, 121, 
	121, 121, 121, 121, 121, 121, 121, 121, 
	121, 121, 121, 121, 121, 121, 121, 121, 
	121, 121, 121, 121, 121, 121, 121, 121, 
	121, 121, 121, 121, 121, 121, 121, 121, 
	121, 121, 121, 121, 121, 121, 121, 121, 
	121, 121, 121, 121, 121, 179, 179, 179, 
	179, 179, 179, 179, 179, 179, 179, 179, 
	179, 179, 179, 179, 179, 179, 179, 179, 
	179, 179, 179, 179, 179, 179, 179, 179, 
	179, 179, 179, 179, 179, 179, 179, 179, 
	179, 179, 179, 179, 179, 179, 179, 179, 
	179, 179, 179, 179, 179, 179, 179, 179, 
	179, 179, 179, 179, 179, 179, 179, 179, 
	237, 237, 237, 237, 237, 237, 237, 237, 
	237, 237, 237, 237, 237, 237, 237, 237, 
	237, 237, 237, 237, 237, 237, 237, 237, 
	237, 237, 237, 237, 237, 237, 237, 237, 
	237, 237, 237, 237, 237, 237, 237, 237, 
	237, 237, 237, 237, 237, 237, 237, 237, 
	237, 237, 237, 237, 237, 237, 237, 237, 
	237, 237, 294, 121, 121
};

static const int indic_syllable_machine_start = 105;
static const int indic_syllable_machine_first_final = 105;
static const int indic_syllable_machine_error = -1;

static const int indic_syllable_machine_en_main = 105;


#line 36 "../../src/hb-ot-shape-complex-indic-machine.rl"



#line 88 "../../src/hb-ot-shape-complex-indic-machine.rl"


#define process_syllable(func) \
  HB_STMT_START { \
    if (0) fprintf (stderr, "syllable %d..%d %s\n", last, p+1, #func); \
    for (unsigned int i = last; i < p+1; i++) \
      info[i].syllable() = syllable_serial; \
    PASTE (initial_reordering_, func) (plan, buffer, last, p+1); \
    last = p+1; \
    syllable_serial++; \
    if (unlikely (!syllable_serial)) syllable_serial++; \
  } HB_STMT_END

static void
find_syllables (const hb_ot_shape_plan_t *plan, hb_buffer_t *buffer)
{
  unsigned int p, pe, eof, ts, te, act;
  int cs;
  hb_glyph_info_t *info = buffer->info;
  
#line 759 "hb-ot-shape-complex-indic-machine.hh.tmp"
	{
	cs = indic_syllable_machine_start;
	ts = 0;
	te = 0;
	act = 0;
	}

#line 110 "../../src/hb-ot-shape-complex-indic-machine.rl"


  p = 0;
  pe = eof = buffer->len;

  unsigned int last = 0;
  uint8_t syllable_serial = 1;
  
#line 776 "hb-ot-shape-complex-indic-machine.hh.tmp"
	{
	int _slen;
	int _trans;
	const unsigned char *_keys;
	const short *_inds;
	if ( p == pe )
		goto _test_eof;
_resume:
	switch ( _indic_syllable_machine_from_state_actions[cs] ) {
	case 6:
#line 1 "NONE"
	{ts = p;}
	break;
#line 790 "hb-ot-shape-complex-indic-machine.hh.tmp"
	}

	_keys = _indic_syllable_machine_trans_keys + (cs<<1);
	_inds = _indic_syllable_machine_indicies + _indic_syllable_machine_index_offsets[cs];

	_slen = _indic_syllable_machine_key_spans[cs];
	_trans = _inds[ _slen > 0 && _keys[0] <=( info[p].indic_category()) &&
		( info[p].indic_category()) <= _keys[1] ?
		( info[p].indic_category()) - _keys[0] : _slen ];

_eof_trans:
	cs = _indic_syllable_machine_trans_targs[_trans];

	if ( _indic_syllable_machine_trans_actions[_trans] == 0 )
		goto _again;

	switch ( _indic_syllable_machine_trans_actions[_trans] ) {
	case 2:
#line 1 "NONE"
	{te = p+1;}
	break;
	case 9:
#line 81 "../../src/hb-ot-shape-complex-indic-machine.rl"
	{te = p+1;{ process_syllable (consonant_syllable); }}
	break;
	case 11:
#line 82 "../../src/hb-ot-shape-complex-indic-machine.rl"
	{te = p+1;{ process_syllable (vowel_syllable); }}
	break;
	case 13:
#line 83 "../../src/hb-ot-shape-complex-indic-machine.rl"
	{te = p+1;{ process_syllable (standalone_cluster); }}
	break;
	case 7:
#line 84 "../../src/hb-ot-shape-complex-indic-machine.rl"
	{te = p+1;{ process_syllable (non_indic); }}
	break;
	case 8:
#line 81 "../../src/hb-ot-shape-complex-indic-machine.rl"
	{te = p;p--;{ process_syllable (consonant_syllable); }}
	break;
	case 10:
#line 82 "../../src/hb-ot-shape-complex-indic-machine.rl"
	{te = p;p--;{ process_syllable (vowel_syllable); }}
	break;
	case 12:
#line 83 "../../src/hb-ot-shape-complex-indic-machine.rl"
	{te = p;p--;{ process_syllable (standalone_cluster); }}
	break;
	case 14:
#line 84 "../../src/hb-ot-shape-complex-indic-machine.rl"
	{te = p;p--;{ process_syllable (non_indic); }}
	break;
	case 1:
#line 81 "../../src/hb-ot-shape-complex-indic-machine.rl"
	{{p = ((te))-1;}{ process_syllable (consonant_syllable); }}
	break;
	case 3:
#line 82 "../../src/hb-ot-shape-complex-indic-machine.rl"
	{{p = ((te))-1;}{ process_syllable (vowel_syllable); }}
	break;
	case 4:
#line 83 "../../src/hb-ot-shape-complex-indic-machine.rl"
	{{p = ((te))-1;}{ process_syllable (standalone_cluster); }}
	break;
#line 856 "hb-ot-shape-complex-indic-machine.hh.tmp"
	}

_again:
	switch ( _indic_syllable_machine_to_state_actions[cs] ) {
	case 5:
#line 1 "NONE"
	{ts = 0;}
	break;
#line 865 "hb-ot-shape-complex-indic-machine.hh.tmp"
	}

	if ( ++p != pe )
		goto _resume;
	_test_eof: {}
	if ( p == eof )
	{
	if ( _indic_syllable_machine_eof_trans[cs] > 0 ) {
		_trans = _indic_syllable_machine_eof_trans[cs] - 1;
		goto _eof_trans;
	}
	}

	}

#line 119 "../../src/hb-ot-shape-complex-indic-machine.rl"

}

#endif /* HB_OT_SHAPE_COMPLEX_INDIC_MACHINE_HH */
