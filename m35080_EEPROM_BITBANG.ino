/*
=====================================================================
https://github.com/Mihaylov93/m35080_EEPROM                         
Author: Petar Petrov                                                       
28/06/20115                                                         
=====================================================================

The M35080 device consists of 1024x8 bits of low power EEPROM.
The device is accessed by a simple SPI-compatible serial interface.

The bus signals consist of a serial clock input (C), a serial data 
input (D) and aserial data output (Q)

The device is selected when the chip select input (S) is held low. 

Data is clocked in during the low to high transition of the clock, C.
Data is clocked out during the high to low transition of the clock.
*/

#define Chip_Select 11 // Chip Select (S)
#define DATAIN 10      // Serial Output (Q)
#define Sclk 9         // Serial Clock (C)
#define DATAOUT 8      // Serial Input (D)

//Instruction Set
#define WREN B00000110   // Set Write Enable Latch
#define WRDI B00000100   // Reset Write Enable Latch
#define RDSR B00000101   // Read Status Register
#define WRSR B00000001   // Write Status Register
#define READ B00000011   // Read Data from Memory Array
#define WRITE B00000010  // Write Data to Memory Array
#define WRINC B00000111  // Write Data to Secure Array

void setup(){
  pinMode(Chip_Select, OUTPUT);
  pinMode(DATAIN, INPUT);
  pinMode(Sclk, OUTPUT);
  pinMode(DATAOUT, OUTPUT);
  Serial.begin(9600);
  Serial.println("Done setting up..."); 
}

void loop() {
  

}
