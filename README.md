# LATEXCS2002
GATEQ-2002-26
# Digital Design through Arduino
-----------------------------
Code and Documentation of final GATE Question Implementation for Digital Design with Arduino Workshop
QUESTION 26, GATE 2002-CS
- https://github.com/KhusheyT/LATEXCS2002/blob/main/latex_documentation/main.pdf
- https://github.com/KhusheyT/LATEXCS2002/blob/main/codes/code.ino
  
---
## Dependencies
- PlatformIO
    - Core[CLI]
- LATEX
    - enumitems
    - listings
    - amsmath
    - graphicx
    - titlesec
    - tabularx
    - mathtools
    - geometry
    - hyperref
---
## Build and Run
```bash
$gitclone https://github.com/KhusheyT/LATEXCS2002.git
```

### Using [PlatformIO IDE](https://platformio.org/platformio-ide)
1. Download IDE from https://platformio.org/platformio-ide
2. Open the codes.ino folder
### Build and Compile
1. Create a Folder and put platformio.ini file in that folder.
2. Now create a folder name (src) in the same folder in which you pasted the platformio.ini file and then put code.ino file inside the src folder.
3. Enter the directory of the folder where you have created platformio.ini and src using commmand cd..in the terminal.
4. Enter the command (pio run).
5. connect arduino and then upload the code using command (pio run -t upload).

### Using Terminal with [PlatformIO Core](https://github.com/platformio/platformio-core)
1. Install PlatformIO Core CLI by following instructions from [here](https://platformio.org/install/cli)
2. Navigate to codes.ino
3. Connect Arduino
4. Run:
```bash
$ pio run --target upload
```
