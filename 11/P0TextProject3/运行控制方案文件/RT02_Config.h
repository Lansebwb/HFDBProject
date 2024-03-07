/********* mBASE_Version:1_1.02.07 ****************//*对应的总线消息库版本信息*/
unsigned int ConfigVersion=0x1;/*控制文件版本描述*/
unsigned short BusNum=1;/*总线序号*/
unsigned short MODE=2;/*BC=0(终端地址61),BBC=1(终端地址60),RT=2,BM=3*/
unsigned short DEV_ID=2;
/******************总线RT运行控制参数******************/
unsigned short RT_RunProperty_A[4]={
1,/*总线速度参数1=1.25Gbps,2=2.0Gbps*/
2,/*备用*/
40,/*RT建链操作时，BC确认指令超时时钟计数控制参数（100ns）*/
20/*总线链路消息操作中断计数器“总线通信小周期同步指令”计数控制参数（≥20ms）*/
};
/******************总线终端RT2接收消息数量控制数组******************/
const unsigned short RT_RX_Msg_Num[61][4]={
{61,24,12,1},/*发送端地址，优先级2队列接收消息数，优先级1队列接收消息数，优先级0队列接收消息数*/
{0,0,0,0},
{0,0,0,0},
{1,13,13,0},
{2,14,17,0},
{3,9,10,1},
{4,15,13,16},
{5,10,10,0},
{6,7,7,15},
{7,10,12,1},
{8,9,11,1},
{9,5,7,1},
{10,6,6,1},
{11,6,5,1},
{12,10,9,0},
{13,9,15,15},
{14,7,5,0},
{15,9,5,1},
{16,9,8,1},
{17,0,0,0},
{18,0,0,0},
{19,0,0,0},
{20,0,0,0},
{21,0,0,0},
{22,0,0,0},
{23,0,0,0},
{24,0,0,0},
{25,0,0,0},
{26,0,0,0},
{27,0,0,0},
{28,0,0,0},
{29,0,0,0},
{30,0,0,0},
{31,0,0,0},
{32,0,0,0},
{33,0,0,0},
{34,0,0,0},
{35,0,0,0},
{36,0,0,0},
{37,0,0,0},
{38,0,0,0},
{39,0,0,0},
{40,0,0,0},
{41,0,0,0},
{42,0,0,0},
{43,0,0,0},
{44,0,0,0},
{45,0,0,0},
{46,0,0,0},
{47,0,0,0},
{48,0,0,0},
{49,0,0,0},
{50,0,0,0},
{51,0,0,0},
{52,0,0,0},
{53,0,0,0},
{54,0,0,0},
{55,0,0,0},
{56,0,0,0},
{57,0,0,0},
{58,0,0,0}
};
/******************总线RT终端接收消息描述数组（据此建立收发消息的逻辑关联关系）******************/
const unsigned short RT_RX_Msg[256][8]={
{0,0,61,111,2,147,0,1},/*终端xx接受消息序号，接收终端地址识别开关（1表示需要识别应用消
息的接受终端地址，0表示不需要识别），发送终端DEV_ID，发送APP_ID，优先级，发送终端MSG_ID，周期
数据过滤频率控制因子（0：不适应，非零：有效数据提取的间隔次数），XXX接收虚拟缓存分发标识（1有
效，最高位对应VIO区0，最低位对应VIO区7）*/
{1,0,61,111,2,148,0,1},
{2,0,61,111,1,149,0,1},
{3,0,61,111,1,150,0,1},
{4,0,61,111,1,151,0,1},
{5,0,3,111,2,22,0,1},
{6,0,3,111,1,23,0,1},
{7,0,3,111,1,24,0,1},
{8,0,3,111,1,25,0,1},
{9,0,5,111,2,37,0,1},
{10,0,5,111,2,38,0,1},
{11,0,5,111,2,39,0,1},
{12,0,5,111,2,40,0,1},
{13,0,5,111,1,41,0,1},
{14,0,5,111,1,42,0,1},
{15,0,7,111,2,57,0,1},
{16,0,7,111,2,58,0,1},
{17,0,7,111,1,59,0,1},
{18,0,7,111,1,60,0,1},
{19,0,7,111,1,61,0,1},
{20,0,8,111,1,71,0,1},
{21,0,9,111,2,73,0,1},
{22,0,9,111,2,74,0,1},
{23,0,9,111,1,77,0,1},
{24,0,9,111,1,78,0,1},
{25,0,10,111,2,83,0,1},
{26,0,10,111,2,84,0,1},
{27,0,10,111,2,85,0,1},
{28,0,10,111,1,86,0,1},
{29,0,10,111,1,87,0,1},
{30,0,10,111,1,88,0,1},
{31,0,0,0,0,0,0,0},
{32,0,0,0,0,0,0,0},
{33,0,0,0,0,0,0,0},
{34,0,0,0,0,0,0,0},
{35,0,0,0,0,0,0,0},
{36,0,0,0,0,0,0,0},
{37,0,0,0,0,0,0,0},
{38,0,0,0,0,0,0,0},
{39,0,0,0,0,0,0,0},
{40,0,0,0,0,0,0,0},
{41,0,0,0,0,0,0,0},
{42,0,0,0,0,0,0,0},
{43,0,0,0,0,0,0,0},
{44,0,0,0,0,0,0,0},
{45,0,0,0,0,0,0,0},
{46,0,0,0,0,0,0,0},
{47,0,0,0,0,0,0,0},
{48,0,0,0,0,0,0,0},
{49,0,0,0,0,0,0,0},
{50,0,0,0,0,0,0,0},
{51,0,0,0,0,0,0,0},
{52,0,0,0,0,0,0,0},
{53,0,0,0,0,0,0,0},
{54,0,0,0,0,0,0,0},
{55,0,0,0,0,0,0,0},
{56,0,0,0,0,0,0,0},
{57,0,0,0,0,0,0,0},
{58,0,0,0,0,0,0,0},
{59,0,0,0,0,0,0,0},
{60,0,0,0,0,0,0,0},
{61,0,0,0,0,0,0,0},
{62,0,0,0,0,0,0,0},
{63,0,0,0,0,0,0,0},
{64,0,0,0,0,0,0,0},
{65,0,0,0,0,0,0,0},
{66,0,0,0,0,0,0,0},
{67,0,0,0,0,0,0,0},
{68,0,0,0,0,0,0,0},
{69,0,0,0,0,0,0,0},
{70,0,0,0,0,0,0,0},
{71,0,0,0,0,0,0,0},
{72,0,0,0,0,0,0,0},
{73,0,0,0,0,0,0,0},
{74,0,0,0,0,0,0,0},
{75,0,0,0,0,0,0,0},
{76,0,0,0,0,0,0,0},
{77,0,0,0,0,0,0,0},
{78,0,0,0,0,0,0,0},
{79,0,0,0,0,0,0,0},
{80,0,0,0,0,0,0,0},
{81,0,0,0,0,0,0,0},
{82,0,0,0,0,0,0,0},
{83,0,0,0,0,0,0,0},
{84,0,0,0,0,0,0,0},
{85,0,0,0,0,0,0,0},
{86,0,0,0,0,0,0,0},
{87,0,0,0,0,0,0,0},
{88,0,0,0,0,0,0,0},
{89,0,0,0,0,0,0,0},
{90,0,0,0,0,0,0,0},
{91,0,0,0,0,0,0,0},
{92,0,0,0,0,0,0,0},
{93,0,0,0,0,0,0,0},
{94,0,0,0,0,0,0,0},
{95,0,0,0,0,0,0,0},
{96,0,0,0,0,0,0,0},
{97,0,0,0,0,0,0,0},
{98,0,0,0,0,0,0,0},
{99,0,0,0,0,0,0,0},
{100,0,0,0,0,0,0,0},
{101,0,0,0,0,0,0,0},
{102,0,0,0,0,0,0,0},
{103,0,0,0,0,0,0,0},
{104,0,0,0,0,0,0,0},
{105,0,0,0,0,0,0,0},
{106,0,0,0,0,0,0,0},
{107,0,0,0,0,0,0,0},
{108,0,0,0,0,0,0,0},
{109,0,0,0,0,0,0,0},
{110,0,0,0,0,0,0,0},
{111,0,0,0,0,0,0,0},
{112,0,0,0,0,0,0,0},
{113,0,0,0,0,0,0,0},
{114,0,0,0,0,0,0,0},
{115,0,0,0,0,0,0,0},
{116,0,0,0,0,0,0,0},
{117,0,0,0,0,0,0,0},
{118,0,0,0,0,0,0,0},
{119,0,0,0,0,0,0,0},
{120,0,0,0,0,0,0,0},
{121,0,0,0,0,0,0,0},
{122,0,0,0,0,0,0,0},
{123,0,0,0,0,0,0,0},
{124,0,0,0,0,0,0,0},
{125,0,0,0,0,0,0,0},
{126,0,0,0,0,0,0,0},
{127,0,0,0,0,0,0,0},
{128,0,0,0,0,0,0,0},
{129,0,0,0,0,0,0,0},
{130,0,0,0,0,0,0,0},
{131,0,0,0,0,0,0,0},
{132,0,0,0,0,0,0,0},
{133,0,0,0,0,0,0,0},
{134,0,0,0,0,0,0,0},
{135,0,0,0,0,0,0,0},
{136,0,0,0,0,0,0,0},
{137,0,0,0,0,0,0,0},
{138,0,0,0,0,0,0,0},
{139,0,0,0,0,0,0,0},
{140,0,0,0,0,0,0,0},
{141,0,0,0,0,0,0,0},
{142,0,0,0,0,0,0,0},
{143,0,0,0,0,0,0,0},
{144,0,0,0,0,0,0,0},
{145,0,0,0,0,0,0,0},
{146,0,0,0,0,0,0,0},
{147,0,0,0,0,0,0,0},
{148,0,0,0,0,0,0,0},
{149,0,0,0,0,0,0,0},
{150,0,0,0,0,0,0,0},
{151,0,0,0,0,0,0,0},
{152,0,0,0,0,0,0,0},
{153,0,0,0,0,0,0,0},
{154,0,0,0,0,0,0,0},
{155,0,0,0,0,0,0,0},
{156,0,0,0,0,0,0,0},
{157,0,0,0,0,0,0,0},
{158,0,0,0,0,0,0,0},
{159,0,0,0,0,0,0,0},
{160,0,0,0,0,0,0,0},
{161,0,0,0,0,0,0,0},
{162,0,0,0,0,0,0,0},
{163,0,0,0,0,0,0,0},
{164,0,0,0,0,0,0,0},
{165,0,0,0,0,0,0,0},
{166,0,0,0,0,0,0,0},
{167,0,0,0,0,0,0,0},
{168,0,0,0,0,0,0,0},
{169,0,0,0,0,0,0,0},
{170,0,0,0,0,0,0,0},
{171,0,0,0,0,0,0,0},
{172,0,0,0,0,0,0,0},
{173,0,0,0,0,0,0,0},
{174,0,0,0,0,0,0,0},
{175,0,0,0,0,0,0,0},
{176,0,0,0,0,0,0,0},
{177,0,0,0,0,0,0,0},
{178,0,0,0,0,0,0,0},
{179,0,0,0,0,0,0,0},
{180,0,0,0,0,0,0,0},
{181,0,0,0,0,0,0,0},
{182,0,0,0,0,0,0,0},
{183,0,0,0,0,0,0,0},
{184,0,0,0,0,0,0,0},
{185,0,0,0,0,0,0,0},
{186,0,0,0,0,0,0,0},
{187,0,0,0,0,0,0,0},
{188,0,0,0,0,0,0,0},
{189,0,0,0,0,0,0,0},
{190,0,0,0,0,0,0,0},
{191,0,0,0,0,0,0,0},
{192,0,0,0,0,0,0,0},
{193,0,0,0,0,0,0,0},
{194,0,0,0,0,0,0,0},
{195,0,0,0,0,0,0,0},
{196,0,0,0,0,0,0,0},
{197,0,0,0,0,0,0,0},
{198,0,0,0,0,0,0,0},
{199,0,0,0,0,0,0,0},
{200,0,0,0,0,0,0,0},
{201,0,0,0,0,0,0,0},
{202,0,0,0,0,0,0,0},
{203,0,0,0,0,0,0,0},
{204,0,0,0,0,0,0,0},
{205,0,0,0,0,0,0,0},
{206,0,0,0,0,0,0,0},
{207,0,0,0,0,0,0,0},
{208,0,0,0,0,0,0,0},
{209,0,0,0,0,0,0,0},
{210,0,0,0,0,0,0,0},
{211,0,0,0,0,0,0,0},
{212,0,0,0,0,0,0,0},
{213,0,0,0,0,0,0,0},
{214,0,0,0,0,0,0,0},
{215,0,0,0,0,0,0,0},
{216,0,0,0,0,0,0,0},
{217,0,0,0,0,0,0,0},
{218,0,0,0,0,0,0,0},
{219,0,0,0,0,0,0,0},
{220,0,0,0,0,0,0,0},
{221,0,0,0,0,0,0,0},
{222,0,0,0,0,0,0,0},
{223,0,0,0,0,0,0,0},
{224,0,0,0,0,0,0,0},
{225,0,0,0,0,0,0,0},
{226,0,0,0,0,0,0,0},
{227,0,0,0,0,0,0,0},
{228,0,0,0,0,0,0,0},
{229,0,0,0,0,0,0,0},
{230,0,0,0,0,0,0,0},
{231,0,0,0,0,0,0,0},
{232,0,0,0,0,0,0,0},
{233,0,0,0,0,0,0,0},
{234,0,0,0,0,0,0,0},
{235,0,0,0,0,0,0,0},
{236,0,0,0,0,0,0,0},
{237,0,0,0,0,0,0,0},
{238,0,0,0,0,0,0,0},
{239,0,0,0,0,0,0,0},
{240,0,0,0,0,0,0,0},
{241,0,0,0,0,0,0,0},
{242,0,0,0,0,0,0,0},
{243,0,0,0,0,0,0,0},
{244,0,0,0,0,0,0,0},
{245,0,0,0,0,0,0,0},
{246,0,0,0,0,0,0,0},
{247,0,0,0,0,0,0,0},
{248,0,0,0,0,0,0,0},
{249,0,0,0,0,0,0,0},
{250,0,0,0,0,0,0,0},
{251,0,0,0,0,0,0,0},
{252,0,0,0,0,0,0,0},
{253,0,0,0,0,0,0,0},
{254,0,0,0,0,0,0,0},
{255,0,0,0,0,0,0,0}
};/*接收消息数最大为 256*/
