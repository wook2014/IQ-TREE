/***************************************************************************
 *   Copyright (C) 2009 by BUI Quang Minh   *
 *   minh.bui@univie.ac.at   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#include "modelprotein.h"
#include <string>

/*
	following are definitions for various protein models encoded in a string.
	This string contains the lower triangle of the rate matrix and the state frequencies at the end.
	It should follow the amino acid order:
	A   R   N   D   C   Q   E   G   H   I   L   K   M   F   P   S   T   W   Y   V
	Ala Arg Asn Asp Cys Gln Glu Gly His Ile Leu Lys Met Phe Pro Ser Thr Trp Tyr Val
*/

string model_WAG = 
"0.551571 \
0.509848  0.635346 \
0.738998  0.147304  5.429420 \
1.027040  0.528191  0.265256  0.0302949 \
0.908598  3.035500  1.543640  0.616783  0.0988179 \
1.582850  0.439157  0.947198  6.174160  0.021352  5.469470 \
1.416720  0.584665  1.125560  0.865584  0.306674  0.330052  0.567717 \
0.316954  2.137150  3.956290  0.930676  0.248972  4.294110  0.570025  0.249410 \
0.193335  0.186979  0.554236  0.039437  0.170135  0.113917  0.127395  0.0304501 0.138190 \
0.397915  0.497671  0.131528  0.0848047 0.384287  0.869489  0.154263  0.0613037 0.499462  3.170970 \
0.906265  5.351420  3.012010  0.479855  0.0740339 3.894900  2.584430  0.373558  0.890432  0.323832  0.257555 \
0.893496  0.683162  0.198221  0.103754  0.390482  1.545260  0.315124  0.174100  0.404141  4.257460  4.854020  0.934276 \
0.210494  0.102711  0.0961621 0.0467304 0.398020  0.0999208 0.0811339 0.049931  0.679371  1.059470  2.115170  0.088836  1.190630 \
1.438550  0.679489  0.195081  0.423984  0.109404  0.933372  0.682355  0.243570  0.696198  0.0999288 0.415844  0.556896  0.171329  0.161444 \
3.370790  1.224190  3.974230  1.071760  1.407660  1.028870  0.704939  1.341820  0.740169  0.319440  0.344739  0.967130  0.493905  0.545931  1.613280 \
2.121110  0.554413  2.030060  0.374866  0.512984  0.857928  0.822765  0.225833  0.473307  1.458160  0.326622  1.386980  1.516120  0.171903  0.795384  4.378020 \
0.113133  1.163920  0.0719167 0.129767  0.717070  0.215737  0.156557  0.336983  0.262569  0.212483  0.665309  0.137505  0.515706  1.529640  0.139405  0.523742  0.110864 \
0.240735  0.381533  1.086000  0.325711  0.543833  0.227710  0.196303  0.103604  3.873440  0.420170  0.398618  0.133264  0.428437  6.454280  0.216046  0.786993  0.291148  2.485390 \
2.006010  0.251849  0.196246  0.152335  1.002140  0.301281  0.588731  0.187247  0.118358  7.821300  1.800340  0.305434  2.058450  0.649892  0.314887  0.232739  1.388230  0.365369  0.314730 \
\
0.0866279 0.043972  0.0390894 0.0570451 0.0193078 0.0367281 0.0580589 0.0832518 0.0244313 0.048466  0.086209  0.0620286 0.0195027 0.0384319 0.0457631 0.0695179 0.0610127 0.0143859 0.0352742 0.0708956";

string model_cpREV = 
"  105\
  227  357\
  175   43 4435\
  669  823  538   10\
  157 1745  768  400   10\
  499  152 1055 3691   10 3122\
  665  243  653  431  303  133  379\
   66  715 1405  331  441 1269  162   19\
  145  136  168   10  280   92  148   40   29\
  197  203  113   10  396  286   82   20   66 1745\
  236 4482 2430  412   48 3313 2629  263  305  345  218\
  185  125   61   47  159  202  113   21   10 1772 1351  193\
   68   53   97   22  726   10  145   25  127  454 1268   72  327\
  490   87  173  170  285  323  185   28  152  117  219  302  100   43\
 2440  385 2085  590 2331  396  568  691  303  216  516  868   93  487 1202\
 1340  314 1393  266  576  241  369   92   32 1040  156  918  645  148  260 2151\
   14  230   40   18  435   53   63   82   69   42  159   10   86  468   49   73   29\
   56  323  754  281 1466  391  142   10 1971   89  189  247  215 2370   97  522   71  346\
  968   92   83   75  592   54  200   91   25 4797  865  249  475  317  122  167  760   10  119\
\
 0.0755 0.0621 0.0410 0.0371 0.0091 0.0382 0.0495 0.0838 0.0246 0.0806\
 0.1011 0.0504 0.0220 0.0506 0.0431 0.0622 0.0543 0.0181 0.0307 0.0660";

string model_mtREV = 
"  23.18\
  26.95  13.24\
  17.67   1.90 794.38\
  59.93 103.33  58.94   1.90\
   1.90 220.99 173.56  55.28  75.24\
   9.77   1.90  63.05 583.55   1.90 313.56\
 120.71  23.03  53.30  56.77  30.71   6.75  28.28\
  13.90 165.23 496.13 113.99 141.49 582.40  49.12   1.90\
  96.49   1.90  27.10   4.34  62.73   8.34   3.31   5.98  12.26\
  25.46  15.58  15.16   1.90  25.65  39.70   1.90   2.41  11.49 329.09\
   8.36 141.40 608.70   2.31   1.90 465.58 313.86  22.73 127.67  19.57  14.88\
 141.88   1.90  65.41   1.90   6.18  47.37   1.90   1.90  11.97 517.98 537.53  91.37\
   6.37   4.69  15.20   4.98  70.80  19.11   2.67   1.90  48.16  84.67 216.06   6.44  90.82\
  54.31  23.64  73.31  13.43  31.26 137.29  12.83   1.90  60.97  20.63  40.10  50.10  18.84  17.31\
 387.86   6.04 494.39  69.02 277.05  54.11  54.71 125.93  77.46  47.70  73.61 105.79 111.16  64.29 169.90\
 480.72   2.08 238.46  28.01 179.97  94.93  14.82  11.17  44.78 368.43 126.40 136.33 528.17  33.85 128.22 597.21\
   1.90  21.95  10.68  19.86  33.60   1.90   1.90  10.92   7.08   1.90  32.44  24.00  21.71   7.84   4.21  38.58   9.99\
   6.48   1.90 191.36  21.21 254.77  38.82  13.12   3.21 670.14  25.01  44.15  51.17  39.96 465.58  16.21  64.92  38.73  26.25\
 195.06   7.64   1.90   1.90   1.90  19.00  21.14   2.53   1.90 1222.94  91.67   1.90 387.54   6.35   8.23   1.90 204.54   5.37   1.90\
\
0.072 0.019 0.039 0.019 0.006 0.025 0.024 0.056 0.028 0.088 0.169\
0.023 0.054 0.061 0.054 0.072 0.086 0.029 0.033 0.043";


string model_Dayhoff = 
" 27									    \
 98  32									    \
120   0 905								    \
 36  23   0   0								    \
 89 246 103 134   0							    \
198   1 148 1153  0 716							    \
240   9 139 125  11  28  81						    \
 23 240 535  86  28 606  43  10						    \
 65  64  77  24  44  18  61   0   7					    \
 41  15  34   0   0  73  11   7  44 257					    \
 26 464 318  71   0 153  83  27  26  46  18				    \
 72  90   1   0   0 114  30  17   0 336 527 243				    \
 18  14  14   0   0   0   0  15  48 196 157   0  92			    \
250 103  42  13  19 153  51  34  94  12  32  33  17  11			    \
409 154 495  95 161  56  79 234  35  24  17  96  62  46 245		    \
371  26 229  66  16  53  34  30  22 192  33 136 104  13  78 550		    \
  0 201  23   0   0   0   0   0  27   0  46   0   0  76   0  75   0	    \
 24   8  95   0  96   0  22   0 127  37  28  13   0 698   0  34  42  61	    \
208  24  15  18  49  35  37  54  44 889 175  10 258  12  48  30 157   0  28 \
\
0.087127 0.040904 0.040432 0.046872 0.033474 0.038255 0.049530\
0.088612 0.033618 0.036886 0.085357 0.080482 0.014753 0.039772\
0.050680 0.069577 0.058542 0.010494 0.029916 0.064718";

string model_mtMAM = 
" 32                                                                         \
  2   4                                                                     \
 11   0 864                                                                 \
  0 186   0   0                                                             \
  0 246   8  49   0                                                         \
  0   0   0 569   0 274                                                     \
 78  18  47  79   0   0  22                                                 \
  8 232 458  11 305 550  22   0                                             \
 75   0  19   0  41   0   0   0   0                                         \
 21   6   0   0  27  20   0   0  26 232                                     \
  0  50 408   0   0 242 215   0   0   6   4                                 \
 76   0  21   0   0  22   0   0   0 378 609  59                             \
  0   0   6   5   7   0   0   0   0  57 246   0  11                         \
 53   9  33   2   0  51   0   0  53   5  43  18   0  17                     \
342   3 446  16 347  30  21 112  20   0  74  65  47  90 202                 \
681   0 110   0 114   0   4   0   1 360  34  50 691   8  78 614             \
  5  16   6   0  65   0   0   0   0   0  12   0  13   0   7  17   0         \
  0   0 156   0 530  54   0   1 1525 16  25  67   0 682   8 107   0  14    \
398   0   0  10   0  33  20   5   0 2220 100  0 832   6   0   0 237   0   0 \
\
0.0692 0.0184 0.0400 0.0186 0.0065 0.0238 0.0236 0.0557 0.0277 0.0905\
0.1675 0.0221 0.0561 0.0611 0.0536 0.0725 0.0870 0.0293 0.0340 0.0428";


string model_JTT=
" 58                                                                        \
 54  45                                                                    \
 81  16 528                                                                \
 56 113  34  10                                                            \
 57 310  86  49   9                                                        \
105  29  58 767   5 323                                                    \
179 137  81 130  59  26 119                                                \
 27 328 391 112  69 597  26  23                                            \
 36  22  47  11  17   9  12   6  16                                        \
 30  38  12   7  23  72   9   6  56 229                                    \
 35 646 263  26   7 292 181  27  45  21  14                                \
 54  44  30  15  31  43  18  14  33 479 388  65                            \
 15   5  10   4  78   4   5   5  40  89 248   4  43                        \
194  74  15  15  14 164  18  24 115  10 102  21  16  17                    \
378 101 503  59 223  53  30 201  73  40  59  47  29  92 285                \
475  64 232  38  42  51  32  33  46 245  25 103 226  12 118 477            \
  9 126   8   4 115  18  10  55   8   9  52  10  24  53   6  35  12        \
 11  20  70  46 209  24   7   8 573  32  24   8  18 536  10  63  21  71    \
298  17  16  31  62  20  45  47  11 961 180  14 323  62  23  38 112  25  16 \
\
0.076748 0.051691 0.042645 0.051544 0.019803 0.040752 0.061830\
0.073152 0.022944 0.053761 0.091904 0.058676 0.023826 0.040126\
0.050901 0.068765 0.058565 0.014261 0.032102 0.066005";

string model_LG = 
"0.425093 \
0.276818 0.751878 \
0.395144 0.123954 5.076149 \
2.489084 0.534551 0.528768 0.062556 \
0.969894 2.807908 1.695752 0.523386 0.084808 \
1.038545 0.363970 0.541712 5.243870 0.003499 4.128591 \
2.066040 0.390192 1.437645 0.844926 0.569265 0.267959 0.348847 \
0.358858 2.426601 4.509238 0.927114 0.640543 4.813505 0.423881 0.311484 \
0.149830 0.126991 0.191503 0.010690 0.320627 0.072854 0.044265 0.008705 0.108882 \
0.395337 0.301848 0.068427 0.015076 0.594007 0.582457 0.069673 0.044261 0.366317 4.145067 \
0.536518 6.326067 2.145078 0.282959 0.013266 3.234294 1.807177 0.296636 0.697264 0.159069 0.137500 \
1.124035 0.484133 0.371004 0.025548 0.893680 1.672569 0.173735 0.139538 0.442472 4.273607 6.312358 0.656604 \
0.253701 0.052722 0.089525 0.017416 1.105251 0.035855 0.018811 0.089586 0.682139 1.112727 2.592692 0.023918 1.798853 \
1.177651 0.332533 0.161787 0.394456 0.075382 0.624294 0.419409 0.196961 0.508851 0.078281 0.249060 0.390322 0.099849 0.094464 \
4.727182 0.858151 4.008358 1.240275 2.784478 1.223828 0.611973 1.739990 0.990012 0.064105 0.182287 0.748683 0.346960 0.361819 1.338132 \
2.139501 0.578987 2.000679 0.425860 1.143480 1.080136 0.604545 0.129836 0.584262 1.033739 0.302936 1.136863 2.020366 0.165001 0.571468 6.472279 \
0.180717 0.593607 0.045376 0.029890 0.670128 0.236199 0.077852 0.268491 0.597054 0.111660 0.619632 0.049906 0.696175 2.457121 0.095131 0.248862 0.140825 \
0.218959 0.314440 0.612025 0.135107 1.165532 0.257336 0.120037 0.054679 5.306834 0.232523 0.299648 0.131932 0.481306 7.803902 0.089613 0.400547 0.245841 3.151815 \
2.547870 0.170887 0.083688 0.037967 1.959291 0.210332 0.245034 0.076701 0.119013 10.649107 1.702745 0.185202 1.898718 0.654683 0.296501 0.098369 2.188158 0.189510 0.249313 \
\
0.079066 0.055941 0.041977 0.053052 0.012937 0.040767 0.071586 0.057337 0.022355 0.062157 0.099081 0.064600 0.022951 0.042302 0.044040 0.061197 0.053287 0.012066 0.034155 0.069147";

string model_mtART = 
"0.2 \
0.2 0.2 \
1 4 500 \
254 36 98 11 \
0.2 154 262 0.2 0.2 \
0.2 0.2 183 862 0.2 262 \
200 0.2 121 12 81 3 44 \
0.2 41 180 0.2 12 314 15 0.2 \
26 2 21 7 63 11 7 3 0.2 \
4 2 13 1 79 16 2 1 6 515 \
0.2 209 467 2 0.2 349 106 0.2 0.2 3 4 \
121 5 79 0.2 312 67 0.2 56 0.2 515 885 106 \
13 5 20 0.2 184 0.2 0.2 1 14 118 263 11 322 \
49 0.2 17 0.2 0.2 39 8 0.2 1 0.2 12 17 5 15 \
673 3 398 44 664 52 31 226 11 7 8 144 112 36 87 \
244 0.2 166 0.2 183 44 43 0.2 19 204 48 70 289 14 47 660 \
0.2 0.2 8 0.2 22 7 11 2 0.2 0.2 21 16 71 54 0.2 2 0.2 \
1 4 251 0.2 72 87 8 9 191 12 20 117 71 792 18 30 46 38 \
340 0.2 23 0.2 350 0.2 14 3 0.2 1855 85 26 281 52 32 61 544 0.2 2 \
\
0.054116 0.018227 0.039903 0.020160 0.009709 0.018781 0.024289 0.068183 0.024518 0.092638 \
0.148658 0.021718 0.061453 0.088668 0.041826 0.091030 0.049194 0.029786 0.039443 0.057700";


string model_mtZOA = 
"   3.3\
   1.7  33.6\
  16.1   3.2 617.0\
 272.5  61.1  94.6   9.5\
   7.3 231.0 190.3  19.3  49.1\
  17.1   6.4 174.0 883.6   3.4 349.4\
 289.3   7.2  99.3  26.0  82.4   8.9  43.1\
   2.3  61.7 228.9  55.6  37.5 421.8  14.9   7.4\
  33.2   0.2  24.3   1.5  48.8   0.2   7.3   3.4   1.6\
  15.6   4.1   7.9   0.5  59.7  23.0   1.0   3.5   6.6 425.2\
   0.2 292.3 413.4   0.2   0.2 334.0 163.2  10.1  23.9   8.4   6.7\
 136.5   3.8  73.7   0.2 264.8  83.9   0.2  52.2   7.1 449.7 636.3  83.0\
  26.5   0.2  12.9   2.0 167.8   9.5   0.2   5.8  13.1  90.3 234.2  16.3 215.6\
  61.8   7.5  22.6   0.2   8.1  52.2  20.6   1.3  15.6   2.6  11.4  24.3   5.4  10.5\
 644.9  11.8 420.2  51.4 656.3  96.4  38.4 257.1  23.1   7.2  15.2 144.9  95.3  32.2  79.7\
 378.1   3.2 184.6   2.3 199.0  39.4  34.5   5.2  19.4 222.3  50.0  75.5 305.1  19.3  56.9 666.3\
   3.1  16.9   6.4   0.2  36.1   6.1   3.5  12.3   4.5   9.7  27.2   6.6  48.7  58.2   1.3  10.3   3.6\
   2.1  13.8 141.6  13.9  76.7  52.3  10.0   4.3 266.5  13.1   5.7  45.0  41.4 590.5   4.2  29.7  29.0  79.8\
 321.9   5.1   7.1   3.7 243.8   9.0  16.3  23.7   0.3 1710.6 126.1  11.1 279.6  59.6  17.9  49.5 396.4  13.7  15.6 \
\
    0.068880    0.021037    0.030390    0.020696    0.009966    0.018623    0.024989    0.071968    0.026814    0.085072    0.156717    0.019276    0.050652    0.081712    0.044803    0.080535    0.056386    0.027998    0.037404    0.066083";

void get_rtREV(double **q, double *f) {
	/* rtRev */
	q[ 0][ 0] =   0; q[ 1][ 0] =  34; q[ 2][ 0] =  51; q[ 3][ 0] =  10; q[ 4][ 0] = 439;
	q[ 5][ 0] =  32; q[ 6][ 0] =  81; q[ 7][ 0] = 135; q[ 8][ 0] =  30; q[ 9][ 0] =   1;
	q[10][ 0] =  45; q[11][ 0] =  38; q[12][ 0] = 235; q[13][ 0] =   1; q[14][ 0] =  97;
	q[15][ 0] = 460; q[16][ 0] = 258; q[17][ 0] =   5; q[18][ 0] =  55; q[19][ 0] = 197;

	q[ 0][ 1] =  34; q[ 1][ 1] =   0; q[ 2][ 1] =  35; q[ 3][ 1] =  30; q[ 4][ 1] =  92;
	q[ 5][ 1] = 221; q[ 6][ 1] =  10; q[ 7][ 1] =  41; q[ 8][ 1] =  90; q[ 9][ 1] =  24;
	q[10][ 1] =  18; q[11][ 1] = 593; q[12][ 1] =  57; q[13][ 1] =   7; q[14][ 1] =  24;
	q[15][ 1] = 102; q[16][ 1] =  64; q[17][ 1] =  13; q[18][ 1] =  47; q[19][ 1] =  29;

	q[ 0][ 2] =  51; q[ 1][ 2] =  35; q[ 2][ 2] =   0; q[ 3][ 2] = 384; q[ 4][ 2] = 128;
	q[ 5][ 2] = 236; q[ 6][ 2] =  79; q[ 7][ 2] =  94; q[ 8][ 2] = 320; q[ 9][ 2] =  35;
	q[10][ 2] =  15; q[11][ 2] = 123; q[12][ 2] =   1; q[13][ 2] =  49; q[14][ 2] =  33;
	q[15][ 2] = 294; q[16][ 2] = 148; q[17][ 2] =  16; q[18][ 2] =  28; q[19][ 2] =  21;

	q[ 0][ 3] =  10; q[ 1][ 3] =  30; q[ 2][ 3] = 384; q[ 3][ 3] =   0; q[ 4][ 3] =   1;
	q[ 5][ 3] =  78; q[ 6][ 3] = 542; q[ 7][ 3] =  61; q[ 8][ 3] =  91; q[ 9][ 3] =   1;
	q[10][ 3] =   5; q[11][ 3] =  20; q[12][ 3] =   1; q[13][ 3] =   1; q[14][ 3] =  55;
	q[15][ 3] = 136; q[16][ 3] =  55; q[17][ 3] =   1; q[18][ 3] =   1; q[19][ 3] =   6;

	q[ 0][ 4] = 439; q[ 1][ 4] =  92; q[ 2][ 4] = 128; q[ 3][ 4] =   1; q[ 4][ 4] =   0;
	q[ 5][ 4] =  70; q[ 6][ 4] =   1; q[ 7][ 4] =  48; q[ 8][ 4] = 124; q[ 9][ 4] = 104;
	q[10][ 4] = 110; q[11][ 4] =  16; q[12][ 4] = 156; q[13][ 4] =  70; q[14][ 4] =   1;
	q[15][ 4] =  75; q[16][ 4] = 117; q[17][ 4] =  55; q[18][ 4] = 131; q[19][ 4] = 295;

	q[ 0][ 5] =  32; q[ 1][ 5] = 221; q[ 2][ 5] = 236; q[ 3][ 5] =  78; q[ 4][ 5] =  70;
	q[ 5][ 5] =   0; q[ 6][ 5] = 372; q[ 7][ 5] =  18; q[ 8][ 5] = 387; q[ 9][ 5] =  33;
	q[10][ 5] =  54; q[11][ 5] = 309; q[12][ 5] = 158; q[13][ 5] =   1; q[14][ 5] =  68;
	q[15][ 5] = 225; q[16][ 5] = 146; q[17][ 5] =  10; q[18][ 5] =  45; q[19][ 5] =  36;

	q[ 0][ 6] =  81; q[ 1][ 6] =  10; q[ 2][ 6] =  79; q[ 3][ 6] = 542; q[ 4][ 6] =   1;
	q[ 5][ 6] = 372; q[ 6][ 6] =   0; q[ 7][ 6] =  70; q[ 8][ 6] =  34; q[ 9][ 6] =   1;
	q[10][ 6] =  21; q[11][ 6] = 141; q[12][ 6] =   1; q[13][ 6] =   1; q[14][ 6] =  52;
	q[15][ 6] =  95; q[16][ 6] =  82; q[17][ 6] =  17; q[18][ 6] =   1; q[19][ 6] =  35;

	q[ 0][ 7] = 135; q[ 1][ 7] =  41; q[ 2][ 7] =  94; q[ 3][ 7] =  61; q[ 4][ 7] =  48;
	q[ 5][ 7] =  18; q[ 6][ 7] =  70; q[ 7][ 7] =   0; q[ 8][ 7] =  68; q[ 9][ 7] =   1;
	q[10][ 7] =   3; q[11][ 7] =  30; q[12][ 7] =  37; q[13][ 7] =   7; q[14][ 7] =  17;
	q[15][ 7] = 152; q[16][ 7] =   7; q[17][ 7] =  23; q[18][ 7] =  21; q[19][ 7] =   3;

	q[ 0][ 8] =  30; q[ 1][ 8] =  90; q[ 2][ 8] = 320; q[ 3][ 8] =  91; q[ 4][ 8] = 124;
	q[ 5][ 8] = 387; q[ 6][ 8] =  34; q[ 7][ 8] =  68; q[ 8][ 8] =   0; q[ 9][ 8] =  34;
	q[10][ 8] =  51; q[11][ 8] =  76; q[12][ 8] = 116; q[13][ 8] = 141; q[14][ 8] =  44;
	q[15][ 8] = 183; q[16][ 8] =  49; q[17][ 8] =  48; q[18][ 8] = 307; q[19][ 8] =   1;

	q[ 0][ 9] =   1; q[ 1][ 9] =  24; q[ 2][ 9] =  35; q[ 3][ 9] =   1; q[ 4][ 9] = 104;
	q[ 5][ 9] =  33; q[ 6][ 9] =   1; q[ 7][ 9] =   1; q[ 8][ 9] =  34; q[ 9][ 9] =   0;
	q[10][ 9] = 385; q[11][ 9] =  34; q[12][ 9] = 375; q[13][ 9] =  64; q[14][ 9] =  10;
	q[15][ 9] =   4; q[16][ 9] =  72; q[17][ 9] =  39; q[18][ 9] =  26; q[19][ 9] =1048;

	q[ 0][10] =  45; q[ 1][10] =  18; q[ 2][10] =  15; q[ 3][10] =   5; q[ 4][10] = 110;
	q[ 5][10] =  54; q[ 6][10] =  21; q[ 7][10] =   3; q[ 8][10] =  51; q[ 9][10] = 385;
	q[10][10] =   0; q[11][10] =  23; q[12][10] = 581; q[13][10] = 179; q[14][10] =  22;
	q[15][10] =  24; q[16][10] =  25; q[17][10] =  47; q[18][10] =  64; q[19][10] = 112;

	q[ 0][11] =  38; q[ 1][11] = 593; q[ 2][11] = 123; q[ 3][11] =  20; q[ 4][11] =  16;
	q[ 5][11] = 309; q[ 6][11] = 141; q[ 7][11] =  30; q[ 8][11] =  76; q[ 9][11] =  34;
	q[10][11] =  23; q[11][11] =   0; q[12][11] = 134; q[13][11] =  14; q[14][11] =  43;
	q[15][11] =  77; q[16][11] = 110; q[17][11] =   6; q[18][11] =   1; q[19][11] =  19;

	q[ 0][12] = 235; q[ 1][12] =  57; q[ 2][12] =   1; q[ 3][12] =   1; q[ 4][12] = 156;
	q[ 5][12] = 158; q[ 6][12] =   1; q[ 7][12] =  37; q[ 8][12] = 116; q[ 9][12] = 375;
	q[10][12] = 581; q[11][12] = 134; q[12][12] =   0; q[13][12] = 247; q[14][12] =   1;
	q[15][12] =   1; q[16][12] = 131; q[17][12] = 111; q[18][12] =  74; q[19][12] = 236;

	q[ 0][13] =   1; q[ 1][13] =   7; q[ 2][13] =  49; q[ 3][13] =   1; q[ 4][13] =  70;
	q[ 5][13] =   1; q[ 6][13] =   1; q[ 7][13] =   7; q[ 8][13] = 141; q[ 9][13] =  64;
	q[10][13] = 179; q[11][13] =  14; q[12][13] = 247; q[13][13] =   0; q[14][13] =  11;
	q[15][13] =  20; q[16][13] =  69; q[17][13] = 182; q[18][13] =1017; q[19][13] =  92;

	q[ 0][14] =  97; q[ 1][14] =  24; q[ 2][14] =  33; q[ 3][14] =  55; q[ 4][14] =   1;
	q[ 5][14] =  68; q[ 6][14] =  52; q[ 7][14] =  17; q[ 8][14] =  44; q[ 9][14] =  10;
	q[10][14] =  22; q[11][14] =  43; q[12][14] =   1; q[13][14] =  11; q[14][14] =   0;
	q[15][14] = 134; q[16][14] =  62; q[17][14] =   9; q[18][14] =  14; q[19][14] =  25;

	q[ 0][15] = 460; q[ 1][15] = 102; q[ 2][15] = 294; q[ 3][15] = 136; q[ 4][15] =  75;
	q[ 5][15] = 225; q[ 6][15] =  95; q[ 7][15] = 152; q[ 8][15] = 183; q[ 9][15] =   4;
	q[10][15] =  24; q[11][15] =  77; q[12][15] =   1; q[13][15] =  20; q[14][15] = 134;
	q[15][15] =   0; q[16][15] = 671; q[17][15] =  14; q[18][15] =  31; q[19][15] =  39;

	q[ 0][16] = 258; q[ 1][16] =  64; q[ 2][16] = 148; q[ 3][16] =  55; q[ 4][16] = 117;
	q[ 5][16] = 146; q[ 6][16] =  82; q[ 7][16] =   7; q[ 8][16] =  49; q[ 9][16] =  72;
	q[10][16] =  25; q[11][16] = 110; q[12][16] = 131; q[13][16] =  69; q[14][16] =  62;
	q[15][16] = 671; q[16][16] =   0; q[17][16] =   1; q[18][16] =  34; q[19][16] = 196;

	q[ 0][17] =   5; q[ 1][17] =  13; q[ 2][17] =  16; q[ 3][17] =   1; q[ 4][17] =  55;
	q[ 5][17] =  10; q[ 6][17] =  17; q[ 7][17] =  23; q[ 8][17] =  48; q[ 9][17] =  39;
	q[10][17] =  47; q[11][17] =   6; q[12][17] = 111; q[13][17] = 182; q[14][17] =   9;
	q[15][17] =  14; q[16][17] =   1; q[17][17] =   0; q[18][17] = 176; q[19][17] =  26;

	q[ 0][18] =  55; q[ 1][18] =  47; q[ 2][18] =  28; q[ 3][18] =   1; q[ 4][18] = 131;
	q[ 5][18] =  45; q[ 6][18] =   1; q[ 7][18] =  21; q[ 8][18] = 307; q[ 9][18] =  26;
	q[10][18] =  64; q[11][18] =   1; q[12][18] =  74; q[13][18] =1017; q[14][18] =  14;
	q[15][18] =  31; q[16][18] =  34; q[17][18] = 176; q[18][18] =   0; q[19][18] =  59;

	q[ 0][19] = 197; q[ 1][19] =  29; q[ 2][19] =  21; q[ 3][19] =   6; q[ 4][19] = 295;
	q[ 5][19] =  36; q[ 6][19] =  35; q[ 7][19] =   3; q[ 8][19] =   1; q[ 9][19] =1048;
	q[10][19] = 112; q[11][19] =  19; q[12][19] = 236; q[13][19] =  92; q[14][19] =  25;
	q[15][19] =  39; q[16][19] = 196; q[17][19] =  26; q[18][19] =  59; q[19][19] =   0;

	f[ 0] = 0.0646;
	f[ 1] = 0.0453;
	f[ 2] = 0.0376;
	f[ 3] = 0.0422;
	f[ 4] = 0.0114;
	f[ 5] = 0.0606;
	f[ 6] = 0.0607;
	f[ 7] = 0.0639;
	f[ 8] = 0.0273;
	f[ 9] = 0.0679;
	f[10] = 0.1018;
	f[11] = 0.0751;
	f[12] = 0.0150;
	f[13] = 0.0287;
	f[14] = 0.0681;
	f[15] = 0.0488;
	f[16] = 0.0622;
	f[17] = 0.0251;
	f[18] = 0.0318;
	f[19] = 0.0619;
}

void get_VT(double **q, double *f) {
	/*
	* Dayhoff model for amino acid evolution 
	* Mueller, T. and Vingron, M. 
	* "Modeling Amino Acid Replacement" 
	* Journal of Comp. Biology, 7(6):761-776,2000
	*/

	/* amino acid frequencies */
	f[ 0]=0.0770764620135024 ; f[ 1]=0.0500819370772208 ;
	f[ 2]=0.0462377395993731 ; f[ 3]=0.0537929860758246 ;
	f[ 4]=0.0144533387583345 ; f[ 5]=0.0408923608974345 ;
	f[ 6]=0.0633579339160905 ; f[ 7]=0.0655672355884439 ;
	f[ 8]=0.0218802687005936 ; f[ 9]=0.0591969699027449 ;
	f[10]=0.0976461276528445 ; f[11]=0.0592079410822730 ;
	f[12]=0.0220695876653368 ; f[13]=0.0413508521834260 ;
	f[14]=0.0476871596856874 ; f[15]=0.0707295165111524 ;
	f[16]=0.0567759161524817 ; f[17]=0.0127019797647213 ;
	f[18]=0.0323746050281867 ; f[19]=0.0669190817443274 ;

	/* relative rates */

	q[ 0][ 1] = 1.2412691067876198;  q[ 0][ 2] = 1.2184237953498958;
	q[ 0][ 3] = 1.3759368509441177;  q[ 0][ 4] = 2.4731223087544874;
	q[ 0][ 5] = 2.2155167805137470;  q[ 0][ 6] = 2.3379911207495061;
	q[ 0][ 7] = 3.3386555146457697;  q[ 0][ 8] = 0.9615841926910841;
	q[ 0][ 9] = 0.8908203061925510;  q[ 0][10] = 1.0778497408764076;
	q[ 0][11] = 1.4932055816372476;  q[ 0][12] = 1.9006455961717605;
	q[ 0][13] = 0.6883439026872615;  q[ 0][14] = 2.7355620089953550;
	q[ 0][15] = 6.4208961859142883;  q[ 0][16] = 5.2892514169776437;
	q[ 0][17] = 0.5488578478106930;  q[ 0][18] = 0.5411769916657778;
	q[ 0][19] = 4.6501894691803214;

	q[ 1][ 2] = 1.5720770753326880;  q[ 1][ 3] = 0.7550654439001206;
	q[ 1][ 4] = 1.4414262567428417;  q[ 1][ 5] = 5.5120819705248678;
	q[ 1][ 6] = 1.3542404860613146;  q[ 1][ 7] = 1.3121700301622004;
	q[ 1][ 8] = 4.9238668283945266;  q[ 1][ 9] = 0.4323005487925516;
	q[ 1][10] = 0.8386701149158265;  q[ 1][11] = 10.0173308173660018;
	q[ 1][12] = 1.2488638689609959;  q[ 1][13] = 0.4224945197276290;
	q[ 1][14] = 1.3091837782420783;  q[ 1][15] = 1.9202994262316166;
	q[ 1][16] = 1.3363401740560601;  q[ 1][17] = 1.5170142153962840;
	q[ 1][18] = 0.8912614404565405;  q[ 1][19] = 0.7807017855806767;

	q[ 2][ 3] = 7.8584219153689405;  q[ 2][ 4] = 0.9784679122774127;
	q[ 2][ 5] = 3.0143201670924822;  q[ 2][ 6] = 2.0093434778398112;
	q[ 2][ 7] = 2.4117632898861809;  q[ 2][ 8] = 6.1974384977884114;
	q[ 2][ 9] = 0.9179291175331520;  q[ 2][10] = 0.4098311270816011;
	q[ 2][11] = 4.4034547578962568;  q[ 2][12] = 0.9378803706165143;
	q[ 2][13] = 0.5044944273324311;  q[ 2][14] = 0.7103720531974738;
	q[ 2][15] = 6.1234512396801764;  q[ 2][16] = 3.8852506105922231;
	q[ 2][17] = 0.1808525752605976;  q[ 2][18] = 1.0894926581511342;
	q[ 2][19] = 0.4586061981719967;

	q[ 3][ 4] = 0.2272488448121475;  q[ 3][ 5] = 1.6562495638176040;
	q[ 3][ 6] = 9.6883451875685065;  q[ 3][ 7] = 1.9142079025990228;
	q[ 3][ 8] = 2.1459640610133781;  q[ 3][ 9] = 0.2161660372725585;
	q[ 3][10] = 0.3574207468998517;  q[ 3][11] = 1.4521790561663968;
	q[ 3][12] = 0.4075239926000898;  q[ 3][13] = 0.1675129724559251;
	q[ 3][14] = 1.0714605979577547;  q[ 3][15] = 2.2161944596741829;
	q[ 3][16] = 1.5066839872944762;  q[ 3][17] = 0.2496584188151770;
	q[ 3][18] = 0.7447620891784513;  q[ 3][19] = 0.4594535241660911;

	q[ 4][ 5] = 0.4587469126746136;  q[ 4][ 6] = 0.4519167943192672;
	q[ 4][ 7] = 1.1034605684472507;  q[ 4][ 8] = 1.5196756759380692;
	q[ 4][ 9] = 0.9126668032539315;  q[ 4][10] = 1.4081315998413697;
	q[ 4][11] = 0.3371091785647479;  q[ 4][12] = 1.2213054800811556;
	q[ 4][13] = 1.6953951980808002;  q[ 4][14] = 0.4326227078645523;
	q[ 4][15] = 3.6366815408744255;  q[ 4][16] = 1.7557065205837685;
	q[ 4][17] = 1.6275179891253113;  q[ 4][18] = 2.1579775140421025;
	q[ 4][19] = 2.2627456996290891;

	q[ 5][ 6] = 6.8124601839937675;  q[ 5][ 7] = 0.8776110594765502;
	q[ 5][ 8] = 7.9943228564946525;  q[ 5][ 9] = 0.4882733432879921;
	q[ 5][10] = 1.3318097154194044;  q[ 5][11] = 6.0519085243118811;
	q[ 5][12] = 1.9106190827629084;  q[ 5][13] = 0.3573432522499545;
	q[ 5][14] = 2.3019177728300728;  q[ 5][15] = 2.3193703643237220;
	q[ 5][16] = 2.1576510103471440;  q[ 5][17] = 0.8959082681546182;
	q[ 5][18] = 0.9183596801412757;  q[ 5][19] = 0.6366932501396869;

	q[ 6][ 7] = 1.3860121390169038;  q[ 6][ 8] = 1.6360079688522375;
	q[ 6][ 9] = 0.4035497929633328;  q[ 6][10] = 0.5610717242294755;
	q[ 6][11] = 4.3290086529582830;  q[ 6][12] = 0.7471936218068498;
	q[ 6][13] = 0.2317194387691585;  q[ 6][14] = 1.5132807416252063;
	q[ 6][15] = 1.8273535587773553;  q[ 6][16] = 1.5839981708584689;
	q[ 6][17] = 0.4198391148111098;  q[ 6][18] = 0.5818111331782764;
	q[ 6][19] = 0.8940572875547330;

	q[ 7][ 8] = 0.8561248973045037;  q[ 7][ 9] = 0.2888075033037488;
	q[ 7][10] = 0.3578662395745526;  q[ 7][11] = 0.8945563662345198;
	q[ 7][12] = 0.5954812791740037;  q[ 7][13] = 0.3693722640980460;
	q[ 7][14] = 0.7744933618134962;  q[ 7][15] = 3.0637776193717610;
	q[ 7][16] = 0.7147489676267383;  q[ 7][17] = 0.9349753595598769;
	q[ 7][18] = 0.3374467649724478;  q[ 7][19] = 0.6193321034173915;

	q[ 8][ 9] = 0.5787937115407940;  q[ 8][10] = 1.0765007949562073;
	q[ 8][11] = 1.8085136096039203;  q[ 8][12] = 1.3808291710019667;
	q[ 8][13] = 1.3629765501081097;  q[ 8][14] = 1.8370555852070649;
	q[ 8][15] = 1.9699895187387506;  q[ 8][16] = 1.6136654573285647;
	q[ 8][17] = 0.6301954684360302;  q[ 8][18] = 7.7587442309146040;
	q[ 8][19] = 0.5333220944030346;

	q[ 9][10] = 6.0019110258426362;  q[ 9][11] = 0.6244297525127139;
	q[ 9][12] = 6.7597899772045418;  q[ 9][13] = 2.2864286949316077;
	q[ 9][14] = 0.4811402387911145;  q[ 9][15] = 0.6047491507504744;
	q[ 9][16] = 2.6344778384442731;  q[ 9][17] = 0.5604648274060783;
	q[ 9][18] = 0.8626796044156272;  q[ 9][19] = 14.8729334615190609;

	q[10][11] = 0.5642322882556321;  q[10][12] = 8.0327792947421148;
	q[10][13] = 4.3611548063555778;  q[10][14] = 1.0084320519837335;
	q[10][15] = 0.8953754669269811;  q[10][16] = 1.0192004372506540;
	q[10][17] = 1.5183114434679339;  q[10][18] = 1.2452243224541324;
	q[10][19] = 3.5458093276667237;

	q[11][12] = 1.7129670976916258;  q[11][13] = 0.3910559903834828;
	q[11][14] = 1.3918935593582853;  q[11][15] = 1.9776630140912268;
	q[11][16] = 2.5513781312660280;  q[11][17] = 0.5851920879490173;
	q[11][18] = 0.7835447533710449;  q[11][19] = 0.7801080335991272;

	q[12][13] = 2.3201373546296349;  q[12][14] = 0.4953193808676289;
	q[12][15] = 1.0657482318076852;  q[12][16] = 3.3628488360462363;
	q[12][17] = 1.4680478689711018;  q[12][18] = 1.0899165770956820;
	q[12][19] = 4.0584577156753401;

	q[13][14] = 0.3746821107962129;  q[13][15] = 1.1079144700606407;
	q[13][16] = 0.6882725908872254;  q[13][17] = 3.3448437239772266;
	q[13][18] = 10.3848523331334590;  q[13][19] = 1.7039730522675411;

	q[14][15] = 3.5465914843628927;  q[14][16] = 1.9485376673137556;
	q[14][17] = 0.4326058001438786;  q[14][18] = 0.4819109019647465;
	q[14][19] = 0.5985498912985666;

	q[15][16] = 8.8479984061248178;  q[15][17] = 0.6791126595939816;
	q[15][18] = 0.9547229305958682;  q[15][19] = 0.9305232113028208;

	q[16][17] = 0.4514203099376473;  q[16][18] = 0.8564314184691215;
	q[16][19] = 3.4242218450865543;

	q[17][18] = 4.5377235790405388;  q[17][19] = 0.5658969249032649;

	q[18][19] = 1.0000000000000000;


} /* vt data */

void ModelProtein::init(const char *model_name, StateFreqType freq) {
	assert(num_states == 20);
	name = model_name;
	string model_str;
	if (name == "WAG") { model_str = model_WAG;}
	else if (name == "cpREV") model_str = model_cpREV;
	else if (name == "mtREV") model_str = model_mtREV;
	else if (name == "Dayhoff") model_str = model_Dayhoff;
	else if (name == "mtMAM") model_str = model_mtMAM;
	else if (name == "JTT") model_str = model_JTT;
	else if (name == "LG") model_str = model_LG;
	else if (name == "mtART") model_str = model_mtART;
	else if (name == "mtZOA") model_str = model_mtZOA;
	else if (name == "VT" || name == "rtREV") {
		double *q[num_states];
		int i, j, k;
		for (i = 0; i < num_states; i++)
			q[i] = new double[num_states];
		if (name == "VT") 
			get_VT(q, state_freq);
		else 
			get_rtREV(q, state_freq);

		for (i = 0, k = 0; i < num_states-1; i++)
			for (j = i+1; j < num_states; j++)
				rates[k++] = q[i][j];
		for (i = num_states-1; i >= 0; i--)
			delete q[i];
	} else {
		outError("Invalid model name: " + name);	
	}

	if (!model_str.empty()) {
		try {
			istringstream in(model_str);
			readRates(in);
			readStateFreq(in);
		}
		catch (const char *str) {
			outError(str);
		} 
	}
	assert(freq != FREQ_ESTIMATE);
	if (freq == FREQ_UNKNOWN) freq = FREQ_USER_DEFINED;
	GTRModel::init(freq);
}

ModelProtein::ModelProtein(const char *model_name, StateFreqType freq, PhyloTree *tree)
 : ModelUser(tree)
{
	init(model_name, freq);
}


void ModelProtein::readRates(istream &in) throw(const char*) {
	int nrates = num_states*(num_states-1)/2;
	int row = 1, col = 0;
	// since states for protein is stored in lower-triangle, special treatment is needed
	for (int i = 0; i < nrates; i++, col++) {
		if (col == row) {
			row++; col = 0;
		}
		// switch col and row
		int id = col*(2*num_states-col-1)/2 + (row-col-1);
		if (id >= nrates) {
			cout << row << " " << col << endl;
		}
		assert(id < nrates && id >= 0); // make sure that the conversion is correct
		if (!(in >> rates[id]))
			throw "Rate entries could not be read";
		if (rates[id] < 0.0)
			throw "Negative rates found";
	}
}

