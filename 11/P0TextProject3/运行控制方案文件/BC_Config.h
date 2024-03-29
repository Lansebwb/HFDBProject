/********* mBASE_Version:1_1.02.07 ****************//*对应的总线消息库版本信息*/
unsigned int ConfigVersion=0x1;/*控制文件版本描述*/
unsigned short BusNum=1;/*总线序号*/
unsigned short MODE=0;/*BC=0(终端地址61),BBC=1(终端地址60),RT=2,BM=3*/
unsigned short DEV_ID=61;
/******************总线BC运行控制参数******************/
unsigned short BC_RunProperty_A[16]={
1,/*总线速度参数1=1.25Gbps,2=2.0Gbps*/
80,/*BC总线监视定时器上电初始化控制初值(ms)*/
160,/*BBC总线监视定时器上电初始化控制初值(ms)*/
40,/*建链时间超时门限(100ns)*/
1000,/*BC发送小周期定时器控制参数(us)*/
984,/*RT发送小周期定时器控制参数(us)=BC发送小周期定时器控制参数-16us/总线速度参数,用于控制终止RT数据发送*/
15,/*RT响应超时定时器控制参数(100ns)*/
80,/*RT建链连续IDLE判定门限长度*/
20,/*总线链路“总线通信小周期同步指令”消息操作中断时钟计数控制参数(≥20ms)*/
32,/*RT上网查询查询指令发送间隔“BC发送小周期”计数器控制参数*/
160,/*总线系统RTC同步指令发送间隔“BC发送小周期”计数器控制参数*/
19,/*系统有效终端数(3-61)，3个缺省终端为61(BC)、60(BBC)、59(BM)*/
995,/*小周期中断点BC发送保护启动控制时间(us)*/
0,/*备用*/
0,/*备用*/
0/*备用*/
};
/******************总线有效终端控制数组******************/
const unsigned short RT_VALID[61][4]={
{1,61,0,61},/*序号，终端地址，热备份终端组号(0表示无备份)，设备DEV_ID：非0有效，0无效*/
{2,1,0,1},
{3,2,0,2},
{4,3,0,3},
{5,4,0,4},
{6,5,0,5},
{7,6,0,6},
{8,7,0,7},
{9,8,0,8},
{10,9,0,9},
{11,10,0,10},
{12,11,0,11},
{13,12,0,12},
{14,13,0,13},
{15,14,0,14},
{16,15,0,15},
{17,16,0,16},
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
{58,0,0,0},
{59,0,0,0},
{60,0,0,0},
{61,0,0,0}
};/*终端61、60、59要求按顺序排。热备份设备的排列序号应连续，热备份设备DEV_ID应相同。热备份
设备中，同一时段只允许有一个设备具备消息发送能力。表中增加了总线地址与设备DEV_ID的对照表内容*/
/******************总线有效总线终端MAC地址表数组******************/
const unsigned short RT_MAC_CTRL[61][8]={
{61,0x00,0x00,0x00,0x00,0x00,0x61,0x00},/*终端地址61，MAC地址：00-00-00-00-00-61，备用：0*/
{60,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址60：MAC地址=0表示未使用终端，备用：0*/
{59,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址59：MAC地址=0表示未使用终端，备用：0*/
{1,0x00,0x00,0x00,0x00,0x00,0x1,0x00},/*终端地址1，MAC地址：00-00-00-00-00-1，备用：0*/
{2,0x00,0x00,0x00,0x00,0x00,0x2,0x00},/*终端地址2，MAC地址：00-00-00-00-00-2，备用：0*/
{3,0x00,0x00,0x00,0x00,0x00,0x3,0x00},/*终端地址3，MAC地址：00-00-00-00-00-3，备用：0*/
{4,0x00,0x00,0x00,0x00,0x00,0x4,0x00},/*终端地址4，MAC地址：00-00-00-00-00-4，备用：0*/
{5,0x00,0x00,0x00,0x00,0x00,0x5,0x00},/*终端地址5，MAC地址：00-00-00-00-00-5，备用：0*/
{6,0x00,0x00,0x00,0x00,0x00,0x6,0x00},/*终端地址6，MAC地址：00-00-00-00-00-6，备用：0*/
{7,0x00,0x00,0x00,0x00,0x00,0x7,0x00},/*终端地址7，MAC地址：00-00-00-00-00-7，备用：0*/
{8,0x00,0x00,0x00,0x00,0x00,0x8,0x00},/*终端地址8，MAC地址：00-00-00-00-00-8，备用：0*/
{9,0x00,0x00,0x00,0x00,0x00,0x9,0x00},/*终端地址9，MAC地址：00-00-00-00-00-9，备用：0*/
{10,0x00,0x00,0x00,0x00,0x00,0x10,0x00},/*终端地址10，MAC地址：00-00-00-00-00-10，备用：0*/
{11,0x00,0x00,0x00,0x00,0x00,0x11,0x00},/*终端地址11，MAC地址：00-00-00-00-00-11，备用：0*/
{12,0x00,0x00,0x00,0x00,0x00,0x12,0x00},/*终端地址12，MAC地址：00-00-00-00-00-12，备用：0*/
{13,0x00,0x00,0x00,0x00,0x00,0x13,0x00},/*终端地址13，MAC地址：00-00-00-00-00-13，备用：0*/
{14,0x00,0x00,0x00,0x00,0x00,0x14,0x00},/*终端地址14，MAC地址：00-00-00-00-00-14，备用：0*/
{15,0x00,0x00,0x00,0x00,0x00,0x15,0x00},/*终端地址15，MAC地址：00-00-00-00-00-15，备用：0*/
{16,0x00,0x00,0x00,0x00,0x00,0x16,0x00},/*终端地址16，MAC地址：00-00-00-00-00-16，备用：0*/
{17,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址17：MAC地址=0表示未使用终端，备用：0*/
{18,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址18：MAC地址=0表示未使用终端，备用：0*/
{19,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址19：MAC地址=0表示未使用终端，备用：0*/
{20,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址20：MAC地址=0表示未使用终端，备用：0*/
{21,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址21：MAC地址=0表示未使用终端，备用：0*/
{22,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址22：MAC地址=0表示未使用终端，备用：0*/
{23,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址23：MAC地址=0表示未使用终端，备用：0*/
{24,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址24：MAC地址=0表示未使用终端，备用：0*/
{25,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址25：MAC地址=0表示未使用终端，备用：0*/
{26,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址26：MAC地址=0表示未使用终端，备用：0*/
{27,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址27：MAC地址=0表示未使用终端，备用：0*/
{28,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址28：MAC地址=0表示未使用终端，备用：0*/
{29,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址29：MAC地址=0表示未使用终端，备用：0*/
{30,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址30：MAC地址=0表示未使用终端，备用：0*/
{31,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址31：MAC地址=0表示未使用终端，备用：0*/
{32,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址32：MAC地址=0表示未使用终端，备用：0*/
{33,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址33：MAC地址=0表示未使用终端，备用：0*/
{34,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址34：MAC地址=0表示未使用终端，备用：0*/
{35,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址35：MAC地址=0表示未使用终端，备用：0*/
{36,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址36：MAC地址=0表示未使用终端，备用：0*/
{37,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址37：MAC地址=0表示未使用终端，备用：0*/
{38,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址38：MAC地址=0表示未使用终端，备用：0*/
{39,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址39：MAC地址=0表示未使用终端，备用：0*/
{40,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址40：MAC地址=0表示未使用终端，备用：0*/
{41,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址41：MAC地址=0表示未使用终端，备用：0*/
{42,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址42：MAC地址=0表示未使用终端，备用：0*/
{43,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址43：MAC地址=0表示未使用终端，备用：0*/
{44,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址44：MAC地址=0表示未使用终端，备用：0*/
{45,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址45：MAC地址=0表示未使用终端，备用：0*/
{46,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址46：MAC地址=0表示未使用终端，备用：0*/
{47,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址47：MAC地址=0表示未使用终端，备用：0*/
{48,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址48：MAC地址=0表示未使用终端，备用：0*/
{49,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址49：MAC地址=0表示未使用终端，备用：0*/
{50,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址50：MAC地址=0表示未使用终端，备用：0*/
{51,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址51：MAC地址=0表示未使用终端，备用：0*/
{52,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址52：MAC地址=0表示未使用终端，备用：0*/
{53,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址53：MAC地址=0表示未使用终端，备用：0*/
{54,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址54：MAC地址=0表示未使用终端，备用：0*/
{55,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址55：MAC地址=0表示未使用终端，备用：0*/
{56,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址56：MAC地址=0表示未使用终端，备用：0*/
{57,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*终端地址57：MAC地址=0表示未使用终端，备用：0*/
{58,0x00,0x00,0x00,0x00,0x00,0x00,0x00}/*终端地址58：MAC地址=0表示未使用终端，备用：0*/
};
/******************总线终端优先级队列消息帧发送数量控制表数组******************/
const unsigned short RT_TX_CTRL[19][4]={/*例如n=8，为总线系统拓扑有效终端数*/
{61,2,2,6},/*终端61：P2、P1、P0队列*/
{1,2,2,6},/*终端1：P2、P1、P0队列*/
{2,2,2,5},/*终端2：P2、P1、P0队列*/
{3,2,2,5},/*终端3：P2、P1、P0队列*/
{4,2,2,4},/*终端4：P2、P1、P0队列*/
{5,2,2,5},/*终端5：P2、P1、P0队列*/
{6,2,2,6},/*终端6：P2、P1、P0队列*/
{7,2,2,3},/*终端7：P2、P1、P0队列*/
{8,2,2,5},/*终端8：P2、P1、P0队列*/
{9,2,2,6},/*终端9：P2、P1、P0队列*/
{10,2,2,5},/*终端10：P2、P1、P0队列*/
{11,2,2,5},/*终端11：P2、P1、P0队列*/
{12,2,2,4},/*终端12：P2、P1、P0队列*/
{13,2,2,6},/*终端13：P2、P1、P0队列*/
{14,2,2,5},/*终端14：P2、P1、P0队列*/
{15,2,2,5},/*终端15：P2、P1、P0队列*/
{16,2,2,6}/*终端16：P2、P1、P0队列*/
};/*用于定义工作终端每个发送数据缓存队列在每次调度操作中可以连续发送的消息帧的最多数量*/
/******************总线终端发送队列发送查询MASK表数组******************/
const unsigned short RT_Msg_check[3][61]={
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},/*P2最高优先级队列，BC，BBC，BM，RT59，···，RT1*/
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},/*P1最高优先级队列，BC，BBC，BM，RT59，···，RT1*/
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}/*P0最高优先级队列，BC，BBC，BM，RT59，···，RT1*/
};/*用于定义网络终端需要进行发送数据缓存队列查询的需求标志*/
/******************总线终端BC/BBC接收消息数量控制数组******************/
const unsigned short BC_RX_Msg_Num[61][4]={
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
};/*用于定义工作终端的每个接受数据缓存队列可以接受的具备不同消息ID的消息帧的数量*/
/******************总线终端BC/BBC终端接收消息描述数组（据此建立收发消息的逻辑关系）******************/
const unsigned short BC_RX_Msg[256][8]={
{0,0,13,111,2,112,1,1},/*终端接收消息序号，接收终端地址识别开关（1表示需要识别应用消息的接
收终端地址，0表示不需要识别），发送终端DEV_ID，发送APP_ID，优先级，发送终端MSG_ID，周期数据过
滤频率控制因子（0：不适应，非零：有效数据提取的间隔次数），XXX接受虚拟缓存分发标识（1有效，最
高位对应VIO区0，最低位对应VIO区7）*/
{1,0,13,111,1,113,1,1},
{2,0,13,111,1,114,1,1},
{3,0,13,111,1,115,1,1},
{4,0,13,111,1,116,1,1},
{5,0,14,111,2,118,1,1},
{6,0,14,111,2,119,1,1},
{7,0,11,111,2,93,1,1},
{8,0,11,111,2,94,1,1},
{9,0,11,111,1,95,1,1},
{10,0,11,111,1,96,1,1},
{11,0,11,111,1,97,1,1},
{12,0,16,111,2,136,1,1},
{13,0,16,111,2,137,1,1},
{14,0,16,111,2,138,1,1},
{15,0,16,111,2,139,1,1},
{16,0,16,111,1,140,1,1},
{17,0,9,111,2,73,1,1},
{18,0,9,111,2,74,1,1},
{19,0,9,111,2,75,1,1},
{20,0,9,111,2,76,1,1},
{21,0,6,111,2,46,1,1},
{22,0,6,111,2,47,1,1},
{23,0,6,111,2,48,1,1},
{24,0,4,111,2,28,1,1},
{25,0,4,111,2,29,1,1},
{26,0,4,111,2,30,1,1},
{27,0,1,111,1,7,1,1},
{28,0,1,111,1,8,1,1},
{29,0,1,111,0,9,1,1},
{30,0,2,111,2,10,1,1},
{31,0,2,111,2,11,1,1},
{32,0,14,111,2,120,0,1},
{33,0,14,111,1,123,0,1},
{34,0,15,111,2,129,0,1},
{35,0,15,111,2,130,0,1},
{36,0,15,111,1,131,0,1},
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
};/*接收消息数最大为256*/
