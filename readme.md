# Illumination board

This board to be used with time of flight camera. There are interesting chips from Melexis, Infineon, TI and Sony. [My another repository](https://github.com/lnsru/melexis_VGA_ToF_camera "VGA time of flight camera") contains design with Melexis VGA resolution time of flight sensor.

[Higly integrated chip from iC-Haus](http://www.ichaus.de/product/iC-HGP "iC-HGP") was choosen for simpler design. It is specialized high current high speed swich for applications like this one. Buy some from [iC-Haus USA shop.](https://us-shop.ichaus.com/ProductDetails.asp?ProductCode=iC%2DHGP "Buy iC-HGP") 

The design should work with LEDs from Osram and Lumileds. Check datasheet for needed exact voltage, I assume, it will work with 10-12 V power supply.

Following parts are supported:
* Lumileds L1IG-0850000000000 (assembled on prototype board)
* Lumileds L1IG-0940000000000
* Osram SFH 4770S
* Osram SFH 4775S

<img src="https://github.com/lnsru/melexis_ToF_illumination_icHaus/blob/master/Bringup/board.jpg" alt="LEDs on"	title="LEDs on" width="500" height="500" />

Note: modern phones have infrared filters and can't take nice photos. The glowing red is LED illumination in visible spectrum. The pulses were seen with iPhone 3G and oscilloscope.
