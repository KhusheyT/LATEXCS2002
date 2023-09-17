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
- LaTeX
    - karnaugh-map
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
https://github.com/KhusheyT/LATEXCS2002.git
```

### Using [PlatformIO IDE](https://platformio.org/platformio-ide)
1. Download IDE from https://platformio.org/platformio-ide
2. Open the codes.ino folder
3. Connect Arduino
4. Build and Run

### Using Terminal with [PlatformIO Core](https://github.com/platformio/platformio-core)
1. Install PlatformIO Core CLI by following instructions from [here](https://platformio.org/install/cli)
2. Navigate to codes.ino
3. Connect Arduino
4. Run:
```bash
$ pio run --target upload
```
