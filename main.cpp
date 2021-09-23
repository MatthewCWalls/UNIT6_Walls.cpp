#include <iostream>
using namespace std;

int main() {
  int start= clock();
  void printArray(int array , int);
  int i, j, temp, arraysize=2010, pass=0;
  int a[2010]= {27186,9815,6659,32204,31103,18652,3842,5883,19640,26221,27293,912,11826,656,28889,512,25124,2850,22572,2346,9863,10371,7068,18943,6645,16209,30721,3913,22467,25431,11959,10064,5512,24195,8517,11842,19212,901,7840,3446,25119,22602,27986,17022,30332,22881,26742,9319,20951,8711,21147,31951,29261,11919,17134,12616,5454,5408,31117,9831,25564,25643,12534,27813,2527,7406,10024,3863,11905,21209,6939,8094,2700,1191,7466,27640,14458,2697,7291,25789,29674,2885,7209,25537,22644,31096,230,5191,30169,8234,18395,9538,20088,21248,2407,14146,16321,20709,2653,11249,296,18427,28008,22435,3721,32109,14184,17782,5798,17395,13864,10026,9637,23983,7328,647,26275,27492,784,16900,18165,16455,24684,31915,12610,2218,32112,17727,20252,12225,3362,16795,31985,28281,16982,3195,14008,22715,27196,17494,31583,6165,20920,11664,23209,8387,21026,27440,23596,30810,8761,13330,6179,23235,1704,12647,497,31373,20733,12744,31590,27485,8993,23052,9411,12410,1422,29844,31286,31894,12010,24882,2928,2879,2496,5505,30089,5535,32673,12250,10964,17632,17910,8109,2034,2196,3707,5621,10558,21118,19029,16776,30913,11674,8297,13676,31155,20424,19892,21893,1535,20402,9470,22561,393,22004,4971,4892,6525,1279,31819,8766,147,6540,31033,25572,26584,27025,26655,12630,17139,31631,1766,11284,27163,22738,18789,39,31050,29678,14706,20648,7490,20250,28293,22022,29381,23636,27617,26883,29940,4661,9214,8254,23121,11177,12263,21707,31008,7344,27838,21216,1762,9208,8478,25169,6224,3404,17352,22004,25797,19804,15756,19662,21204,2297,3383,4827,31795,23135,5772,7485,1343,4902,26812,28005,8112,15051,15720,25501,17092,23870,27689,21248,23276,13280,10041,20963,25168,29636,26747,4571,20821,19827,25584,31977,7051,31824,16551,22770,22857,17761,27759,27427,21296,27965,1309,6523,18371,876,31797,9196,76,17687,31626,266,3592,14665,25368,9620,26168,19677,30362,27457,362,29606,31691,947,14749,23975,25986,31050,25460,25158,31861,29262,10432,30574,20407,29707,1763,1663,9844,11718,10679,13286,1303,15860,15412,18656,29448,704,25470,17815,10081,24569,1768,12183,15002,13403,268,16597,21943,11477,31378,4335,31944,8819,16297,24878,12194,3307,1368,9748,24446,23779,5208,23386,6337,17469,23435,21460,13216,17340,22029,4307,8980,27457,11892,22566,20025,28712,29943,10161,18852,25278,22134,19604,19746,25698,26892,7783,12761,16841,7984,5866,28278,27847,11452,28769,32232,7316,29248,29368,31372,12097,19052,17860,22281,2520,13234,14230,24571,8495,15887,30158,14936,31675,16747,24857,2581,32730,11802,22644,16313,22705,11508,9996,10723,29182,18827,353,1552,16322,30101,9566,8803,11480,27349,883,11389,2818,16008,11430,2230,20980,31210,18742,17588,29262,15287,21868,12650,16007,27049,25632,30312,10145,21877,22895,5167,12337,5991,29044,8329,25946,20978,1954,26483,30276,17766,22826,8351,11917,10587,24741,13783,25106,25457,14373,3496,28696,2073,2779,22384,19422,23267,15518,8019,18692,26755,22149,10574,19803,7634,6311,12076,32661,7120,31575,5531,17898,19256,29695,15726,4074,4182,4748,32628,22512,21558,29628,10085,20504,8528,4463,27978,21003,12506,895,18833,23881,17076,12763,23874,25074,23822,2339,7180,25624,27087,18200,1817,568,2184,4415,29628,24103,10668,30495,28517,20318,7904,20421,30596,3587,6294,12614,6212,21471,3895,1455,1124,22888,14888,1200,19381,26127,1276,31100,12318,8625,22443,10781,29784,26135,5584,13811,22039,24839,26331,11780,14666,1353,17032,12136,7756,8834,23853,10481,6688,17330,3030,17777,15008,25193,5191,23954,6274,31645,17667,21470,10999,821,12870,25887,5323,9807,16882,11096,13494,19195,24296,19418,25504,97,30492,22244,24265,19583,27860,8389,19056,22361,9573,2389,12068,13810,1159,1273,336,5500,13558,27209,7030,16189,19617,14384,4279,5109,30039,16462,6778,22594,425,31063,25051,22208,4805,8779,2072,18290,27986,21312,8418,6398,13073,28723,6729,8144,13352,5854,8228,31660,22245,20432,31098,21746,32233,21900,17416,15312,19987,20453,10962,15066,5114,10077,8048,4253,18492,8507,24453,28335,12024,27229,20631,13601,19738,2602,26704,31876,21249,29012,24296,11391,12819,22217,146,5596,18544,18814,21028,709,29949,3272,24753,21412,29971,22550,31719,10217,15935,6037,3025,19876,6170,4585,29806,1387,11901,30353,6368,18628,12593,30761,7177,6839,1738,13333,19376,23718,10673,22325,2748,16197,11234,4536,11911,14421,11452,32021,14328,9479,32737,25410,332,7464,31133,16106,19551,22698,3991,1787,16233,15889,25076,11640,6,18620,6981,18254,12763,28907,4954,19102,8094,20401,5272,14099,32551,1685,17036,27240,21385,22634,17918,18144,28446,11725,19572,11244,3012,30641,31170,26403,9378,31797,26456,8002,1019,16572,8592,2051,25568,6144,3390,16189,11142,11720,12579,11582,6085,1020,24118,24240,23765,12616,6536,6532,11627,16157,22554,2661,14509,26435,5118,18938,2292,16345,26371,10772,10558,27099,13924,6139,19208,21181,106,23564,2547,32526,7393,23591,23262,2846,12486,8258,12401,12605,20216,23403,11398,17390,16932,26884,7224,26371,26758,7053,2029,9735,26613,4244,25065,14940,30997,31330,10434,18501,11030,1105,32754,8765,32416,1985,27693,17818,9954,12098,10846,31996,23219,12227,25898,5035,1718,20250,17376,11606,9093,14350,7352,31919,6473,26656,10863,18121,15467,28686,30556,24024,15792,32115,13822,14752,13254,14709,13734,13091,25608,3248,18469,2544,32348,15189,18854,2197,23048,3303,5068,24654,19110,10175,18310,8262,8696,23148,21549,11804,20607,30897,2995,31635,8417,2531,708,12944,13424,28325,19798,32131,1761,5778,15327,26865,20293,26701,14354,2841,29422,16632,27169,19360,28095,24579,21508,26163,31134,15382,254,25328,26031,30999,30690,32321,25733,30949,1781,18897,12440,3112,15466,6573,13929,30981,28745,11747,5577,3819,28025,2575,15956,4740,21338,21374,20597,2365,16596,5237,18997,30781,20424,20899,2161,1634,12031,22047,22455,11125,6690,3327,26163,5813,9998,13761,30792,13404,32218,29800,1452,825,31264,24592,31677,8384,20372,9353,3292,18907,18413,26133,23262,20777,14870,25476,13876,22077,27066,21164,18887,3612,2190,22778,12375,12397,21864,29726,20489,14386,4310,394,20359,2005,13977,9653,17101,10047,10465,8374,12045,5710,2083,7362,925,30165,8867,24315,2894,21534,19490,7025,29772,1998,8690,21838,20311,23372,7566,29537,10075,5005,16467,604,2853,9628,14868,28901,29131,22346,23197,2372,18912,1534,20358,8018,10783,27798,5358,9401,2515,23419,19528,21961,3609,23996,6494,27806,27114,171,11889,9085,32598,14831,22107,26539,31453,26728,20858,294,1305,26170,2493,26005,1144,11598,1764,9548,18299,21160,13775,18899,31102,5892,23039,30639,1857,3133,13825,16912,18253,15790,15309,26547,27332,23934,2297,24238,10245,210,30634,22741,22460,20688,3618,10024,8430,31878,15914,28534,30455,28886,25859,3844,24720,1249,18305,18304,28192,5268,21762,9133,16996,29896,2857,1452,20821,24077,9286,26275,22591,19166,20137,17287,19685,21393,3306,2681,31736,9188,23017,3425,3521,9483,4038,13500,5554,8165,29482,2258,32090,16348,15437,31195,30166,9269,25010,24957,31721,19776,9597,896,23536,14783,6614,18751,25191,6175,9159,13545,1412,31867,25014,12260,15288,8425,13404,11360,27343,11731,12836,22062,21203,22233,15977,13247,8512,361,21321,1712,27090,1958,18196,3486,13716,10386,14614,3781,11330,6037,9545,4023,12886,30275,28588,2235,13620,32108,5803,9832,28942,12940,31775,10216,20419,20176,12104,12447,18239,22939,29273,32334,28435,25296,32196,7776,6689,4108,9484,8939,14621,12764,26164,24530,26293,2829,16593,14085,26041,9096,9670,32140,21912,2128,22525,2022,8613,27499,10773,9815,1191,14125,24800,29162,7076,28779,26276,6620,19057,8517,27721,14551,24527,31248,7123,6880,23048,13937,26252,16585,11202,2475,4744,32497,22409,7411,2440,29279,29771,21894,10255,1223,8342,19509,16980,7085,27578,22110,9775,21900,17822,17765,12669,20298,30175,14285,19276,30985,29556,29402,6429,6547,7555,18034,5914,3916,22223,21539,36,25525,19668,10006,26709,22057,21927,8687,3730,860,16635,15326,14438,23538,21605,609,10921,17654,28423,7565,18923,17409,8068,15223,11015,13800,22190,30774,28557,11538,31759,3731,1659,4916,3502,27636,10421,7314,21502,3387,17891,2150,9418,19340,12756,19776,28038,17595,8529,22966,26029,13321,20087,25298,7883,4916,7561,11227,20267,424,882,20385,31105,22071,13115,23264,9121,6088,12169,11344,31870,26638,1493,14565,21386,19088,29093,23815,29481,3634,29618,7399,3191,31367,5004,8930,19838,4276,22021,24733,15074,7017,16475,9064,25816,12173,6844,19517,23494,28886,9849,846,21724,4091,32575,30139,4315,17581,17597,27871,18755,2436,5874,18602,2232,15425,2781,15819,25629,28498,29827,17145,29305,15019,9593,8979,10781,4036,16823,29215,25236,28639,18016,7567,13520,10654,19761,25480,17627,19812,31173,17430,17649,808,6729,2613,13826,6838,8597,7240,12571,9489,19216,4838,25886,19648,47,3510,6039,30723,20727,16234,27608,5366,21517,18057,11303,10533,11481,10428,25200,22022,26168,25675,29914,18177,11074,14097,21155,19718,5540,22058,19310,32157,30271,13842,4924,18365,22942,14832,686,13723,2577,10981,960,12640,28188,26522,8685,8119,5767,30883,5761,6352,23680,31532,17052,25373,6883,28526,5413,5197,23560,28466,15938,14916,5781,6506,4679,4114,5434,17950,1477,18246,32010,30719,2258,9831,11216,21351,11415,19972,14223,27500,16446,6411,4865,28943,27933,20337,25570,11635,10962,25852,6191,20742,11666,14060,10997,8098,6522,13091,16472,9602,22309,26464,32532,11420,20216,6458,3282,3664,8978,31658,19783,9011,12895,14363,31786,5290,23549,31373,12759,16752,7986,17718,9279,538,29648,5139,3107,7363,6045,30430,4810,2667,14555,15135,25147,13274,27519,7107,14867,5075,26358,5057,24820,15886,15719,24482,3984,25521,19437,15197,26991,15174,11412,24610,10858,6545,14465,26047,2339,24241,20925,15966,8294,11613,409,9934,28182,11747,10777,19075,6045,6392,26527,1608,25788,5399,742,16536,1009,28806,21531,10204,12698,16537,30093,20052,20286,28721,32736,26506,9398,17079,2812,17279,15261,28996,16024,18186,6525,27823,10970,24428,10074,19390,24148,28323,12696,18542,4538,10083,31316,25828,17542,20688,32192,20520,10102,4884,27898,3665,13190,13704,29639,22548,13642,9593,2320,25748,28286,3830,1337,7634,10564,14781,15600,3974,17253,32538,26178,6220,19283,25842,6678,8583,23917,25228,6391,29199,1527,20164,24544,22188,9222,2636,7398,3967,11044,19574,17431,8059,21818,2937,14256,8519,27710,23251,661,13935,31822,12621,10035,2828,4599,19671,7673,31443,24495,10910,12844,21786,24441,9788,25481,28268,910,480,30888,30643,29283,8759,13413,32514,26859,19322,6568,3385,24353,22545,20175,14294,17117,15278,16264,24622,16375,18531,21047,4742,30242,653,26970,22786,27329,24348,299,25080,22924,25025,21298,1790,2031,8098,21639,15681,22464,27926,13282,24264,21424,16814,19299,25519,17739,19457,8955,20587,26633,32442,922,20057,30722,8090,24001,1479,3413,12587,3835,1769,28501,26067,20111,29122,13453,12132,10626,26240,9948,20440,11744,22493,27934,32403,27917,4856,32617,1741,20689,6840,24174,4598,24454,27570,1107,18287,15629,28649,2839,19630,16506,6904,13754,4708,26172,3595,27286,25987,19295,11114,27186,27643,3465,2537,13335,7481,15452,21785,19641,19418,6098,24146,2893,28982,17684,12360,30258,27105,21392,2497,7861,5573,18364,8159,9147,2844,5001,17417,11462,3078,7874,4142,5486,20126,14309,3513,21428,6527,28551,6747,13205,16310,15158,16839,1506,16326,1814,14285,12880,8106,7535,25023,31543,5313,1998,29773,3607,28411,4878,2986,32241,1150,16252,30894,26067,15101,13002,26682,32646,6016,21823,23370,26961,6681,30870,26368,30921,20777,7990,24225,19772,3609,22750,19902,13949,7045,22515,10698,30710,14681,19237,30491,22992,32428,7188,4525,25886,28848,10123,7237,667,4984,4213,15651,3933,14703,28387,11346,20295,14911,20996,18798,2777,12248,6469,841,7356,8150,22537,6042,23702,10200,21330,19025,14007,1045,16995,5857,1387,5857};
 //for for if to compare two arrays
 for (i=0; i<arraysize;i++){
   for (j=i+1;j<arraysize; j++){
     if(a[j]<a[i]){
//how we execute switch if j<i
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
     }
   }
//for counter at the end   
   pass++;
 }
 //Display sorted loop
cout<<"sorted element list...\n";
for (int i=0;i<arraysize;i++){
  cout<<a[i]<<"\t";
}
 cout<<"\n Number of passes taken to sort the list: "<<pass<<endl;
int end= clock();
cout<<"end time- start time = : "<<end-start<<endl;
 }
