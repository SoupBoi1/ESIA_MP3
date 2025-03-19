#ifndef HEADER_ST7789VW
#define HEADER_ST7789VW

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









#endif


