#ifndef HEADER_ST7789VW
#define HEADER_ST7789VW

//System Function Command Table 1
#define NOP 0x00 // NOP
#define RDDSDR 0x0F // Read display
#define SLPIN 0x10 //Sleep in 
#define SLPOUT 0x11 //Sleep out
#define PTLON 0x12 //Partial mode on
#define NORON 0x13 //Partial off 
#define INVOFF 0x20 //Display inversion off
#define INVON 0x21  //Display inversion on
#define GAMSET 0x26 // Display inversion  on 
#define DISPOFF 0x28 // Display off 
#define DISPON 0x29 // Display off 
#define CASET 0x2A //  Column address set
#define RASET 0x2B //  Row address set
#define RAMWR 0x2C //  Memory write
#define RAMRD 0x2E //  Memory read 
#define PTLAR 0x30 //  Partial sart/end 
#define VSCRDEF 0x33 //  Vertical scrolling 
#define TEOFF 0x34 // Tearing effect line off
#define TEON 0x35 //Tearing effect line on
#define MADCTL 0x36 // Memory data access control
#define VSCRSADD 0x37 // Vertical scrolling start address
#define IDMOFF 0x38 //  Idle mode off 
#define IDMON 0x39 //  Idle mode on 
#define COLMOD 0x3A //  Interface pixel format 
#define RAMWRC 0x3C //  Memory write continue
#define RAMRDC 0x3E //  Memory read continue
#define TESCAN 0x44 // Set tear scanline
#define RDTESCAN 0x45 // Get scanline  
#define WRDISBV 0x51 //  Write display brightness
#define RDDISBV 0x52 //  Read display brightness value
#define WRCTRLD 0x53 // Write CTRL display
#define RDCTRLD 0x54 //  Read CTRL value dsiplay 
#define WRCACE 0x55 // Write content  adaptive brightness control and Color enhancemnet
#define RDCABC 0x56 // Read content adaptive brightness control
#define WRCABCMB 0x5E // Write CABC minimum brightness
#define RDCABCMB 0x5F // Read CABC minimum brightness 
#define RDABCSDR 0x68 // Read Automatic  Brightness Control Self-Diagnostic Result
#define RDID1 0xDA //Read ID1 
#define RDID2 0xDB //Read ID2 
#define RDID3 0xDC //Read ID3 
//System Function Command Table 2
#define RAMCTRL 0xB0 //RAM Control
#define RGBCTRL 0xB1 //RGB Control
#define PORCTRL 0xB2 //Porch Control
#define FRCTRL1 0xB3 //Frame Rate Control 1
#define PARCTRL 0xB5 //Partial Control
#define GCTRL 0xB7 //Gate Control
#define GTADJ 0xB8 //Gate on timing adjustment
#define DGMEN 0xBA //Digital Gamma Enable
#define VCOMS 0xBB //VCOM Setting
#define POWSAVE 0xBC //Power saving mode
#define DLPOFFSAVE 0xBD //Display off Power save
#define LCMCTRL 0xC0 //LCM Control
#define IDSET 0xC1 //ID Setting
#define VDVVRHEN 0xC2 //VDV and VRH Command Enable
#define VRHS 0xC3 //VRH Set
#define VDVSET 0xC4 //VDV Setting
#define VCMOFSET 0xC5 //VCOM Offset Set
#define FRCTR2 0xC6 //FR Control 2
#define CABCCTRL 0xC7 //CABC Control
#define REGSEL1 0xC8 //Register value section 1
#define REGSEL2 0xCA //Register value section 2
#define PWMFRSEL 0xCC //PWM Frequency Selection
#define PWCTRL1 0xD0 //Power Control 1
#define VAPVANEN 0xD2 //Enable VAP/VAN signal output

//idk waht going to with CMD2EN TODO 
//TODO findout what going on with CMD2EN 
#define CMD2EN 0xDF//Command 2 Enable
#define CMD2EN_p1 0x5A // CMD2EN paraemter 1
#define CMD2EN_p2 0x69 // CMD2EN paraemter 2 
#define CMD2EN_p3 0x02 // CMD2EN paraemter 3

#define PVGAMCTRL  0xE0 //Positive Voltage Gamma Control
#define NVGAMCTRL 0xE1 //Negative Voltage Gamma Control
#define DGMLUTR 0xE2 //Digital Gamma Look-up Table for Red
#define DGMLUTB 0xE3 //Digital Gamma Look-up Table for Blue
#define GATECTRL 0xE4 //Gate Control
#define SPI2EN 0xE7 //SPI2 Enable
#define PWCTRL2 0xE8 //Power Control 2 
#define EQCTRL 0xE9 //Equalize Time Control
#define PROMCTRL 0xEC //Program counter
#define PROMEN 0xFA //Program Mode Enable
#define NVMSET 0xFC //NVM setting
#define PROMACT 0xFE //Program Action










#endif


