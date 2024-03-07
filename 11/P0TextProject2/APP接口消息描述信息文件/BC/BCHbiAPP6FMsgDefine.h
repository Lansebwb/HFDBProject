/*************** mBASE_Version:1_1.02.07 ****************//*对应的总线消息库版本信息*/
/********************* TABLE LIST FOR BC APP6F MSG: ********************/
/* TX MSG LIST: */                                          
#define BC6F_TX_NUM                0x0009     /*APP_ID，BC APP发送应用消息包个数，不大于256*/
#define HTX/BC-APP1-ST/00          0x0091     /*MSG_NAME=HTX/BC-APP1-ST/00（发送消息物理块名），0x0091发送消息MSG_ID*/
#define LEN_HTX/BC-APP1-ST/00      0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/BC-APP1-ST/01          0x0092     /*MSG_NAME=HTX/BC-APP1-ST/01（发送消息物理块名），0x0092发送消息MSG_ID*/
#define LEN_HTX/BC-APP1-ST/01      0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/BC-APP1-ST/02          0x0093     /*MSG_NAME=HTX/BC-APP1-ST/02（发送消息物理块名），0x0093发送消息MSG_ID*/
#define LEN_HTX/BC-APP1-ST/02      0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/BC-APP1-ST/03          0x0094     /*MSG_NAME=HTX/BC-APP1-ST/03（发送消息物理块名），0x0094发送消息MSG_ID*/
#define LEN_HTX/BC-APP1-ST/03      0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/BC-APP1-RC/04          0x0095     /*MSG_NAME=HTX/BC-APP1-RC/04（发送消息物理块名），0x0095发送消息MSG_ID*/
#define LEN_HTX/BC-APP1-RC/04      0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/BC-APP1-RC/05          0x0096     /*MSG_NAME=HTX/BC-APP1-RC/05（发送消息物理块名），0x0096发送消息MSG_ID*/
#define LEN_HTX/BC-APP1-RC/05      0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/BC-APP1-RC/06          0x0097     /*MSG_NAME=HTX/BC-APP1-RC/06（发送消息物理块名），0x0097发送消息MSG_ID*/
#define LEN_HTX/BC-APP1-RC/06      0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/BC-APP1-RC/07          0x0098     /*MSG_NAME=HTX/BC-APP1-RC/07（发送消息物理块名），0x0098发送消息MSG_ID*/
#define LEN_HTX/BC-APP1-RC/07      0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HTX/BC-APP1-BE/08          0x0099     /*MSG_NAME=HTX/BC-APP1-BE/08（发送消息物理块名），0x0099发送消息MSG_ID*/
#define LEN_HTX/BC-APP1-BE/08      0x9C40     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
/* RX MSG LIST: */                                        
#define BC6F_RX_NUM                0x002A     /*APP_ID，BC APP接收应用消息包个数，不大于256*/
#define HRX/RT13-APP1-ST/00        0x0000     /*MSG_NAME=HRX/RT13-APP1-ST/00（接收消息物理块名），0x00：终端接收消息序号*/
#define LEN_HRX/RT13-APP1-ST/00    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT13-APP1-RC/01        0x0001     /*MSG_NAME=HRX/RT13-APP1-RC/01（接收消息物理块名），0x01：终端接收消息序号*/
#define LEN_HRX/RT13-APP1-RC/01    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT13-APP1-RC/02        0x0002     /*MSG_NAME=HRX/RT13-APP1-RC/02（接收消息物理块名），0x02：终端接收消息序号*/
#define LEN_HRX/RT13-APP1-RC/02    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT13-APP1-RC/03        0x0003     /*MSG_NAME=HRX/RT13-APP1-RC/03（接收消息物理块名），0x03：终端接收消息序号*/
#define LEN_HRX/RT13-APP1-RC/03    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT13-APP1-RC/04        0x0004     /*MSG_NAME=HRX/RT13-APP1-RC/04（接收消息物理块名），0x04：终端接收消息序号*/
#define LEN_HRX/RT13-APP1-RC/04    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT13-APP1-BE/05        0x0005     /*MSG_NAME=HRX/RT13-APP1-BE/05（接收消息物理块名），0x05：终端接收消息序号*/
#define LEN_HRX/RT13-APP1-BE/05    0xC350     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT14-APP1-ST/06        0x0006     /*MSG_NAME=HRX/RT14-APP1-ST/06（接收消息物理块名），0x06：终端接收消息序号*/
#define LEN_HRX/RT14-APP1-ST/06    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT14-APP1-ST/07        0x0007     /*MSG_NAME=HRX/RT14-APP1-ST/07（接收消息物理块名），0x07：终端接收消息序号*/
#define LEN_HRX/RT14-APP1-ST/07    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT11-APP1-ST/08        0x0008     /*MSG_NAME=HRX/RT11-APP1-ST/08（接收消息物理块名），0x08：终端接收消息序号*/
#define LEN_HRX/RT11-APP1-ST/08    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT11-APP1-ST/09        0x0009     /*MSG_NAME=HRX/RT11-APP1-ST/09（接收消息物理块名），0x09：终端接收消息序号*/
#define LEN_HRX/RT11-APP1-ST/09    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT11-APP1-RC/0A        0x000A     /*MSG_NAME=HRX/RT11-APP1-RC/0A（接收消息物理块名），0x0A：终端接收消息序号*/
#define LEN_HRX/RT11-APP1-RC/0A    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT11-APP1-RC/0B        0x000B     /*MSG_NAME=HRX/RT11-APP1-RC/0B（接收消息物理块名），0x0B：终端接收消息序号*/
#define LEN_HRX/RT11-APP1-RC/0B    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT11-APP1-RC/0C        0x000C     /*MSG_NAME=HRX/RT11-APP1-RC/0C（接收消息物理块名），0x0C：终端接收消息序号*/
#define LEN_HRX/RT11-APP1-RC/0C    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT15-APP1-BE/0D        0x000D     /*MSG_NAME=HRX/RT15-APP1-BE/0D（接收消息物理块名），0x0D：终端接收消息序号*/
#define LEN_HRX/RT15-APP1-BE/0D    0xFDE8     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT16-APP1-ST/0E        0x000E     /*MSG_NAME=HRX/RT16-APP1-ST/0E（接收消息物理块名），0x0E：终端接收消息序号*/
#define LEN_HRX/RT16-APP1-ST/0E    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT16-APP1-ST/0F        0x000F     /*MSG_NAME=HRX/RT16-APP1-ST/0F（接收消息物理块名），0x0F：终端接收消息序号*/
#define LEN_HRX/RT16-APP1-ST/0F    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT16-APP1-ST/10        0x0010     /*MSG_NAME=HRX/RT16-APP1-ST/10（接收消息物理块名），0x10：终端接收消息序号*/
#define LEN_HRX/RT16-APP1-ST/10    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT16-APP1-ST/11        0x0011     /*MSG_NAME=HRX/RT16-APP1-ST/11（接收消息物理块名），0x11：终端接收消息序号*/
#define LEN_HRX/RT16-APP1-ST/11    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT16-APP1-RC/12        0x0012     /*MSG_NAME=HRX/RT16-APP1-RC/12（接收消息物理块名），0x12：终端接收消息序号*/
#define LEN_HRX/RT16-APP1-RC/12    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT8-APP1-BE/13         0x0013     /*MSG_NAME=HRX/RT8-APP1-BE/13（接收消息物理块名），0x13：终端接收消息序号*/
#define LEN_HRX/RT8-APP1-BE/13     0x13880     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT9-APP1-ST/14         0x0014     /*MSG_NAME=HRX/RT9-APP1-ST/14（接收消息物理块名），0x14：终端接收消息序号*/
#define LEN_HRX/RT9-APP1-ST/14     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT9-APP1-ST/15         0x0015     /*MSG_NAME=HRX/RT9-APP1-ST/15（接收消息物理块名），0x15：终端接收消息序号*/
#define LEN_HRX/RT9-APP1-ST/15     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT9-APP1-ST/16         0x0016     /*MSG_NAME=HRX/RT9-APP1-ST/16（接收消息物理块名），0x16：终端接收消息序号*/
#define LEN_HRX/RT9-APP1-ST/16     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT9-APP1-ST/17         0x0017     /*MSG_NAME=HRX/RT9-APP1-ST/17（接收消息物理块名），0x17：终端接收消息序号*/
#define LEN_HRX/RT9-APP1-ST/17     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT5-APP1-BE/18         0x0018     /*MSG_NAME=HRX/RT5-APP1-BE/18（接收消息物理块名），0x18：终端接收消息序号*/
#define LEN_HRX/RT5-APP1-BE/18     0xEA60     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT6-APP1-ST/19         0x0019     /*MSG_NAME=HRX/RT6-APP1-ST/19（接收消息物理块名），0x19：终端接收消息序号*/
#define LEN_HRX/RT6-APP1-ST/19     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT6-APP1-ST/1A         0x001A     /*MSG_NAME=HRX/RT6-APP1-ST/1A（接收消息物理块名），0x1A：终端接收消息序号*/
#define LEN_HRX/RT6-APP1-ST/1A     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT6-APP1-ST/1B         0x001B     /*MSG_NAME=HRX/RT6-APP1-ST/1B（接收消息物理块名），0x1B：终端接收消息序号*/
#define LEN_HRX/RT6-APP1-ST/1B     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT3-APP1-BE/1C         0x001C     /*MSG_NAME=HRX/RT3-APP1-BE/1C（接收消息物理块名），0x1C：终端接收消息序号*/
#define LEN_HRX/RT3-APP1-BE/1C     0xC350     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT4-APP1-ST/1D         0x001D     /*MSG_NAME=HRX/RT4-APP1-ST/1D（接收消息物理块名），0x1D：终端接收消息序号*/
#define LEN_HRX/RT4-APP1-ST/1D     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT4-APP1-ST/1E         0x001E     /*MSG_NAME=HRX/RT4-APP1-ST/1E（接收消息物理块名），0x1E：终端接收消息序号*/
#define LEN_HRX/RT4-APP1-ST/1E     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT4-APP1-ST/1F         0x001F     /*MSG_NAME=HRX/RT4-APP1-ST/1F（接收消息物理块名），0x1F：终端接收消息序号*/
#define LEN_HRX/RT4-APP1-ST/1F     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT1-APP1-RC/20         0x0020     /*MSG_NAME=HRX/RT1-APP1-RC/20（接收消息物理块名），0x20：终端接收消息序号*/
#define LEN_HRX/RT1-APP1-RC/20     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT1-APP1-RC/21         0x0021     /*MSG_NAME=HRX/RT1-APP1-RC/21（接收消息物理块名），0x21：终端接收消息序号*/
#define LEN_HRX/RT1-APP1-RC/21     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT1-APP1-BE/22         0x0022     /*MSG_NAME=HRX/RT1-APP1-BE/22（接收消息物理块名），0x22：终端接收消息序号*/
#define LEN_HRX/RT1-APP1-BE/22     0x493E0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT2-APP1-ST/23         0x0023     /*MSG_NAME=HRX/RT2-APP1-ST/23（接收消息物理块名），0x23：终端接收消息序号*/
#define LEN_HRX/RT2-APP1-ST/23     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT2-APP1-ST/24         0x0024     /*MSG_NAME=HRX/RT2-APP1-ST/24（接收消息物理块名），0x24：终端接收消息序号*/
#define LEN_HRX/RT2-APP1-ST/24     0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT14-APP1-ST/25        0x0025     /*MSG_NAME=HRX/RT14-APP1-ST/25（接收消息物理块名），0x25：终端接收消息序号*/
#define LEN_HRX/RT14-APP1-ST/25    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT14-APP1-RC/26        0x0026     /*MSG_NAME=HRX/RT14-APP1-RC/26（接收消息物理块名），0x26：终端接收消息序号*/
#define LEN_HRX/RT14-APP1-RC/26    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT15-APP1-ST/27        0x0027     /*MSG_NAME=HRX/RT15-APP1-ST/27（接收消息物理块名），0x27：终端接收消息序号*/
#define LEN_HRX/RT15-APP1-ST/27    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT15-APP1-ST/28        0x0028     /*MSG_NAME=HRX/RT15-APP1-ST/28（接收消息物理块名），0x28：终端接收消息序号*/
#define LEN_HRX/RT15-APP1-ST/28    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
#define HRX/RT15-APP1-RC/29        0x0029     /*MSG_NAME=HRX/RT15-APP1-RC/29（接收消息物理块名），0x29：终端接收消息序号*/
#define LEN_HRX/RT15-APP1-RC/29    0x07D0     /*MSG_LEN:unit 32bits WORD,≤0x0200*/
