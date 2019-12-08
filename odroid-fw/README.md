# THIS DOES NOT WORK!

# Create an .fw file for the OdroidGO
The following steps are required to create a _.fw_ file which can be flashed via SD Card on the Odroid GO.

First you need to compile the mkfw tool:
```bash
cd mkfw && make && cd ..
```

Now we can obtain the _.bin_ file you should have compiled previously.

```bash
cp ../.pio/build/odroidgo/firmware.bin firmware.bin
````

The original image `phail-icon.png` and the _.raw_ file (`phail-icon.raw`) for the firmware icon are already included. 
The latter is generated form the first using ffmpeg.

To pack the _.bin_ together with the icon into a _.fw_ file execute:

```bash
./mkfw/mkfw "phail monitor" phail-icon.raw 0 16 1048576 app firmware.bin
```
This will give you a `firmware.fw`. For easier usage:
```bash
mv firmware.fw phail.fw
```
You can now copy the `phail.fw` onto your SD card and flash it by pressing __B__ while turing on your ODROID GO.

## See also
https://wiki.odroid.com/odroid_go/arduino_app