/*************** mBASE_Version:1_1.02.07 ****************//*对应的总线消息库版本信息*/
/********************* TABLE LIST FOR Rt014 APP6F MSG: ********************/
/* TX MSG LIST: */                                   
#define RT6F_TX_NUM                0x0009     /*APP_ID，RT APP发送应用消息包个数，不大于256*/
#define HTX/RT14-APP1-ST/00        0x0076     /*MSG_NAME=HTX/RT14-APP1-ST/00（发送消息物理块名），0x0076发送消息MSG_ID*/
#define LEN_HTX/RT14-APP1-ST/00    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/RT14-APP1-ST/01        0x0077     /*MSG_NAME=HTX/RT14-APP1-ST/01（发送消息物理块名），0x0077发送消息MSG_ID*/
#define LEN_HTX/RT14-APP1-ST/01    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/RT14-APP1-ST/02        0x0078     /*MSG_NAME=HTX/RT14-APP1-ST/02（发送消息物理块名），0x0078发送消息MSG_ID*/
#define LEN_HTX/RT14-APP1-ST/02    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/RT14-APP1-ST/03        0x0079     /*MSG_NAME=HTX/RT14-APP1-ST/03（发送消息物理块名），0x0079发送消息MSG_ID*/
#define LEN_HTX/RT14-APP1-ST/03    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/RT14-APP1-RC/04        0x007A     /*MSG_NAME=HTX/RT14-APP1-RC/04（发送消息物理块名），0x007A发送消息MSG_ID*/
#define LEN_HTX/RT14-APP1-RC/04    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/RT14-APP1-RC/05        0x007B     /*MSG_NAME=HTX/RT14-APP1-RC/05（发送消息物理块名），0x007B发送消息MSG_ID*/
#define LEN_HTX/RT14-APP1-RC/05    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/RT14-APP1-RC/06        0x007C     /*MSG_NAME=HTX/RT14-APP1-RC/06（发送消息物理块名），0x007C发送消息MSG_ID*/
#define LEN_HTX/RT14-APP1-RC/06    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/RT14-APP1-RC/07        0x007D     /*MSG_NAME=HTX/RT14-APP1-RC/07（发送消息物理块名），0x007D发送消息MSG_ID*/
#define LEN_HTX/RT14-APP1-RC/07    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/RT14-APP1-BE/08        0x007E     /*MSG_NAME=HTX/RT14-APP1-BE/08（发送消息物理块名），0x007E发送消息MSG_ID*/
#define LEN_HTX/RT14-APP1-BE/08    0xD6D8     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
/* RX MSG LIST:*/                                            
#define RT6F_RX_NUM                0x000D     /*APP_ID，RT APP发送应用消息包个数，不大于256*/
#define HRX/BC-APP1-ST/00          0x0000     /*MSG_NAME=HRX/BC-APP1-ST/00（接收消息物理块名），0x0000：终端接收消息序号*/
#define LEN_HRX/BC-APP1-ST/00      0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/BC-APP1-RC/01          0x0001     /*MSG_NAME=HRX/BC-APP1-RC/01（接收消息物理块名），0x0001：终端接收消息序号*/
#define LEN_HRX/BC-APP1-RC/01      0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/BC-APP1-ST/02          0x0002     /*MSG_NAME=HRX/BC-APP1-ST/02（接收消息物理块名），0x0002：终端接收消息序号*/
#define LEN_HRX/BC-APP1-ST/02      0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/BC-APP1-ST/03          0x0003     /*MSG_NAME=HRX/BC-APP1-ST/03（接收消息物理块名），0x0003：终端接收消息序号*/
#define LEN_HRX/BC-APP1-ST/03      0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT1-APP1-ST/04         0x0004     /*MSG_NAME=HRX/RT1-APP1-ST/04（接收消息物理块名），0x0004：终端接收消息序号*/
#define LEN_HRX/RT1-APP1-ST/04     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT1-APP1-RC/05         0x0005     /*MSG_NAME=HRX/RT1-APP1-RC/05（接收消息物理块名），0x0005：终端接收消息序号*/
#define LEN_HRX/RT1-APP1-RC/05     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT3-APP1-ST/06         0x0006     /*MSG_NAME=HRX/RT3-APP1-ST/06（接收消息物理块名），0x0006：终端接收消息序号*/
#define LEN_HRX/RT3-APP1-ST/06     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT3-APP1-RC/07         0x0007     /*MSG_NAME=HRX/RT3-APP1-RC/07（接收消息物理块名），0x0007：终端接收消息序号*/
#define LEN_HRX/RT3-APP1-RC/07     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT3-APP1-RC/08         0x0008     /*MSG_NAME=HRX/RT3-APP1-RC/08（接收消息物理块名），0x0008：终端接收消息序号*/
#define LEN_HRX/RT3-APP1-RC/08     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT5-APP1-RC/09         0x0009     /*MSG_NAME=HRX/RT5-APP1-RC/09（接收消息物理块名），0x0009：终端接收消息序号*/
#define LEN_HRX/RT5-APP1-RC/09     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT5-APP1-BE/0A         0x000A     /*MSG_NAME=HRX/RT5-APP1-BE/0A（接收消息物理块名），0x000A：终端接收消息序号*/
#define LEN_HRX/RT5-APP1-BE/0A     0xEA60     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT6-APP1-ST/0B         0x000B     /*MSG_NAME=HRX/RT6-APP1-ST/0B（接收消息物理块名），0x000B：终端接收消息序号*/
#define LEN_HRX/RT6-APP1-ST/0B     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT6-APP1-ST/0C         0x000C     /*MSG_NAME=HRX/RT6-APP1-ST/0C（接收消息物理块名），0x000C：终端接收消息序号*/
#define LEN_HRX/RT6-APP1-ST/0C     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
