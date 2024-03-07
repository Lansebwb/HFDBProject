/*************** mBASE_Version:1_1.02.07 ****************//*对应的总线消息库版本信息*/
/********************* TABLE LIST FOR Rt005 APP6F MSG: ********************/
/* TX MSG LIST: */                                   
#define RT6F_TX_NUM                0x0009     /*APP_ID，RT APP发送应用消息包个数，不大于256*/
#define HTX/RT5-APP1-ST/00         0x0025     /*MSG_NAME=HTX/RT5-APP1-ST/00（发送消息物理块名），0x0025发送消息MSG_ID*/
#define LEN_HTX/RT5-APP1-ST/00     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/RT5-APP1-ST/01         0x0026     /*MSG_NAME=HTX/RT5-APP1-ST/01（发送消息物理块名），0x0026发送消息MSG_ID*/
#define LEN_HTX/RT5-APP1-ST/01     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/RT5-APP1-ST/02         0x0027     /*MSG_NAME=HTX/RT5-APP1-ST/02（发送消息物理块名），0x0027发送消息MSG_ID*/
#define LEN_HTX/RT5-APP1-ST/02     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/RT5-APP1-ST/03         0x0028     /*MSG_NAME=HTX/RT5-APP1-ST/03（发送消息物理块名），0x0028发送消息MSG_ID*/
#define LEN_HTX/RT5-APP1-ST/03     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/RT5-APP1-RC/04         0x0029     /*MSG_NAME=HTX/RT5-APP1-RC/04（发送消息物理块名），0x0029发送消息MSG_ID*/
#define LEN_HTX/RT5-APP1-RC/04     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/RT5-APP1-RC/05         0x002A     /*MSG_NAME=HTX/RT5-APP1-RC/05（发送消息物理块名），0x002A发送消息MSG_ID*/
#define LEN_HTX/RT5-APP1-RC/05     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/RT5-APP1-RC/06         0x002B     /*MSG_NAME=HTX/RT5-APP1-RC/06（发送消息物理块名），0x002B发送消息MSG_ID*/
#define LEN_HTX/RT5-APP1-RC/06     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/RT5-APP1-RC/07         0x002C     /*MSG_NAME=HTX/RT5-APP1-RC/07（发送消息物理块名），0x002C发送消息MSG_ID*/
#define LEN_HTX/RT5-APP1-RC/07     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/RT5-APP1-BE/08         0x002D     /*MSG_NAME=HTX/RT5-APP1-BE/08（发送消息物理块名），0x002D发送消息MSG_ID*/
#define LEN_HTX/RT5-APP1-BE/08     0x927C0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
/* RX MSG LIST:*/                                            
#define RT6F_RX_NUM                0x0014     /*APP_ID，RT APP发送应用消息包个数，不大于256*/
#define HRX/BC-APP1-ST/00          0x0000     /*MSG_NAME=HRX/BC-APP1-ST/00（接收消息物理块名），0x0000：终端接收消息序号*/
#define LEN_HRX/BC-APP1-ST/00      0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/BC-APP1-ST/01          0x0001     /*MSG_NAME=HRX/BC-APP1-ST/01（接收消息物理块名），0x0001：终端接收消息序号*/
#define LEN_HRX/BC-APP1-ST/01      0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/BC-APP1-RC/02          0x0002     /*MSG_NAME=HRX/BC-APP1-RC/02（接收消息物理块名），0x0002：终端接收消息序号*/
#define LEN_HRX/BC-APP1-RC/02      0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/BC-APP1-RC/03          0x0003     /*MSG_NAME=HRX/BC-APP1-RC/03（接收消息物理块名），0x0003：终端接收消息序号*/
#define LEN_HRX/BC-APP1-RC/03      0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT2-APP1-ST/04         0x0004     /*MSG_NAME=HRX/RT2-APP1-ST/04（接收消息物理块名），0x0004：终端接收消息序号*/
#define LEN_HRX/RT2-APP1-ST/04     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT2-APP1-RC/05         0x0005     /*MSG_NAME=HRX/RT2-APP1-RC/05（接收消息物理块名），0x0005：终端接收消息序号*/
#define LEN_HRX/RT2-APP1-RC/05     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT2-APP1-RC/06         0x0006     /*MSG_NAME=HRX/RT2-APP1-RC/06（接收消息物理块名），0x0006：终端接收消息序号*/
#define LEN_HRX/RT2-APP1-RC/06     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT3-APP1-RC/07         0x0007     /*MSG_NAME=HRX/RT3-APP1-RC/07（接收消息物理块名），0x0007：终端接收消息序号*/
#define LEN_HRX/RT3-APP1-RC/07     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT3-APP1-RC/08         0x0008     /*MSG_NAME=HRX/RT3-APP1-RC/08（接收消息物理块名），0x0008：终端接收消息序号*/
#define LEN_HRX/RT3-APP1-RC/08     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT4-APP1-ST/09         0x0009     /*MSG_NAME=HRX/RT4-APP1-ST/09（接收消息物理块名），0x0009：终端接收消息序号*/
#define LEN_HRX/RT4-APP1-ST/09     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT4-APP1-ST/0A         0x000A     /*MSG_NAME=HRX/RT4-APP1-ST/0A（接收消息物理块名），0x000A：终端接收消息序号*/
#define LEN_HRX/RT4-APP1-ST/0A     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT6-APP1-RC/0B         0x000B     /*MSG_NAME=HRX/RT6-APP1-RC/0B（接收消息物理块名），0x000B：终端接收消息序号*/
#define LEN_HRX/RT6-APP1-RC/0B     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT6-APP1-RC/0C         0x000C     /*MSG_NAME=HRX/RT6-APP1-RC/0C（接收消息物理块名），0x000C：终端接收消息序号*/
#define LEN_HRX/RT6-APP1-RC/0C     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT7-APP1-ST/0D         0x000D     /*MSG_NAME=HRX/RT7-APP1-ST/0D（接收消息物理块名），0x000D：终端接收消息序号*/
#define LEN_HRX/RT7-APP1-ST/0D     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT7-APP1-ST/0E         0x000E     /*MSG_NAME=HRX/RT7-APP1-ST/0E（接收消息物理块名），0x000E：终端接收消息序号*/
#define LEN_HRX/RT7-APP1-ST/0E     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT10-APP1-RC/0F        0x000F     /*MSG_NAME=HRX/RT10-APP1-RC/0F（接收消息物理块名），0x000F：终端接收消息序号*/
#define LEN_HRX/RT10-APP1-RC/0F    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT11-APP1-ST/10        0x0010     /*MSG_NAME=HRX/RT11-APP1-ST/10（接收消息物理块名），0x0010：终端接收消息序号*/
#define LEN_HRX/RT11-APP1-ST/10    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT11-APP1-ST/11        0x0011     /*MSG_NAME=HRX/RT11-APP1-ST/11（接收消息物理块名），0x0011：终端接收消息序号*/
#define LEN_HRX/RT11-APP1-ST/11    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT12-APP1-ST/12        0x0012     /*MSG_NAME=HRX/RT12-APP1-ST/12（接收消息物理块名），0x0012：终端接收消息序号*/
#define LEN_HRX/RT12-APP1-ST/12    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT12-APP1-RC/13        0x0013     /*MSG_NAME=HRX/RT12-APP1-RC/13（接收消息物理块名），0x0013：终端接收消息序号*/
#define LEN_HRX/RT12-APP1-RC/13    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
