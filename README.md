# Tire Tool
## An open-source datalogging tire pyrometer with built in thermal camera and tire pressure gauge


<a href="https://ibb.co/xzqxwv3"><img src="https://i.ibb.co/gtZkQ16/Screenshot-3.png" alt="Screenshot-3" border="0" /></a>
<a href="https://ibb.co/5BzPQxz"><img src="https://i.ibb.co/f4Ks3GK/IMG-0333.jpg" alt="IMG-0333" border="0" /></a>

The GUI was developed using the GUI-Slice library and builder. The GUI-Slice project file is included so changed to the GUI can be easily made as needed.

This project is not for the faint hearted, alot of technical knowlage is needed to complete this build. 

# This project is not finished yet, there is no point openening any issues! 
All issues will be ignored until the project is deemed complete, there are alot of changes still to be made!
This repo will be regularly updated, this is currently an unfished project, so keep that in mind if you make a fork.



# About the project
An open source datalogging tire pyrometer with built in thermal camera and tire pressure gauge.
The device is powered by 2 18650 lithium batteries and the brain is an ESP32 microcontroller.
The screen is a 2.8" TFT display with resistive touch.

<a href="https://ibb.co/9g2kRPp"><img src="https://i.ibb.co/Jt2wXZc/IMG-0322.jpg" alt="IMG-0322" border="0" /></a>
<a href="https://ibb.co/2KYq8Ty"><img src="https://i.ibb.co/w6ryJfR/IMG-0323.jpg" alt="IMG-0323" border="0" /></a>

## The device has 4 main functions:
* A tyre pressure gauge (with pressure release valve)
* A temperature gauge to read tire temps from a K-type thermocouple
* A thermal camera
* A datalogger that saves temperatures to SD card

<a href="https://ibb.co/DCbj1kB"><img src="https://i.ibb.co/swPXgQT/IMG-0224.jpg" alt="IMG-0224" border="0" /></a>

# Pressure Gauge
* Tire pressure is measured with a Honeywell ABP digital pressure sensor. The sensor is very accurate with a high digital resolution, with information being transferred over the I2C BUS.
* A hose with a tire valve adaptor is connected to the device via a DIN2.7 quick connector.
* There is a pressure release valve inside the device used to adjust pressure, which vents out the rear housing to avoid moisture build up inside the housing.
* Pressure is shown in BAR to the 3rd decimal point, with a maximum tolerance of 0.025%.
* Sensor refresh has been limited to 2Hz.
* There is a hold button, which will hold the measured value on the screen. If hold is enabled the value will remain unless the device is turned off, even if you leave the page to use other functions.

<a href="https://ibb.co/gJrxpg7"><img src="https://i.ibb.co/kXGtfcy/IMG-0226.jpg" alt="IMG-0226" border="0" /></a>

# Temperature gauge
* Tire temperature is measured with a K-type thermocouple probe, of which there are several specifically designed for motorsports.
* The signal from the thermocouple is digitised using an MCP9600 chip and a high resolution digital signal is also sent over the I2C BUS.
* Sensor refresh has also been limited to 2Hz.
* There is a hold button, which will hold the measured value on the screen. If hold is enabled the value will remain unless the device is turned off, even if you leave the page to use other functions.
* Temperature is shown in °c to 2 decimal points, with an accuracy of +/- 2°c depending on various factors.

<a href="https://ibb.co/SxSzmWX"><img src="https://i.ibb.co/Qc04HzF/IMG-0227.jpg" alt="IMG-0227" border="0" /></a>

# Thermal camera
* The thermal camera uses an 8x8 thermal array which is interpolated into a higher resolution image.
* A resolution of 18x15, 36x36, or 63x60 can be selected by the user via the settings menu. The default reslution is 36x36.
* There are 7 color pallets avaliable (Ironbow, Rainbow, RainbowHC, Arctic, White hot, Black hot, and Outdoor alert) which can be selected by the user in the settings menu. Each color pallet contains 433 24bit RGB colors.
* There is a cursor shown on the picture which shows the current temperature in the middle of the screen. The curser can be enabled/disabled in the settings menu.
* The measurement scale can be adjusted in various ways. The min and max temps can be individually adjusted by pressing the number box containing these values then entering the new values on the keypad that pops up. Alternitavely the AUTO button can be pressed which will take an average of all temperatures on screen and set the scale to the average +/- 4°c (default).  The auto scale range can be adjusted in the settings menu from +/- 1°c up to +/- 10°c.
* There is a hold button that will pause the picture from the thermal camera. If you leave the page to use other functions the paused image will be lost.
* There is a track button (road symbol), this button is used to take a reading of the asphalt temperature, which will be saved in the datalogger.

<a href="https://ibb.co/fNvvW5D"><img src="https://i.ibb.co/6tBBSxX/IMG-0228.jpg" alt="IMG-0228" border="0" /></a>
<a href="https://ibb.co/cgw7dcr"><img src="https://i.ibb.co/vwhK8xj/IMG-0229.jpg" alt="IMG-0229" border="0" /></a>

# DataLogger
* The data logger saves temperature readings taken from the tires in 3 steps (inside, middle, and outside). Date, time, ambient temperature, and track (asphalt) temperature will also be stored in each log.
* The defaut order to take measurements is front left first, then anticlockwise, although any wheel can be selected by pressing the desired wheel. However the order in which the measurements of the wheel are taken cannot be changed (inside to outside).
* Each time a temperature is taken the ok button (tick) is pressed to temporarily save the reading. 
* If a mistake is made the cancel button (x) can be pressed to delete the last reading.
* The color of the tires on screen will change to indicate the temperature that has been taken.
* The delta of each tire (green), and the average temperatures of the front, real, left, and right sides of the car (orange) are also calculated and shown on screen.
* The values will remain unless the device is turned off, even if you leave the page to use other functions.
* The delete button (trashcan) will delete all temporarily saved values.
* The save button (floppy disc) will open the file directory.
* When the file directory is open there will be 12 car folders and for each car folder 12 log files. Once a folder and file has been selected, the log can be saved by pressing the save button. A green progress bar will indicate the file has been succesfully saved.
* On the same page logs can be loaded, the folder and log file are selected and load is pressed. Once again a green progress bar will indicate success.
* Log files are saved on SD in .txt format, whaich can be easily accessed on any computer.

<a href="https://ibb.co/kHBFzzD"><img src="https://i.ibb.co/w0g188Q/IMG-0233.jpg" alt="IMG-0233" border="0" /></a>
<a href="https://ibb.co/z7WZHN8"><img src="https://i.ibb.co/xfK683m/IMG-0231.jpg" alt="IMG-0231" border="0" /></a>
<img src="https://i.ibb.co/K9NzjK0/Screenshot-10.png" alt="Screenshot-10" border="0">

# Screensaver
* If the device is not used for a period of 2 minutes or more a screen saver will be enabled. It is a black screen with date and time.
* To exit the screen saver simply press any button or touch the touch screen.

<a href="https://ibb.co/MgZxm7s"><img src="https://i.ibb.co/Cwm3fQz/IMG-0234.jpg" alt="IMG-0234" border="0" /></a>

# Header
* The header is shown on every page and contains ambient temperature, the track (asphalt) temperature, the date, and time.


