EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L Connector_Generic:Conn_01x02 J1
U 1 1 62BCF40B
P 2150 3150
F 0 "J1" H 2230 3142 50  0000 L CNN
F 1 "Conn_01x02" H 2230 3051 50  0000 L CNN
F 2 "TerminalBlock_Phoenix:TerminalBlock_Phoenix_MKDS-1,5-2-5.08_1x02_P5.08mm_Horizontal" H 2150 3150 50  0001 C CNN
F 3 "~" H 2150 3150 50  0001 C CNN
	1    2150 3150
	-1   0    0    -1  
$EndComp
$Comp
L LED:NeoPixel_THT D1
U 1 1 62BCF852
P 6350 4700
F 0 "D1" H 6694 4746 50  0000 L CNN
F 1 "NeoPixel_THT" H 6694 4655 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x04_P2.54mm_Vertical" H 6400 4400 50  0001 L TNN
F 3 "https://www.adafruit.com/product/1938" H 6450 4325 50  0001 L TNN
	1    6350 4700
	1    0    0    -1  
$EndComp
$Comp
L LED:NeoPixel_THT D2
U 1 1 62BD0069
P 7400 4700
F 0 "D2" H 7744 4746 50  0000 L CNN
F 1 "NeoPixel_THT" H 7744 4655 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x04_P2.54mm_Vertical" H 7450 4400 50  0001 L TNN
F 3 "https://www.adafruit.com/product/1938" H 7500 4325 50  0001 L TNN
	1    7400 4700
	1    0    0    -1  
$EndComp
$Comp
L LED:NeoPixel_THT D3
U 1 1 62BD030E
P 8500 4700
F 0 "D3" H 8844 4746 50  0000 L CNN
F 1 "NeoPixel_THT" H 8844 4655 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x04_P2.54mm_Vertical" H 8550 4400 50  0001 L TNN
F 3 "https://www.adafruit.com/product/1938" H 8600 4325 50  0001 L TNN
	1    8500 4700
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x02 J2
U 1 1 62BD087D
P 2150 3550
F 0 "J2" H 2230 3542 50  0000 L CNN
F 1 "Conn_01x02" H 2230 3451 50  0000 L CNN
F 2 "TerminalBlock_Phoenix:TerminalBlock_Phoenix_MKDS-1,5-2-5.08_1x02_P5.08mm_Horizontal" H 2150 3550 50  0001 C CNN
F 3 "~" H 2150 3550 50  0001 C CNN
	1    2150 3550
	-1   0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x02 J3
U 1 1 62BD09EC
P 2200 3950
F 0 "J3" H 2280 3942 50  0000 L CNN
F 1 "Conn_01x02" H 2280 3851 50  0000 L CNN
F 2 "TerminalBlock_Phoenix:TerminalBlock_Phoenix_MKDS-1,5-2-5.08_1x02_P5.08mm_Horizontal" H 2200 3950 50  0001 C CNN
F 3 "~" H 2200 3950 50  0001 C CNN
	1    2200 3950
	-1   0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x02 J4
U 1 1 62BD0BC9
P 2200 4350
F 0 "J4" H 2280 4342 50  0000 L CNN
F 1 "Conn_01x02" H 2280 4251 50  0000 L CNN
F 2 "TerminalBlock_Phoenix:TerminalBlock_Phoenix_MKDS-1,5-2-5.08_1x02_P5.08mm_Horizontal" H 2200 4350 50  0001 C CNN
F 3 "~" H 2200 4350 50  0001 C CNN
	1    2200 4350
	-1   0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x02 J5
U 1 1 62BD0D8D
P 2200 4750
F 0 "J5" H 2280 4742 50  0000 L CNN
F 1 "Conn_01x02" H 2280 4651 50  0000 L CNN
F 2 "TerminalBlock_Phoenix:TerminalBlock_Phoenix_MKDS-1,5-2-5.08_1x02_P5.08mm_Horizontal" H 2200 4750 50  0001 C CNN
F 3 "~" H 2200 4750 50  0001 C CNN
	1    2200 4750
	-1   0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x02 J6
U 1 1 62BD110E
P 6950 2950
F 0 "J6" H 6868 2625 50  0000 C CNN
F 1 "Conn_01x02" H 6868 2716 50  0000 C CNN
F 2 "TerminalBlock_Phoenix:TerminalBlock_Phoenix_MKDS-1,5-2-5.08_1x02_P5.08mm_Horizontal" H 6950 2950 50  0001 C CNN
F 3 "~" H 6950 2950 50  0001 C CNN
	1    6950 2950
	1    0    0    1   
$EndComp
$Comp
L Esp32DFR0478:DFR0478 U1
U 1 1 62BD155B
P 4500 1950
F 0 "U1" V 4319 1850 50  0000 C CNN
F 1 "DFR0478" V 4410 1850 50  0000 C CNN
F 2 "Esp32DfrRobot:Esp32DFR0478" H 6650 2550 50  0001 L CNN
F 3 "https://datasheet.datasheetarchive.com/originals/distributors/DKDS-1/13356.pdf" H 6650 2450 50  0001 L CNN
F 4 "Development Boards & Kits - Wireless FireBeetle ESP32 IOT MCU" H 6650 2350 50  0001 L CNN "Description"
F 5 "" H 6650 2250 50  0001 L CNN "Height"
F 6 "DFRobot" H 6650 2150 50  0001 L CNN "Manufacturer_Name"
F 7 "DFR0478" H 6650 2050 50  0001 L CNN "Manufacturer_Part_Number"
F 8 "426-DFR0478" H 6650 1950 50  0001 L CNN "Mouser Part Number"
F 9 "https://www.mouser.co.uk/ProductDetail/DFRobot/DFR0478?qs=EU6FO9ffTwc%252BR65h2NUGQw%3D%3D" H 6650 1850 50  0001 L CNN "Mouser Price/Stock"
F 10 "DFR0478" H 6650 1750 50  0001 L CNN "Arrow Part Number"
F 11 "https://www.arrow.com/en/products/dfr0478/dfrobot?region=nac" H 6650 1650 50  0001 L CNN "Arrow Price/Stock"
	1    4500 1950
	0    1    1    0   
$EndComp
$Comp
L Device:R R1
U 1 1 62BD321F
P 2950 3100
F 0 "R1" H 3020 3146 50  0000 L CNN
F 1 "R" H 3020 3055 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P10.16mm_Horizontal" V 2880 3100 50  0001 C CNN
F 3 "~" H 2950 3100 50  0001 C CNN
	1    2950 3100
	-1   0    0    -1  
$EndComp
$Comp
L Device:R R2
U 1 1 62BD3B99
P 2950 3500
F 0 "R2" H 3020 3546 50  0000 L CNN
F 1 "R" H 3020 3455 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P10.16mm_Horizontal" V 2880 3500 50  0001 C CNN
F 3 "~" H 2950 3500 50  0001 C CNN
	1    2950 3500
	-1   0    0    -1  
$EndComp
$Comp
L Device:R R3
U 1 1 62BD3D80
P 2950 3900
F 0 "R3" H 3020 3946 50  0000 L CNN
F 1 "R" H 3020 3855 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P10.16mm_Horizontal" V 2880 3900 50  0001 C CNN
F 3 "~" H 2950 3900 50  0001 C CNN
	1    2950 3900
	-1   0    0    -1  
$EndComp
$Comp
L Device:R R4
U 1 1 62BD3F7A
P 2950 4300
F 0 "R4" H 3020 4346 50  0000 L CNN
F 1 "R" H 3020 4255 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P10.16mm_Horizontal" V 2880 4300 50  0001 C CNN
F 3 "~" H 2950 4300 50  0001 C CNN
	1    2950 4300
	-1   0    0    -1  
$EndComp
$Comp
L Device:R R5
U 1 1 62BD427E
P 2950 4700
F 0 "R5" H 3020 4746 50  0000 L CNN
F 1 "R" H 3020 4655 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P10.16mm_Horizontal" V 2880 4700 50  0001 C CNN
F 3 "~" H 2950 4700 50  0001 C CNN
	1    2950 4700
	-1   0    0    -1  
$EndComp
$Comp
L Device:R R6
U 1 1 62BD45C9
P 6250 2700
F 0 "R6" H 6320 2746 50  0000 L CNN
F 1 "R" H 6320 2655 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P10.16mm_Horizontal" V 6180 2700 50  0001 C CNN
F 3 "~" H 6250 2700 50  0001 C CNN
	1    6250 2700
	1    0    0    -1  
$EndComp
Wire Wire Line
	3250 4050 3250 3750
Wire Wire Line
	3250 3750 3500 3750
Wire Wire Line
	3500 3850 3300 3850
Wire Wire Line
	3500 3950 3350 3950
Wire Wire Line
	2950 3650 3500 3650
Wire Wire Line
	3350 3550 3350 3250
Wire Wire Line
	3350 3250 2950 3250
Wire Wire Line
	3350 3550 3500 3550
Wire Wire Line
	3300 3850 3300 4450
Wire Wire Line
	3300 4450 2950 4450
Wire Wire Line
	3350 3950 3350 4850
Wire Wire Line
	3350 4850 2950 4850
Wire Wire Line
	2950 2950 3150 2950
Wire Wire Line
	3150 2950 3150 5000
Wire Wire Line
	3150 5000 5750 5000
Connection ~ 6350 5000
Wire Wire Line
	6350 5000 7400 5000
Connection ~ 7400 5000
Wire Wire Line
	7400 5000 8500 5000
Wire Wire Line
	5300 2550 5750 2550
Wire Wire Line
	5750 2550 5750 5000
Connection ~ 5750 5000
Wire Wire Line
	5750 5000 6350 5000
Wire Wire Line
	6250 2550 5750 2550
Connection ~ 5750 2550
Wire Wire Line
	6050 4700 6000 4700
Wire Wire Line
	6000 4700 6000 3750
Wire Wire Line
	6000 3750 5300 3750
Wire Wire Line
	5300 3650 7100 3650
Wire Wire Line
	7100 3650 7100 4700
Wire Wire Line
	5300 3550 8200 3550
Wire Wire Line
	8200 3550 8200 4700
Wire Wire Line
	8500 4400 7400 4400
Connection ~ 7400 4400
Wire Wire Line
	7400 4400 6350 4400
Wire Wire Line
	6350 4400 5550 4400
Wire Wire Line
	5550 2350 5300 2350
Connection ~ 6350 4400
Wire Wire Line
	5550 4400 5550 5150
Wire Wire Line
	5550 5150 2600 5150
Connection ~ 5550 4400
Wire Wire Line
	2950 3250 2350 3250
Connection ~ 2950 3250
Wire Wire Line
	2950 3650 2350 3650
Connection ~ 2950 3650
Wire Wire Line
	2400 4050 2950 4050
Connection ~ 2950 4050
Wire Wire Line
	2950 4050 3250 4050
Wire Wire Line
	2950 4450 2400 4450
Connection ~ 2950 4450
Wire Wire Line
	2950 4850 2400 4850
Connection ~ 2950 4850
Wire Wire Line
	2600 5150 2600 4750
Wire Wire Line
	2600 3150 2350 3150
Wire Wire Line
	5300 3250 5450 3250
Wire Wire Line
	5450 3250 5450 2850
Wire Wire Line
	5450 2850 6250 2850
Wire Wire Line
	5550 2350 5550 2950
Wire Wire Line
	6750 2850 6250 2850
Connection ~ 6250 2850
Wire Wire Line
	6750 2950 5550 2950
Connection ~ 5550 2950
Wire Wire Line
	5550 2950 5550 4400
NoConn ~ 6650 4700
NoConn ~ 7700 4700
NoConn ~ 8800 4700
Wire Wire Line
	2350 3550 2600 3550
Connection ~ 2600 3550
Wire Wire Line
	2600 3550 2600 3150
Wire Wire Line
	2400 3950 2600 3950
Connection ~ 2600 3950
Wire Wire Line
	2600 3950 2600 3550
Wire Wire Line
	2400 4350 2600 4350
Connection ~ 2600 4350
Wire Wire Line
	2600 4350 2600 3950
Wire Wire Line
	2400 4750 2600 4750
Connection ~ 2600 4750
Wire Wire Line
	2600 4750 2600 4350
$EndSCHEMATC
