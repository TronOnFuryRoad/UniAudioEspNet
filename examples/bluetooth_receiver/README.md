# Bluetooth Audio Receiver Example

This example configures the **ESP32 Audio Kit V2.2** as a Bluetooth A2DP sink. It receives audio from a paired Bluetooth source and plays it back through the board's headphone/line-out port using the onboard ES8388 codec.

## Usage

### Build and upload with Visual Studio Code

1. Install [Visual Studio Code](https://code.visualstudio.com/) and the [PlatformIO IDE](https://platformio.org/install/ide?install=vscode) extension.
2. Open the `examples/bluetooth_receiver` folder in VS Code.
3. Connect the ESP32 Audio Kit V2.2 via USB and select its serial port in the PlatformIO status bar.
4. In the PlatformIO toolbar or "Project Tasks" sidebar:
   - Click **Build** (✓) to verify compilation.
   - Click **Upload** (→) to flash the firmware to the board.
   - Optionally open **Monitor** to view serial output.

### Command-line alternative

```sh
pio run          # verify build
pio run -t upload  # flash firmware
```

5. Pair a Bluetooth audio source (e.g., phone or laptop) with the device named `ESP32_Audio_Kit`.
6. Play audio on the source; it should output on the Audio Kit's headphone or line-out port.

## Notes
- This code uses the [ESP32-A2DP](https://github.com/pschatzmann/ESP32-A2DP) and [Arduino Audio Tools](https://github.com/pschatzmann/arduino-audio-tools) libraries to control Bluetooth and the ES8388 codec.
- The example is the first step toward building a network audio transceiver.
