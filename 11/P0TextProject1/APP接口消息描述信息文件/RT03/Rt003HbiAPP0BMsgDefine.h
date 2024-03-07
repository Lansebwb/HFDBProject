/*************** mBASE_Version:_1.02.07 ****************//*对应的总线消息库版本信息*/
/********************* TABLE LIST FOR Rt003 APP0B MSG: ********************/
/* TX MSG LIST: */                                   
#define RT0B_TX_NUM                0x0007     /*APP_ID，RT APP发送应用消息包个数，不大于256*/
#define HTX/CNI-APP1-ST/00         0x1159     /*MSG_NAME=HTX/CNI-APP1-ST/00（发送消息物理块名），0x1159发送消息MSG_ID*/
#define LEN_HTX/CNI-APP1-ST/00     0x0258     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/CNI-APP1-ST/01         0x115A     /*MSG_NAME=HTX/CNI-APP1-ST/01（发送消息物理块名），0x115A发送消息MSG_ID*/
#define LEN_HTX/CNI-APP1-ST/01     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/CNI-APP1-ST/02         0x115B     /*MSG_NAME=HTX/CNI-APP1-ST/02（发送消息物理块名），0x115B发送消息MSG_ID*/
#define LEN_HTX/CNI-APP1-ST/02     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/CNI-APP1-RC/03         0x115C     /*MSG_NAME=HTX/CNI-APP1-RC/03（发送消息物理块名），0x115C发送消息MSG_ID*/
#define LEN_HTX/CNI-APP1-RC/03     0x0258     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/CNI-APP1-RC/04         0x115D     /*MSG_NAME=HTX/CNI-APP1-RC/04（发送消息物理块名），0x115D发送消息MSG_ID*/
#define LEN_HTX/CNI-APP1-RC/04     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/CNI-APP1-RC/05         0x115E     /*MSG_NAME=HTX/CNI-APP1-RC/05（发送消息物理块名），0x115E发送消息MSG_ID*/
#define LEN_HTX/CNI-APP1-RC/05     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/CNI-APP1-BE/06         0x115F     /*MSG_NAME=HTX/CNI-APP1-BE/06（发送消息物理块名），0x115F发送消息MSG_ID*/
#define LEN_HTX/CNI-APP1-BE/06     0x927C0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
/* RX MSG LIST:*/                                            
#define RT0B_RX_NUM                0x000D     /*APP_ID，RT APP发送应用消息包个数，不大于256*/
#define HRX/ELC-APP1-ST/00         0x0000     /*MSG_NAME=HRX/ELC-APP1-ST/00（接收消息物理块名），0x0000：终端接收消息序号*/
#define LEN_HRX/ELC-APP1-ST/00     0x0258     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/ELC-APP1-ST/01         0x0001     /*MSG_NAME=HRX/ELC-APP1-ST/01（接收消息物理块名），0x0001：终端接收消息序号*/
#define LEN_HRX/ELC-APP1-ST/01     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/ELC-APP1-ST/02         0x0002     /*MSG_NAME=HRX/ELC-APP1-ST/02（接收消息物理块名），0x0002：终端接收消息序号*/
#define LEN_HRX/ELC-APP1-ST/02     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/ELC-APP1-RC/03         0x0003     /*MSG_NAME=HRX/ELC-APP1-RC/03（接收消息物理块名），0x0003：终端接收消息序号*/
#define LEN_HRX/ELC-APP1-RC/03     0x0258     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/ELC-APP1-RC/04         0x0004     /*MSG_NAME=HRX/ELC-APP1-RC/04（接收消息物理块名），0x0004：终端接收消息序号*/
#define LEN_HRX/ELC-APP1-RC/04     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/ELC-APP1-RC/05         0x0005     /*MSG_NAME=HRX/ELC-APP1-RC/05（接收消息物理块名），0x0005：终端接收消息序号*/
#define LEN_HRX/ELC-APP1-RC/05     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RDR-APP1-ST/06         0x0006     /*MSG_NAME=HRX/RDR-APP1-ST/06（接收消息物理块名），0x0006：终端接收消息序号*/
#define LEN_HRX/RDR-APP1-ST/06     0x0258     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RDR-APP1-ST/07         0x0007     /*MSG_NAME=HRX/RDR-APP1-ST/07（接收消息物理块名），0x0007：终端接收消息序号*/
#define LEN_HRX/RDR-APP1-ST/07     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RDR-APP1-ST/08         0x0008     /*MSG_NAME=HRX/RDR-APP1-ST/08（接收消息物理块名），0x0008：终端接收消息序号*/
#define LEN_HRX/RDR-APP1-ST/08     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RDR-APP1-RC/09         0x0009     /*MSG_NAME=HRX/RDR-APP1-RC/09（接收消息物理块名），0x0009：终端接收消息序号*/
#define LEN_HRX/RDR-APP1-RC/09     0x0258     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RDR-APP1-RC/0A         0x000A     /*MSG_NAME=HRX/RDR-APP1-RC/0A（接收消息物理块名），0x000A：终端接收消息序号*/
#define LEN_HRX/RDR-APP1-RC/0A     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RDR-APP1-RC/0B         0x000B     /*MSG_NAME=HRX/RDR-APP1-RC/0B（接收消息物理块名），0x000B：终端接收消息序号*/
#define LEN_HRX/RDR-APP1-RC/0B     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RDR-APP1-BE/0C         0x000C     /*MSG_NAME=HRX/RDR-APP1-BE/0C（接收消息物理块名），0x000C：终端接收消息序号*/
#define LEN_HRX/RDR-APP1-BE/0C     0x7A120     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
