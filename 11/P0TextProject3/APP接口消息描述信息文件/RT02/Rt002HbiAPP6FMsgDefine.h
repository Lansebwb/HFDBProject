/*************** mBASE_Version:1_1.02.07 ****************//*对应的总线消息库版本信息*/
/********************* TABLE LIST FOR Rt002 APP6F MSG: ********************/
/* TX MSG LIST: */                                   
#define RT6F_TX_NUM                0x0009     /*APP_ID，RT APP发送应用消息包个数，不大于256*/
#define HTX/RT2-APP1-ST/00         0x000A     /*MSG_NAME=HTX/RT2-APP1-ST/00（发送消息物理块名），0x000A发送消息MSG_ID*/
#define LEN_HTX/RT2-APP1-ST/00     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/RT2-APP1-ST/01         0x000B     /*MSG_NAME=HTX/RT2-APP1-ST/01（发送消息物理块名），0x000B发送消息MSG_ID*/
#define LEN_HTX/RT2-APP1-ST/01     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/RT2-APP1-ST/02         0x000C     /*MSG_NAME=HTX/RT2-APP1-ST/02（发送消息物理块名），0x000C发送消息MSG_ID*/
#define LEN_HTX/RT2-APP1-ST/02     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/RT2-APP1-ST/03         0x000D     /*MSG_NAME=HTX/RT2-APP1-ST/03（发送消息物理块名），0x000D发送消息MSG_ID*/
#define LEN_HTX/RT2-APP1-ST/03     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/RT2-APP1-RC/04         0x000E     /*MSG_NAME=HTX/RT2-APP1-RC/04（发送消息物理块名），0x000E发送消息MSG_ID*/
#define LEN_HTX/RT2-APP1-RC/04     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/RT2-APP1-RC/05         0x000F     /*MSG_NAME=HTX/RT2-APP1-RC/05（发送消息物理块名），0x000F发送消息MSG_ID*/
#define LEN_HTX/RT2-APP1-RC/05     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/RT2-APP1-RC/06         0x0010     /*MSG_NAME=HTX/RT2-APP1-RC/06（发送消息物理块名），0x0010发送消息MSG_ID*/
#define LEN_HTX/RT2-APP1-RC/06     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/RT2-APP1-RC/07         0x0011     /*MSG_NAME=HTX/RT2-APP1-RC/07（发送消息物理块名），0x0011发送消息MSG_ID*/
#define LEN_HTX/RT2-APP1-RC/07     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/RT2-APP1-BE/08         0x0012     /*MSG_NAME=HTX/RT2-APP1-BE/08（发送消息物理块名），0x0012发送消息MSG_ID*/
#define LEN_HTX/RT2-APP1-BE/08     0x61A80     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
/* RX MSG LIST:*/                                            
#define RT6F_RX_NUM                0x001F     /*APP_ID，RT APP发送应用消息包个数，不大于256*/
#define HRX/BC-APP1-ST/00          0x0000     /*MSG_NAME=HRX/BC-APP1-ST/00（接收消息物理块名），0x0000：终端接收消息序号*/
#define LEN_HRX/BC-APP1-ST/00      0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/BC-APP1-ST/01          0x0001     /*MSG_NAME=HRX/BC-APP1-ST/01（接收消息物理块名），0x0001：终端接收消息序号*/
#define LEN_HRX/BC-APP1-ST/01      0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/BC-APP1-RC/02          0x0002     /*MSG_NAME=HRX/BC-APP1-RC/02（接收消息物理块名），0x0002：终端接收消息序号*/
#define LEN_HRX/BC-APP1-RC/02      0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/BC-APP1-RC/03          0x0003     /*MSG_NAME=HRX/BC-APP1-RC/03（接收消息物理块名），0x0003：终端接收消息序号*/
#define LEN_HRX/BC-APP1-RC/03      0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/BC-APP1-RC/04          0x0004     /*MSG_NAME=HRX/BC-APP1-RC/04（接收消息物理块名），0x0004：终端接收消息序号*/
#define LEN_HRX/BC-APP1-RC/04      0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT3-APP1-ST/05         0x0005     /*MSG_NAME=HRX/RT3-APP1-ST/05（接收消息物理块名），0x0005：终端接收消息序号*/
#define LEN_HRX/RT3-APP1-ST/05     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT3-APP1-RC/06         0x0006     /*MSG_NAME=HRX/RT3-APP1-RC/06（接收消息物理块名），0x0006：终端接收消息序号*/
#define LEN_HRX/RT3-APP1-RC/06     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT3-APP1-RC/07         0x0007     /*MSG_NAME=HRX/RT3-APP1-RC/07（接收消息物理块名），0x0007：终端接收消息序号*/
#define LEN_HRX/RT3-APP1-RC/07     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT3-APP1-RC/08         0x0008     /*MSG_NAME=HRX/RT3-APP1-RC/08（接收消息物理块名），0x0008：终端接收消息序号*/
#define LEN_HRX/RT3-APP1-RC/08     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT5-APP1-ST/09         0x0009     /*MSG_NAME=HRX/RT5-APP1-ST/09（接收消息物理块名），0x0009：终端接收消息序号*/
#define LEN_HRX/RT5-APP1-ST/09     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT5-APP1-ST/0A         0x000A     /*MSG_NAME=HRX/RT5-APP1-ST/0A（接收消息物理块名），0x000A：终端接收消息序号*/
#define LEN_HRX/RT5-APP1-ST/0A     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT5-APP1-ST/0B         0x000B     /*MSG_NAME=HRX/RT5-APP1-ST/0B（接收消息物理块名），0x000B：终端接收消息序号*/
#define LEN_HRX/RT5-APP1-ST/0B     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT5-APP1-ST/0C         0x000C     /*MSG_NAME=HRX/RT5-APP1-ST/0C（接收消息物理块名），0x000C：终端接收消息序号*/
#define LEN_HRX/RT5-APP1-ST/0C     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT5-APP1-RC/0D         0x000D     /*MSG_NAME=HRX/RT5-APP1-RC/0D（接收消息物理块名），0x000D：终端接收消息序号*/
#define LEN_HRX/RT5-APP1-RC/0D     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT5-APP1-RC/0E         0x000E     /*MSG_NAME=HRX/RT5-APP1-RC/0E（接收消息物理块名），0x000E：终端接收消息序号*/
#define LEN_HRX/RT5-APP1-RC/0E     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT7-APP1-ST/0F         0x000F     /*MSG_NAME=HRX/RT7-APP1-ST/0F（接收消息物理块名），0x000F：终端接收消息序号*/
#define LEN_HRX/RT7-APP1-ST/0F     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT7-APP1-ST/10         0x0010     /*MSG_NAME=HRX/RT7-APP1-ST/10（接收消息物理块名），0x0010：终端接收消息序号*/
#define LEN_HRX/RT7-APP1-ST/10     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT7-APP1-RC/11         0x0011     /*MSG_NAME=HRX/RT7-APP1-RC/11（接收消息物理块名），0x0011：终端接收消息序号*/
#define LEN_HRX/RT7-APP1-RC/11     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT7-APP1-RC/12         0x0012     /*MSG_NAME=HRX/RT7-APP1-RC/12（接收消息物理块名），0x0012：终端接收消息序号*/
#define LEN_HRX/RT7-APP1-RC/12     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT7-APP1-RC/13         0x0013     /*MSG_NAME=HRX/RT7-APP1-RC/13（接收消息物理块名），0x0013：终端接收消息序号*/
#define LEN_HRX/RT7-APP1-RC/13     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT8-APP1-RC/14         0x0014     /*MSG_NAME=HRX/RT8-APP1-RC/14（接收消息物理块名），0x0014：终端接收消息序号*/
#define LEN_HRX/RT8-APP1-RC/14     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT9-APP1-ST/15         0x0015     /*MSG_NAME=HRX/RT9-APP1-ST/15（接收消息物理块名），0x0015：终端接收消息序号*/
#define LEN_HRX/RT9-APP1-ST/15     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT9-APP1-ST/16         0x0016     /*MSG_NAME=HRX/RT9-APP1-ST/16（接收消息物理块名），0x0016：终端接收消息序号*/
#define LEN_HRX/RT9-APP1-ST/16     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT9-APP1-RC/17         0x0017     /*MSG_NAME=HRX/RT9-APP1-RC/17（接收消息物理块名），0x0017：终端接收消息序号*/
#define LEN_HRX/RT9-APP1-RC/17     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT9-APP1-RC/18         0x0018     /*MSG_NAME=HRX/RT9-APP1-RC/18（接收消息物理块名），0x0018：终端接收消息序号*/
#define LEN_HRX/RT9-APP1-RC/18     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT10-APP1-ST/19        0x0019     /*MSG_NAME=HRX/RT10-APP1-ST/19（接收消息物理块名），0x0019：终端接收消息序号*/
#define LEN_HRX/RT10-APP1-ST/19    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT10-APP1-ST/1A        0x001A     /*MSG_NAME=HRX/RT10-APP1-ST/1A（接收消息物理块名），0x001A：终端接收消息序号*/
#define LEN_HRX/RT10-APP1-ST/1A    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT10-APP1-ST/1B        0x001B     /*MSG_NAME=HRX/RT10-APP1-ST/1B（接收消息物理块名），0x001B：终端接收消息序号*/
#define LEN_HRX/RT10-APP1-ST/1B    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT10-APP1-RC/1C        0x001C     /*MSG_NAME=HRX/RT10-APP1-RC/1C（接收消息物理块名），0x001C：终端接收消息序号*/
#define LEN_HRX/RT10-APP1-RC/1C    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT10-APP1-RC/1D        0x001D     /*MSG_NAME=HRX/RT10-APP1-RC/1D（接收消息物理块名），0x001D：终端接收消息序号*/
#define LEN_HRX/RT10-APP1-RC/1D    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT10-APP1-RC/1E        0x001E     /*MSG_NAME=HRX/RT10-APP1-RC/1E（接收消息物理块名），0x001E：终端接收消息序号*/
#define LEN_HRX/RT10-APP1-RC/1E    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
