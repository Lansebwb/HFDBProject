/*************** mBASE_Version:_1.02.07 ****************//*对应的总线消息库版本信息*/
/********************* TABLE LIST FOR Rt001 APP0B MSG: ********************/
/* TX MSG LIST: */                                   
#define RT0B_TX_NUM                0x0007     /*APP_ID，RT APP发送应用消息包个数，不大于256*/
#define HTX/ELC-APP1-ST/00         0x08AD     /*MSG_NAME=HTX/ELC-APP1-ST/00（发送消息物理块名），0x08AD发送消息MSG_ID*/
#define LEN_HTX/ELC-APP1-ST/00     0x0258     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/ELC-APP1-ST/01         0x08AE     /*MSG_NAME=HTX/ELC-APP1-ST/01（发送消息物理块名），0x08AE发送消息MSG_ID*/
#define LEN_HTX/ELC-APP1-ST/01     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/ELC-APP1-ST/02         0x08AF     /*MSG_NAME=HTX/ELC-APP1-ST/02（发送消息物理块名），0x08AF发送消息MSG_ID*/
#define LEN_HTX/ELC-APP1-ST/02     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/ELC-APP1-RC/03         0x08B0     /*MSG_NAME=HTX/ELC-APP1-RC/03（发送消息物理块名），0x08B0发送消息MSG_ID*/
#define LEN_HTX/ELC-APP1-RC/03     0x0258     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/ELC-APP1-RC/04         0x08B1     /*MSG_NAME=HTX/ELC-APP1-RC/04（发送消息物理块名），0x08B1发送消息MSG_ID*/
#define LEN_HTX/ELC-APP1-RC/04     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/ELC-APP1-RC/05         0x08B2     /*MSG_NAME=HTX/ELC-APP1-RC/05（发送消息物理块名），0x08B2发送消息MSG_ID*/
#define LEN_HTX/ELC-APP1-RC/05     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/ELC-APP1-BE/06         0x08B3     /*MSG_NAME=HTX/ELC-APP1-BE/06（发送消息物理块名），0x08B3发送消息MSG_ID*/
#define LEN_HTX/ELC-APP1-BE/06     0x927C0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
/* RX MSG LIST:*/                                            
#define RT0B_RX_NUM                0x000F     /*APP_ID，RT APP发送应用消息包个数，不大于256*/
#define HRX/IMP1-APP1-ST/00        0x0000     /*MSG_NAME=HRX/IMP1-APP1-ST/00（接收消息物理块名），0x0000：终端接收消息序号*/
#define LEN_HRX/IMP1-APP1-ST/00    0x0258     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/IMP1-APP1-ST/01        0x0001     /*MSG_NAME=HRX/IMP1-APP1-ST/01（接收消息物理块名），0x0001：终端接收消息序号*/
#define LEN_HRX/IMP1-APP1-ST/01    0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/IMP1-APP1-ST/02        0x0002     /*MSG_NAME=HRX/IMP1-APP1-ST/02（接收消息物理块名），0x0002：终端接收消息序号*/
#define LEN_HRX/IMP1-APP1-ST/02    0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/IMP1-APP1-RC/03        0x0003     /*MSG_NAME=HRX/IMP1-APP1-RC/03（接收消息物理块名），0x0003：终端接收消息序号*/
#define LEN_HRX/IMP1-APP1-RC/03    0x0258     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/IMP1-APP1-RC/04        0x0004     /*MSG_NAME=HRX/IMP1-APP1-RC/04（接收消息物理块名），0x0004：终端接收消息序号*/
#define LEN_HRX/IMP1-APP1-RC/04    0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/IMP1-APP1-RC/05        0x0005     /*MSG_NAME=HRX/IMP1-APP1-RC/05（接收消息物理块名），0x0005：终端接收消息序号*/
#define LEN_HRX/IMP1-APP1-RC/05    0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/IMP1-APP1-BE/06        0x0006     /*MSG_NAME=HRX/IMP1-APP1-BE/06（接收消息物理块名），0x0006：终端接收消息序号*/
#define LEN_HRX/IMP1-APP1-BE/06    0x7A120     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/CNI-APP1-ST/07         0x0007     /*MSG_NAME=HRX/CNI-APP1-ST/07（接收消息物理块名），0x0007：终端接收消息序号*/
#define LEN_HRX/CNI-APP1-ST/07     0x0258     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/CNI-APP1-ST/08         0x0008     /*MSG_NAME=HRX/CNI-APP1-ST/08（接收消息物理块名），0x0008：终端接收消息序号*/
#define LEN_HRX/CNI-APP1-ST/08     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/CNI-APP1-ST/09         0x0009     /*MSG_NAME=HRX/CNI-APP1-ST/09（接收消息物理块名），0x0009：终端接收消息序号*/
#define LEN_HRX/CNI-APP1-ST/09     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/CNI-APP1-RC/0A         0x000A     /*MSG_NAME=HRX/CNI-APP1-RC/0A（接收消息物理块名），0x000A：终端接收消息序号*/
#define LEN_HRX/CNI-APP1-RC/0A     0x0258     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/CNI-APP1-RC/0B         0x000B     /*MSG_NAME=HRX/CNI-APP1-RC/0B（接收消息物理块名），0x000B：终端接收消息序号*/
#define LEN_HRX/CNI-APP1-RC/0B     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/CNI-APP1-RC/0C         0x000C     /*MSG_NAME=HRX/CNI-APP1-RC/0C（接收消息物理块名），0x000C：终端接收消息序号*/
#define LEN_HRX/CNI-APP1-RC/0C     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/CNI-APP1-BE/0D         0x000D     /*MSG_NAME=HRX/CNI-APP1-BE/0D（接收消息物理块名），0x000D：终端接收消息序号*/
#define LEN_HRX/CNI-APP1-BE/0D     0x927C0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/MDE-APP1-BE/0E         0x000E     /*MSG_NAME=HRX/MDE-APP1-BE/0E（接收消息物理块名），0x000E：终端接收消息序号*/
#define LEN_HRX/MDE-APP1-BE/0E     0xC3500     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
