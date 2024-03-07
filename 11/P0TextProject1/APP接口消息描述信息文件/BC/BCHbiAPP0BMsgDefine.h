/*************** mBASE_Version:_1.02.07 ****************//*对应的总线消息库版本信息*/
/********************* TABLE LIST FOR BC APP0B MSG: ********************/
/* TX MSG LIST: */                                          
#define BC0B_TX_NUM                0x0007     /*APP_ID，BC APP发送应用消息包个数，不大于256*/
#define HTX/IMP1-APP1-ST/00        0x0457     /*MSG_NAME=HTX/IMP1-APP1-ST/00（发送消息物理块名），0x0457发送消息MSG_ID*/
#define LEN_HTX/IMP1-APP1-ST/00    0x0258     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/IMP1-APP1-ST/01        0x0458     /*MSG_NAME=HTX/IMP1-APP1-ST/01（发送消息物理块名），0x0458发送消息MSG_ID*/
#define LEN_HTX/IMP1-APP1-ST/01    0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/IMP1-APP1-ST/02        0x0459     /*MSG_NAME=HTX/IMP1-APP1-ST/02（发送消息物理块名），0x0459发送消息MSG_ID*/
#define LEN_HTX/IMP1-APP1-ST/02    0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/IMP1-APP1-RC/03        0x045A     /*MSG_NAME=HTX/IMP1-APP1-RC/03（发送消息物理块名），0x045A发送消息MSG_ID*/
#define LEN_HTX/IMP1-APP1-RC/03    0x0258     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/IMP1-APP1-RC/04        0x045B     /*MSG_NAME=HTX/IMP1-APP1-RC/04（发送消息物理块名），0x045B发送消息MSG_ID*/
#define LEN_HTX/IMP1-APP1-RC/04    0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/IMP1-APP1-RC/05        0x045C     /*MSG_NAME=HTX/IMP1-APP1-RC/05（发送消息物理块名），0x045C发送消息MSG_ID*/
#define LEN_HTX/IMP1-APP1-RC/05    0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/IMP1-APP1-BE/06        0x045D     /*MSG_NAME=HTX/IMP1-APP1-BE/06（发送消息物理块名），0x045D发送消息MSG_ID*/
#define LEN_HTX/IMP1-APP1-BE/06    0x7A120     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
/* RX MSG LIST: */                                        
#define BC0B_RX_NUM                0x0019     /*APP_ID，BC APP接收应用消息包个数，不大于256*/
#define HRX/ELC-APP1-ST/00         0x0000     /*MSG_NAME=HRX/ELC-APP1-ST/00（接收消息物理块名），0x00：终端接收消息序号*/
#define LEN_HRX/ELC-APP1-ST/00     0x0258     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/ELC-APP1-ST/01         0x0001     /*MSG_NAME=HRX/ELC-APP1-ST/01（接收消息物理块名），0x01：终端接收消息序号*/
#define LEN_HRX/ELC-APP1-ST/01     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/ELC-APP1-ST/02         0x0002     /*MSG_NAME=HRX/ELC-APP1-ST/02（接收消息物理块名），0x02：终端接收消息序号*/
#define LEN_HRX/ELC-APP1-ST/02     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/ELC-APP1-RC/03         0x0003     /*MSG_NAME=HRX/ELC-APP1-RC/03（接收消息物理块名），0x03：终端接收消息序号*/
#define LEN_HRX/ELC-APP1-RC/03     0x0258     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/ELC-APP1-RC/04         0x0004     /*MSG_NAME=HRX/ELC-APP1-RC/04（接收消息物理块名），0x04：终端接收消息序号*/
#define LEN_HRX/ELC-APP1-RC/04     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/ELC-APP1-RC/05         0x0005     /*MSG_NAME=HRX/ELC-APP1-RC/05（接收消息物理块名），0x05：终端接收消息序号*/
#define LEN_HRX/ELC-APP1-RC/05     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RDR-APP1-ST/06         0x0006     /*MSG_NAME=HRX/RDR-APP1-ST/06（接收消息物理块名），0x06：终端接收消息序号*/
#define LEN_HRX/RDR-APP1-ST/06     0x0258     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RDR-APP1-ST/07         0x0007     /*MSG_NAME=HRX/RDR-APP1-ST/07（接收消息物理块名），0x07：终端接收消息序号*/
#define LEN_HRX/RDR-APP1-ST/07     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RDR-APP1-ST/08         0x0008     /*MSG_NAME=HRX/RDR-APP1-ST/08（接收消息物理块名），0x08：终端接收消息序号*/
#define LEN_HRX/RDR-APP1-ST/08     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RDR-APP1-RC/09         0x0009     /*MSG_NAME=HRX/RDR-APP1-RC/09（接收消息物理块名），0x09：终端接收消息序号*/
#define LEN_HRX/RDR-APP1-RC/09     0x0258     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RDR-APP1-RC/0A         0x000A     /*MSG_NAME=HRX/RDR-APP1-RC/0A（接收消息物理块名），0x0A：终端接收消息序号*/
#define LEN_HRX/RDR-APP1-RC/0A     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RDR-APP1-RC/0B         0x000B     /*MSG_NAME=HRX/RDR-APP1-RC/0B（接收消息物理块名），0x0B：终端接收消息序号*/
#define LEN_HRX/RDR-APP1-RC/0B     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RDR-APP1-BE/0C         0x000C     /*MSG_NAME=HRX/RDR-APP1-BE/0C（接收消息物理块名），0x0C：终端接收消息序号*/
#define LEN_HRX/RDR-APP1-BE/0C     0x7A120     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/CNI-APP1-ST/0D         0x000D     /*MSG_NAME=HRX/CNI-APP1-ST/0D（接收消息物理块名），0x0D：终端接收消息序号*/
#define LEN_HRX/CNI-APP1-ST/0D     0x0258     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/CNI-APP1-ST/0E         0x000E     /*MSG_NAME=HRX/CNI-APP1-ST/0E（接收消息物理块名），0x0E：终端接收消息序号*/
#define LEN_HRX/CNI-APP1-ST/0E     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/CNI-APP1-ST/0F         0x000F     /*MSG_NAME=HRX/CNI-APP1-ST/0F（接收消息物理块名），0x0F：终端接收消息序号*/
#define LEN_HRX/CNI-APP1-ST/0F     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/CNI-APP1-RC/10         0x0010     /*MSG_NAME=HRX/CNI-APP1-RC/10（接收消息物理块名），0x10：终端接收消息序号*/
#define LEN_HRX/CNI-APP1-RC/10     0x0258     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/CNI-APP1-RC/11         0x0011     /*MSG_NAME=HRX/CNI-APP1-RC/11（接收消息物理块名），0x11：终端接收消息序号*/
#define LEN_HRX/CNI-APP1-RC/11     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/CNI-APP1-RC/12         0x0012     /*MSG_NAME=HRX/CNI-APP1-RC/12（接收消息物理块名），0x12：终端接收消息序号*/
#define LEN_HRX/CNI-APP1-RC/12     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/MDE-APP1-ST/13         0x0013     /*MSG_NAME=HRX/MDE-APP1-ST/13（接收消息物理块名），0x13：终端接收消息序号*/
#define LEN_HRX/MDE-APP1-ST/13     0x0258     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/MDE-APP1-ST/14         0x0014     /*MSG_NAME=HRX/MDE-APP1-ST/14（接收消息物理块名），0x14：终端接收消息序号*/
#define LEN_HRX/MDE-APP1-ST/14     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/MDE-APP1-ST/15         0x0015     /*MSG_NAME=HRX/MDE-APP1-ST/15（接收消息物理块名），0x15：终端接收消息序号*/
#define LEN_HRX/MDE-APP1-ST/15     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/MDE-APP1-RC/16         0x0016     /*MSG_NAME=HRX/MDE-APP1-RC/16（接收消息物理块名），0x16：终端接收消息序号*/
#define LEN_HRX/MDE-APP1-RC/16     0x0258     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/MDE-APP1-RC/17         0x0017     /*MSG_NAME=HRX/MDE-APP1-RC/17（接收消息物理块名），0x17：终端接收消息序号*/
#define LEN_HRX/MDE-APP1-RC/17     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/MDE-APP1-RC/18         0x0018     /*MSG_NAME=HRX/MDE-APP1-RC/18（接收消息物理块名），0x18：终端接收消息序号*/
#define LEN_HRX/MDE-APP1-RC/18     0x0320     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
