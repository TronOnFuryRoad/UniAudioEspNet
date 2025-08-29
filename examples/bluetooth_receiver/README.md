# Bluetooth Audio Receiver Example

This example configures the **ESP32 Audio Kit V2.2** as a Bluetooth A2DP sink. It receives audio from a paired Bluetooth source and plays it back through the board's headphone/line-out port using the onboard ES8388 codec.

## Usage

1. Install [PlatformIO](https://platformio.org/) and the required libraries.
2. Connect the ESP32 Audio Kit V2.2 via USB.
3. Build and upload the firmware:
   ```
   pio run -t upload
   ```
4. Pair a Bluetooth audio source (e.g., phone or laptop) with the device named `ESP32_Audio_Kit`.
5. Play audio on the source; it should output on the Audio Kit's headphone or line-out port.

## Notes
- This code uses the [ESP32-A2DP](https://github.com/pschatzmann/ESP32-A2DP) and [Arduino Audio Tools](https://github.com/pschatzmann/arduino-audio-tools) libraries to control Bluetooth and the ES8388 codec.
- The example is the first step toward building a network audio transceiver.
